/* spd-match: far pct=69.44 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2079/batches/20260724T133053Z_w0_tc0 */
#include "ghidra_compat.h"

/* M3.75 C2079 — complete FILE/_iobuf so ``FILE local_24`` is sized */
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
int __cdecl __flsbuf(int, FILE *);

int __cdecl FUN_0067604e();
extern char stack0x0000000c;

undefined4 FUN_0067101f(char *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  FILE local_24;
  
  local_24._cnt = 0x7fffffff;
  local_24._flag = 0x42;
  local_24._base = param_1;
  local_24._ptr = param_1;
  uVar1 = FUN_0067604e(&local_24,param_2,&stack0x0000000c);
  if (param_1 != (char *)0x0) {
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return uVar1;
}
