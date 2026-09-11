/* Decompiled from Speed.exe @ 00420890 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00420890(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 auStack_80 [32];
  
  iVar6 = DAT_00779c70;
  if (DAT_00779c70 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = DAT_00779c70 + -4;
  }
  iVar4 = FUN_0040cb70();
  puVar3 = DAT_007377e8;
  while (DAT_007377e8 = puVar3, iVar7 != iVar4) {
    if (*(int *)(iVar7 + 4) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar7 + 4) + -4;
    }
    pcVar1 = (char *)(iVar7 + 0x16);
    iVar7 = iVar6;
    iVar6 = DAT_00779c70;
    if (*pcVar1 != '\0') {
      FUN_00468d70(param_2);
      puVar3 = DAT_007377e8;
      iVar6 = DAT_00779c70;
    }
  }
  puVar5 = (undefined4 *)FUN_0040a880();
  while (puVar3 != puVar5) {
    puVar2 = (undefined4 *)*puVar3;
    puVar3[2] = param_2;
    puVar3[3] = 0;
    puVar3[4] = 0xbf800000;
    if (puVar3[5] == 0) {
      DAT_007313f4 = 0;
    }
    FUN_00592b30(puVar3);
    iVar6 = DAT_00779c70;
    puVar3 = puVar2;
  }
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 + -4;
  }
  while (iVar6 != iVar4) {
    if ((*(undefined **)(iVar6 + 0xc) != &DAT_007377f0) && (*(char *)(iVar6 + 0x1a) == '\0')) {
      *(undefined **)(iVar6 + 0xc) = &DAT_007377f0;
    }
    if (*(int *)(iVar6 + 4) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar6 + 4) + -4;
    }
  }
  _DAT_007377f8 = param_2;
  _DAT_007377fc = 0;
  _DAT_00737800 = 0xbf800000;
  if (DAT_00737804 == 0) {
    DAT_007313f4 = 0;
  }
  FUN_00592c50();
  iVar6 = 0;
  for (puVar3 = DAT_007377e8; puVar3 != puVar5; puVar3 = (undefined4 *)*puVar3) {
    FUN_00592e80();
    auStack_80[iVar6] = puVar3;
    iVar6 = iVar6 + 1;
  }
  iVar7 = 0;
  if (0 < iVar6) {
    do {
      FUN_00593100();
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar6);
  }
  if (DAT_00736204 != 0) {
    if ((undefined4 **)DAT_007377e8 == &DAT_007377e8) goto LAB_00420a80;
    FUN_005936d0();
  }
  if ((undefined4 **)DAT_007377e8 != &DAT_007377e8) {
    do {
      FUN_00592d50();
      puVar3 = DAT_007377e8;
      if (DAT_00736204 != 0) {
        for (; puVar3 != puVar5; puVar3 = (undefined4 *)*puVar3) {
          for (puVar2 = (undefined4 *)puVar3[7]; puVar2 != puVar3 + 7;
              puVar2 = (undefined4 *)*puVar2) {
          }
        }
      }
    } while ((float)DAT_007377e8[3] != (float)DAT_007377e8[2]);
  }
LAB_00420a80:
  FUN_00592d50();
  iVar6 = DAT_00736088;
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  while (puVar5 = puVar3, puVar5 != (undefined4 *)(param_1 + 0x10)) {
    puVar3 = (undefined4 *)*puVar5;
    if (_DAT_007000d8 <= (float)(DAT_0073ad34 - puVar5[3]) * _DAT_006cca38) {
      iVar7 = puVar5[0x19];
      puVar5 = *(undefined4 **)(iVar7 + 0x264);
      if (puVar5 != (undefined4 *)0x0) {
        FUN_00465700();
        iVar4 = *(int *)(iVar6 + 0x18);
        *puVar5 = *(undefined4 *)(iVar6 + 0x10);
        *(int *)(iVar6 + 0x18) = iVar4 + -1;
        *(undefined4 **)(iVar6 + 0x10) = puVar5;
      }
      *(undefined4 *)(iVar7 + 0x264) = 0;
      DAT_00736004 = DAT_00736004 + -1;
      pcVar1 = (char *)(*(int *)(iVar7 + 600) + 0x1c);
      *pcVar1 = *pcVar1 + -1;
      pcVar1 = (char *)(*(int *)(iVar7 + 0x25c) + 0x1c);
      *pcVar1 = *pcVar1 + -1;
    }
  }
  DAT_00736204 = 0;
  return;
}

