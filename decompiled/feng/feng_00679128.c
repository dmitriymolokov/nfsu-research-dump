/* spd-match: far pct=7.09 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/feng_p2/attempt_2/c2037 */
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

int __cdecl FUN_006791ba();
extern int DAT_00793350;
extern int DAT_00794360;

int __cdecl __fcloseall(void)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  
  local_20 = 0;
  __lock(1);
  for (iVar3 = 3; iVar3 < DAT_00794360; iVar3 = iVar3 + 1) {
    iVar2 = iVar3 * 4;
    _File = *(FILE **)(iVar2 + DAT_00793350);
    if (_File != (FILE *)0x0) {
      if ((_File->_flag & 0x83) != 0) {
        iVar1 = _fclose(_File);
        if (iVar1 != -1) {
          local_20 = local_20 + 1;
        }
      }
      if (0x13 < iVar3) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar2 + DAT_00793350) + 0x20));
        _free(*(void **)(iVar2 + DAT_00793350));
        *(undefined4 *)(iVar2 + DAT_00793350) = 0;
      }
    }
  }
  FUN_006791ba();
  return local_20;
}
