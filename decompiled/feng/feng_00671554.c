/* spd-match: far pct=8.19 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2037/batches/20260724T133151Z_w0_tc0 */
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

extern void LAB_0067162b(void);

uint __fread_lk(undefined1 *param_1,uint param_2,uint param_3,FILE *param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint _Size;
  uint local_8;
  
  uVar4 = param_2 * param_3;
  if (uVar4 == 0) {
    param_3 = 0;
  }
  else {
    puVar3 = param_1;
    param_1 = (undefined1 *)uVar4;
    if ((param_4->_flag & 0x10c) == 0) {
      local_8 = 0x1000;
    }
    else {
      local_8 = param_4->_bufsiz;
    }
    do {
      if (((param_4->_flag & 0x10c) == 0) || (uVar1 = param_4->_cnt, uVar1 == 0)) {
        if (param_1 < local_8) {
          iVar2 = __filbuf(param_4);
          if (iVar2 == -1) goto LAB_0067162b;
          *puVar3 = (char)iVar2;
          local_8 = param_4->_bufsiz;
          puVar3 = puVar3 + 1;
          param_1 = (undefined1 *)((int)param_1 - 1);
        }
        else {
          uVar1 = (uint)param_1;
          if (local_8 != 0) {
            uVar1 = (int)param_1 - (uint)param_1 % local_8;
          }
          iVar2 = __read(param_4->_file,puVar3,uVar1);
          if (iVar2 == 0) {
            param_4->_flag = param_4->_flag | 0x10;
LAB_0067162b:
            return (uVar4 - (int)param_1) / param_2;
          }
          if (iVar2 == -1) {
            param_4->_flag = param_4->_flag | 0x20;
            goto LAB_0067162b;
          }
          param_1 = (undefined1 *)((int)param_1 - iVar2);
          puVar3 = puVar3 + iVar2;
        }
      }
      else {
        _Size = (uint)param_1;
        if (uVar1 <= param_1) {
          _Size = uVar1;
        }
        _memcpy(puVar3,param_4->_ptr,_Size);
        param_1 = (undefined1 *)((int)param_1 - _Size);
        param_4->_cnt = param_4->_cnt - _Size;
        param_4->_ptr = param_4->_ptr + _Size;
        puVar3 = puVar3 + _Size;
      }
    } while (param_1 != (undefined1 *)0x0);
  }
  return param_3;
}
