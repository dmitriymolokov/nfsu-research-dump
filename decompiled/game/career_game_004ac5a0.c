/* Decompiled from Speed.exe @ 004ac5a0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004ac5a0(int param_1,int param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *local_758;
  byte local_750;
  byte local_74f [1867];
  
  FUN_00417600();
  iVar3 = 0;
  piVar5 = (int *)(DAT_00734588 + 0xd0);
  do {
    if (*piVar5 == *(int *)(param_1 + 8)) {
      iVar3 = iVar3 * 0xc90 + DAT_00734588;
      goto LAB_004ac5e6;
    }
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 0x324;
  } while (iVar3 < 0x23);
  iVar3 = 0;
LAB_004ac5e6:
  uVar9 = 1;
  *param_3 = *(undefined4 *)(iVar3 + 0xc50);
  uVar4 = 1;
  if (param_2 == 1) {
    uVar4 = 2;
    uVar9 = 2;
  }
  FUN_00565da0("DUMMY_SKIN%d",uVar4);
  iVar3 = -1;
  pbVar6 = &local_750;
  bVar2 = local_750;
  while (bVar2 != 0) {
    iVar3 = iVar3 * 0x21 + (uint)bVar2;
    pbVar1 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
    bVar2 = *pbVar1;
  }
  param_3[0x111] = iVar3;
  FUN_00565da0("DUMMY_WHEEL%d",uVar9);
  iVar3 = -1;
  pbVar6 = &local_750;
  while (local_750 != 0) {
    pbVar1 = pbVar6 + 1;
    iVar3 = iVar3 * 0x21 + (uint)local_750;
    pbVar6 = pbVar6 + 1;
    local_750 = *pbVar1;
  }
  param_3[0x112] = iVar3;
  local_758 = (int *)(param_1 + 0x100);
  iVar3 = -(int)param_3;
  pcVar7 = (char *)(param_3 + 0x18b);
  puVar8 = param_3 + 0x113;
  do {
    if (*local_758 == 0) {
      *puVar8 = 0;
    }
    else {
      uVar4 = FUN_0057ce10((&DAT_006fb730)[pcVar7[param_1 + iVar3 + -0x5a4]],
                           (int)pcVar7[param_1 + iVar3 + -0x61c],*local_758,0,0xffffffff);
      *puVar8 = uVar4;
    }
    *pcVar7 = *pcVar7 + '\x01';
    FUN_0057ea80(param_3);
    local_758 = local_758 + 1;
    puVar8 = puVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while ((int)(pcVar7 + iVar3 + -0x62c) < 0x78);
  puVar8 = (undefined4 *)(param_1 + 0x2e0);
  puVar10 = param_3 + 2;
  for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_0057f2b0(1);
  *(undefined1 *)((int)param_3 + 0x425) = *(undefined1 *)(param_1 + 0xc);
  return;
}

