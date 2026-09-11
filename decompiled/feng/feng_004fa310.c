/* spd-match: far pct=1.27 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004fe170();
int unaff_EDI;
int unaff_ESI;

void __fastcall FUN_004fa310(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  undefined4 uVar3;
  undefined1 local_40 [64];
  
  if ((param_1 != (int *)0x0) && (*(short *)(unaff_EDI + 0x20) != 0)) {
    cVar2 = (**(code **)(*param_1 + 0x2c))(*(short *)(unaff_EDI + 0x20),local_40);
    if (cVar2 == '\0') {
      iVar1 = *(int *)(unaff_EDI + 0x2c);
      *unaff_ESI = *(undefined4 *)(iVar1 + 0x1c);
      unaff_ESI[1] = *(undefined4 *)(iVar1 + 0x20);
      return;
    }
    uVar3 = 0;
    FUN_004fe170();
    *unaff_ESI = uVar3;
    unaff_ESI[1] = 0;
    return;
  }
  iVar1 = *(int *)(unaff_EDI + 0x2c);
  *unaff_ESI = *(undefined4 *)(iVar1 + 0x1c);
  unaff_ESI[1] = *(undefined4 *)(iVar1 + 0x20);
  return;
}
