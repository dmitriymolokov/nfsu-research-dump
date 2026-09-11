/* Decompiled from Speed.exe @ 00402820 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 FUN_00402820(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = *param_1;
  if ((iVar6 == -0x7ffcb000) || (iVar6 == -0x7ffcaff0)) {
    return 1;
  }
  if (iVar6 == 0x35021) {
    uVar2 = (int)param_1 + 0x17U & 0xfffffff0;
    if (*(int *)(uVar2 + 8) == 4) {
      puVar5 = (undefined4 *)(uVar2 + 0x10);
      puVar1 = DAT_0078e978;
      for (iVar6 = *(int *)(uVar2 + 0xc); DAT_0078e978 = puVar1, iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar1 = puVar5;
        DAT_0078e978 = puVar5;
        puVar5[1] = puVar1;
        *puVar5 = &DAT_0078e974;
        uVar3 = FUN_005461c0(puVar5[3],0,0);
        puVar5[5] = uVar3;
        puVar5 = puVar5 + 0x88;
        puVar1 = DAT_0078e978;
      }
    }
    return 1;
  }
  if (iVar6 == 0x35020) {
    uVar2 = (int)param_1 + 0x17U & 0xfffffff0;
    if (*(int *)(uVar2 + 8) == 5) {
      iVar6 = uVar2 + 0x10;
      for (iVar4 = *(int *)(uVar2 + 0xc); iVar4 != 0; iVar4 = iVar4 + -1) {
        FUN_00402b40(iVar6);
        FUN_00402bd0();
        iVar6 = iVar6 + 0xc0;
      }
    }
    return 1;
  }
  return 0;
}

