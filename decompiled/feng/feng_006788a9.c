/* spd-match: far pct=8.65 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/feng_p2/attempt_2/c2037 */
#include "ghidra_compat.h"

struct _iobuf {
  char *_ptr;
  int _cnt;
  char *_base;
  int _flag;
  int _file;
  int _charbuf;
  int _bufsiz;
  char *_tmpfname;
};
int __cdecl __filbuf(FILE *);
int __cdecl __flsbuf(int, FILE *);
int __cdecl __read(int, void *, unsigned int);
int __cdecl __write(int, const void *, unsigned int);
long __cdecl __lseek(int, long, int);
int __cdecl __ftell_lk(FILE *);
int __cdecl __flush(FILE *);
int __cdecl __isatty(int);
void __cdecl __getbuf(FILE *);
int __cdecl __sopen(const char *, int, int, int);

int __cdecl FUN_00677354();
int __cdecl FUN_006789c2();
extern unsigned char *DAT_00793350;
extern int DAT_00794360;
extern void LAB_00678998(void);

FILE * __cdecl __getstream(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  FILE *pFVar4;
  FILE *_File;
  
  pFVar4 = (FILE *)0x0;
  __lock(1);
  iVar3 = 0;
  do {
    _File = pFVar4;
    if (DAT_00794360 <= iVar3) {
LAB_00678998:
      if (_File != (FILE *)0x0) {
        _File->_cnt = 0;
        _File->_flag = 0;
        _File->_base = (char *)0x0;
        _File->_ptr = (char *)0x0;
        _File->_tmpfname = (char *)0x0;
        _File->_file = -1;
      }
      FUN_006789c2();
      return _File;
    }
    iVar1 = *(int *)(DAT_00793350 + iVar3 * 4);
    if (iVar1 == 0) {
      iVar3 = iVar3 * 4;
      pvVar2 = _malloc(0x38);
      *(void **)(iVar3 + DAT_00793350) = pvVar2;
      if (*(int *)(iVar3 + DAT_00793350) != 0) {
        iVar1 = ___crtInitCritSecAndSpinCount(*(int *)(iVar3 + DAT_00793350) + 0x20,4000);
        if (iVar1 == 0) {
          _free(*(void **)(iVar3 + DAT_00793350));
          *(undefined4 *)(iVar3 + DAT_00793350) = 0;
        }
        else {
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_00793350) + 0x20));
          _File = *(FILE **)(iVar3 + DAT_00793350);
        }
      }
      goto LAB_00678998;
    }
    if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
      if (((2 < iVar3) && (iVar3 < 0x14)) && (iVar1 = FUN_00677354(iVar3 + 0x10), iVar1 == 0))
      goto LAB_00678998;
      __lock_file2(iVar3,*(void **)(DAT_00793350 + iVar3 * 4));
      _File = *(FILE **)(DAT_00793350 + iVar3 * 4);
      if ((_File->_flag & 0x83) == 0) goto LAB_00678998;
      __unlock_file2(iVar3,_File);
    }
    iVar3 = iVar3 + 1;
  } while( true );
}
