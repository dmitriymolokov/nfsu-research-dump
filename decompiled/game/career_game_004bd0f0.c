/* Decompiled from Speed.exe @ 004bd0f0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bd0f0(int param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int unaff_EBX;
  undefined1 local_730 [1092];
  int local_2ec;
  int local_2e8;
  
  puVar2 = *(undefined4 **)(unaff_EBX + 0x48);
  if (param_1 == -0x6edfbf62) {
    if (puVar2 != *(undefined4 **)(unaff_EBX + 0x40)) {
      *(undefined4 *)(unaff_EBX + 0x48) = puVar2[1];
    }
  }
  else if ((param_1 == -0x4a68e40f) && (puVar2 != *(undefined4 **)(unaff_EBX + 0x44))) {
    *(undefined4 *)(unaff_EBX + 0x48) = *puVar2;
  }
  piVar5 = &DAT_0075afa4;
  do {
    if (*(int *)(*(int *)(unaff_EBX + 0x48) + 0x738) == *piVar5) {
      FUN_00414a60();
      FUN_00414a60();
      goto LAB_004bd161;
    }
    piVar5 = piVar5 + 0xd2;
  } while ((int)piVar5 < 0x75f144);
  FUN_00414a10();
  FUN_00414a10();
LAB_004bd161:
  if (puVar2 != *(undefined4 **)(unaff_EBX + 0x48)) {
    FUN_004f8340(*(undefined4 *)(unaff_EBX + 0xc));
    if (*(int *)(*(int *)(*(int *)(unaff_EBX + 0x48) + 0x730) + 0xc54) == 0) {
      uVar3 = *(undefined4 *)(*(int *)(unaff_EBX + 0x48) + 0x738);
      uVar4 = uVar3;
      if (DAT_00777b4c == 8) {
        uVar4 = DAT_00758c28;
        DAT_00758c2c = uVar3;
      }
      DAT_00758c28 = uVar4;
      iVar6 = FUN_004b2330();
      if (iVar6 != 0) {
        FUN_004b1530(iVar6);
      }
      *(undefined4 *)(unaff_EBX + 0x90) = DAT_0073ad3c;
    }
    else {
      FUN_00417600();
      FUN_0057d160(1,0,0);
      pcVar8 = "DUMMY_SKIN1";
      local_2ec = -1;
      uVar7 = 0x44;
      do {
        local_2ec = local_2ec * 0x21 + uVar7;
        pbVar1 = (byte *)(pcVar8 + 1);
        uVar7 = (uint)*pbVar1;
        pcVar8 = pcVar8 + 1;
      } while (*pbVar1 != 0);
      pcVar8 = "DUMMY_WHEEL1";
      local_2e8 = -1;
      uVar7 = 0x44;
      do {
        local_2e8 = local_2e8 * 0x21 + uVar7;
        pbVar1 = (byte *)(pcVar8 + 1);
        uVar7 = (uint)*pbVar1;
        pcVar8 = pcVar8 + 1;
      } while (*pbVar1 != 0);
      FUN_0057d340(local_730);
      FUN_0057e9a0(local_730);
      iVar6 = FUN_004b2330();
      FUN_004323f0(&DAT_00748850,local_730);
      _DAT_0072cc80 = 1;
      if (iVar6 != 0) {
        FUN_004b0e50(iVar6,&DAT_00748850,1);
      }
    }
    FUN_004c6970();
    FUN_004f8910();
  }
  iVar6 = FUN_004f3f90(&DAT_00746104);
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x14) != 0)) {
    FUN_004f8000(unaff_EBX);
    FUN_004e6ac0();
  }
  return;
}

