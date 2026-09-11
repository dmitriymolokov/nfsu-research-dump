/* spd-match: far pct=14.52 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00620bc0();
extern unsigned char *DAT_007096a4;
extern int DAT_007096ac;
extern unsigned char *PTR_FUN_006dfa9c;

void __fastcall FUN_0061f050(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_006dfa9c)(0x100,"RenderContext new");
  if (iVar1 == 0) {
    DAT_007096a4 = 0;
  }
  else {
    DAT_007096a4 = FUN_00620bc0(param_1);
  }
  *(undefined4 *)(*(int *)(DAT_007096a4 + 0xc) + 4) = *(undefined4 *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = DAT_007096a4;
  DAT_007096ac = DAT_007096a4;
  return;
}
