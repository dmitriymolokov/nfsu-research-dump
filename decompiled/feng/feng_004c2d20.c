/* Decompiled from Speed.exe @ 004c2d20 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c2d20(int param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int unaff_EBX;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte local_20;
  byte local_1f [31];
  
  iVar2 = unaff_EBX + 0x740;
  FUN_0057d160(1,0,0);
  FUN_00565da0("DUMMY_SKIN%d",1);
  iVar6 = -1;
  pbVar7 = &local_20;
  bVar3 = local_20;
  while (bVar3 != 0) {
    iVar6 = iVar6 * 0x21 + (uint)bVar3;
    pbVar1 = pbVar7 + 1;
    pbVar7 = pbVar7 + 1;
    bVar3 = *pbVar1;
  }
  *(int *)(unaff_EBX + 0xb84) = iVar6;
  FUN_00565da0("DUMMY_WHEEL%d",1);
  iVar6 = -1;
  pbVar7 = &local_20;
  while (local_20 != 0) {
    pbVar1 = pbVar7 + 1;
    iVar6 = iVar6 * 0x21 + (uint)local_20;
    pbVar7 = pbVar7 + 1;
    local_20 = *pbVar1;
  }
  *(int *)(unaff_EBX + 0xb88) = iVar6;
  FUN_0057d340(iVar2);
  FUN_0057e9a0(iVar2);
  iVar6 = FUN_0057ce10(0,0x1e,*(undefined4 *)(*(int *)(unaff_EBX + 0x730) + 0xc5c),0,0xffffffff);
  if (iVar6 != 0) {
    *(int *)(unaff_EBX + 0xc04) = iVar6;
    *(char *)(unaff_EBX + 0xd8a) = *(char *)(unaff_EBX + 0xd8a) + '\x01';
    FUN_0057ea80(iVar2);
  }
  if (*(char *)(unaff_EBX + 0xb64) == -1) {
    FUN_0057f2b0(1);
  }
  *(undefined4 *)(unaff_EBX + 0x734) = *(undefined4 *)(unaff_EBX + 0xb68);
  puVar8 = (undefined4 *)(param_1 + 8);
  puVar9 = (undefined4 *)(unaff_EBX + 0x748);
  for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_0057f2b0(1);
  FUN_0057fb80(iVar2,param_1);
  if (*(char *)(param_1 + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  fVar4 = (*(float *)(param_1 + 0x428) - _DAT_006f0d58) * _DAT_006cca94;
  fVar5 = _DAT_006f0d5c - _DAT_006f0d58;
  if (*(char *)(unaff_EBX + 0xb64) == -1) {
    FUN_0057f2b0(1);
  }
  *(float *)(unaff_EBX + 0xe64) =
       (fVar4 / fVar5 -
       ((*(float *)(unaff_EBX + 0xb68) - _DAT_006f0d58) * _DAT_006cca94) /
       (_DAT_006f0d5c - _DAT_006f0d58)) * _DAT_006cc92c;
  return;
}

