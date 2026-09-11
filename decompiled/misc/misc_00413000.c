/* Decompiled from Speed.exe @ 00413000 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00413000(void)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  if (DAT_00736350 != (int *)0x0) {
    (**(code **)(*DAT_00736350 + 8))(DAT_00736350);
    DAT_00736350 = (int *)0x0;
  }
  uVar6 = 0;
  puVar5 = &DAT_00736350;
  puVar4 = &DAT_006a6f90;
  uVar3 = 0x800;
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  iVar2 = DirectInput8Create(pHVar1,uVar3,puVar4,puVar5,uVar6);
  if (iVar2 < 0) {
    DAT_00736350 = (int *)0x0;
  }
  return;
}

