/* spd-match: far pct=15.20 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2110 */
#include "ghidra_compat.h"

int __cdecl FUN_00487da0();
int __cdecl FUN_00522e50();
int __cdecl FUN_00522f90();
extern int DAT_006fb02c;
extern int DAT_007356a8;
extern int DAT_00735e84;
extern int DAT_0073ad3c;
extern int DAT_0074810c;
extern int _DAT_006b6b34;
extern int _DAT_006b6b3c;
int unaff_EDI;

void FUN_004b01c0(void)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int unaff_EDI;
  
  fVar3 = _DAT_006b6b3c;
  fVar2 = ((int)_DAT_006b6b34) + (int)_DAT_006b6b34;
  *(undefined4 *)(unaff_EDI + 0xf8) = 0;
  fVar3 = fVar3 * _DAT_006b6b3c;
  *(undefined4 *)(unaff_EDI + 0xfc) = 0;
  *(undefined4 *)(unaff_EDI + 0x100) = 0;
  *(undefined4 *)(unaff_EDI + 0xf0) = 0;
  DAT_006fb02c = 0;
  DAT_00735e84 = 0;
  *(float *)(unaff_EDI + 0xf4) = fVar2 / fVar3;
  DAT_0074810c = DAT_0073ad3c;
  FUN_00487da0();
  iVar4 = DAT_007356a8;
  if (((*(int *)(((int)DAT_007356a8) + 0xbc) != 0) && (*(int *)(*(int *)(unaff_EDI + 0x114) + 0x1ca8) != 0)
      ) && (puVar1 = (undefined4 *)(*(int *)(unaff_EDI + 0x114) + 0x1570),
           puVar1 != (undefined4 *)0x0)) {
    FUN_00522f90();
    FUN_00522e50(*(undefined4 *)(iVar4 + 0xbc),0x55,*(undefined4 *)(unaff_EDI + 0x110),*puVar1);
  }
  return;
}
