/* spd-match: far pct=13.64 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/feng_p2/attempt_2/c2037 */
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


uint __fastcall __inc(undefined4 param_1,FILE *param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = &param_2->_cnt;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *param_2->_ptr;
    param_2->_ptr = param_2->_ptr + 1;
    return (uint)bVar2;
  }
  uVar3 = __filbuf(param_2);
  return uVar3;
}
