/* spd-match: far pct=34.56 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/feng_p2/attempt_2/c2037 */
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

extern int DAT_006eb1e0;
extern int DAT_006eb200;
extern unsigned char *DAT_00717d7c;
extern unsigned char *_DAT_00717a80;
extern void LAB_00678706(void);

int __cdecl __stbuf(FILE *_File)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  void *pvVar4;
  
  iVar3 = __isatty(_File->_file);
  if (iVar3 == 0) {
    return 0;
  }
  if (_File == (FILE *)&DAT_006eb1e0) {
    iVar3 = 0;
  }
  else {
    if (_File != (FILE *)&DAT_006eb200) {
      return 0;
    }
    iVar3 = 1;
  }
  _DAT_00717a80 = _DAT_00717a80 + 1;
  if ((_File->_flag & 0x10c) != 0) {
    return 0;
  }
  piVar1 = &DAT_00717d7c + iVar3;
  if (*piVar1 == 0) {
    pvVar4 = _malloc(0x1000);
    *piVar1 = (int)pvVar4;
    if (pvVar4 == (void *)0x0) {
      _File->_base = (char *)&_File->_charbuf;
      _File->_ptr = (char *)&_File->_charbuf;
      _File->_bufsiz = 2;
      _File->_cnt = 2;
      goto LAB_00678706;
    }
  }
  pcVar2 = (char *)*piVar1;
  _File->_base = pcVar2;
  _File->_ptr = pcVar2;
  _File->_bufsiz = 0x1000;
  _File->_cnt = 0x1000;
LAB_00678706:
  *(ushort *)&_File->_flag = (ushort)_File->_flag | 0x1102;
  return 1;
}
