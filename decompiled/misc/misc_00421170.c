/* Decompiled from Speed.exe @ 00421170 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


int FUN_00421170(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int local_4;
  
  local_4 = 0;
  uVar5 = DAT_0073ad34;
  if (0 < *(int *)(param_1 + 0x18)) {
    piVar6 = (int *)(param_1 + 0x28);
    puVar7 = (undefined4 *)(param_1 + 0xa8);
    do {
      iVar3 = *piVar6;
      iVar4 = FUN_00674898();
      uVar1 = *(undefined4 *)(iVar3 + 100);
      uVar2 = *(undefined4 *)(iVar3 + 0x68);
      uVar5 = uVar5 * 0x21 - iVar4;
      puVar7[-2] = *(undefined4 *)(iVar3 + 0x60);
      puVar7[-1] = uVar1;
      local_4 = local_4 + 1;
      *puVar7 = uVar2;
      piVar6 = piVar6 + 1;
      puVar7 = puVar7 + 4;
    } while (local_4 < *(int *)(param_1 + 0x18));
  }
  return (uVar5 >> 0x10) + uVar5;
}

