/* spd-match: far pct=17.58 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00419c20();
extern int DAT_006a6f90;
extern unsigned char *DAT_00736338;
extern void LAB_00418e70(void);

void FUN_00418e10(void)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  puVar5 = &DAT_00736338;
  puVar4 = &DAT_006a6f90;
  uVar3 = 0x800;
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  iVar2 = DirectInput8Create(pHVar1,uVar3,puVar4,puVar5,uVar6);
  if (iVar2 < 0) {
    FUN_00419c20("ERROR: failed to create a DInput object\n");
  }
  iVar2 = (**(code **)(*DAT_00736338 + 0x10))(DAT_00736338,4,&LAB_00418e70,uVar3,1);
  if (iVar2 < 0) {
    FUN_00419c20("ERROR: could not enumerate devices\n");
  }
  return;
}
