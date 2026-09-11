/* spd-match: far pct=20.62 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00671077();
int __cdecl FUN_006720ea();
extern code *DAT_0073651c;
extern char stack0x00000008;

void FUN_00404ab0(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_400 [1024];
  
  FUN_00671077(local_400,param_1,&stack0x00000008);
  if (DAT_0073651c == (code *)0x0) {
    FID_conflict__wprintf("FATAL ERROR: ");
    FID_conflict__wprintf("%s\n",local_400);
  }
  else {
    iVar2 = (*DAT_0073651c)(local_400);
    if (iVar2 == 0) {
      return;
    }
  }
  FUN_006720ea(1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
