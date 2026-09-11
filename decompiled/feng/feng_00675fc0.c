/* spd-match: far pct=5.88 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2037/batches/20260724T133151Z_w0_tc0 */
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

int unaff_ESI;

void __cdecl write_char(void)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  FILE *in_ECX;
  int *unaff_ESI;
  
  if (((in_ECX->_flag & 0x40) == 0) || (in_ECX->_base != (char *)0x0)) {
    piVar1 = &in_ECX->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL,in_ECX);
    }
    else {
      *in_ECX->_ptr = in_AL;
      in_ECX->_ptr = in_ECX->_ptr + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}
