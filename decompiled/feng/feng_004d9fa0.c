/* Decompiled from Speed.exe @ 004d9fa0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004d9fa0(uint *param_1,uint *param_2,uint *param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint *unaff_EDI;
  
  puVar2 = DAT_0073ad40;
  puVar3 = (undefined4 *)FUN_0040a880();
  for (; puVar2 != puVar3; puVar2 = (undefined4 *)*puVar2) {
    uVar5 = puVar2[3];
    uVar4 = puVar2[4] * 0x30 + uVar5;
    for (; uVar5 < uVar4; uVar5 = uVar5 + 0x30) {
      if (*(char *)(uVar5 + 0x10) == '\x1e') goto joined_r0x004d9fea;
    }
  }
  uVar5 = 0;
joined_r0x004d9fea:
  for (; uVar5 != 0; uVar5 = FUN_0057ce10(0,0x1e,0,uVar5,0xffffffff)) {
    pcVar7 = "VINYL_L1_COLOR02";
    iVar6 = -1;
    uVar4 = 0x56;
    do {
      iVar6 = iVar6 * 0x21 + uVar4;
      pbVar1 = (byte *)(pcVar7 + 1);
      uVar4 = (uint)*pbVar1;
      pcVar7 = pcVar7 + 1;
    } while (*pbVar1 != 0);
    if (*(int *)(uVar5 + 8) == iVar6) {
      *unaff_EDI = uVar5;
    }
    pcVar7 = "VINYL_L1_COLOR01";
    iVar6 = -1;
    uVar4 = 0x56;
    do {
      iVar6 = iVar6 * 0x21 + uVar4;
      pbVar1 = (byte *)(pcVar7 + 1);
      uVar4 = (uint)*pbVar1;
      pcVar7 = pcVar7 + 1;
    } while (*pbVar1 != 0);
    if (*(int *)(uVar5 + 8) == iVar6) {
      *param_1 = uVar5;
    }
    pcVar7 = "VINYL_L1_COLOR03";
    iVar6 = -1;
    uVar4 = 0x56;
    do {
      iVar6 = iVar6 * 0x21 + uVar4;
      pbVar1 = (byte *)(pcVar7 + 1);
      uVar4 = (uint)*pbVar1;
      pcVar7 = pcVar7 + 1;
    } while (*pbVar1 != 0);
    if (*(int *)(uVar5 + 8) == iVar6) {
      *param_2 = uVar5;
    }
    pcVar7 = "VINYL_L1_COLOR04";
    iVar6 = -1;
    uVar4 = 0x56;
    do {
      iVar6 = iVar6 * 0x21 + uVar4;
      pbVar1 = (byte *)(pcVar7 + 1);
      uVar4 = (uint)*pbVar1;
      pcVar7 = pcVar7 + 1;
    } while (*pbVar1 != 0);
    if (*(int *)(uVar5 + 8) == iVar6) {
      *param_3 = uVar5;
    }
  }
  if ((((*unaff_EDI != 0) && (*param_1 != 0)) && (*param_2 != 0)) && (*param_3 != 0)) {
    return 1;
  }
  return 0;
}

