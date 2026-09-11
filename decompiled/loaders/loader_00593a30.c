/* Decompiled from Speed.exe @ 00593a30 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00593a30(int param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  puVar8 = DAT_007377d8;
  puVar7 = (undefined4 *)FUN_0040a880();
  iVar5 = DAT_007344b0;
  while (puVar4 = puVar8, puVar8 = DAT_007377d8, puVar4 != puVar7) {
    puVar8 = (undefined4 *)*puVar4;
    if (0xf0 < DAT_006f08a0 - puVar4[3]) {
      puVar2 = (undefined4 *)puVar4[1];
      *puVar2 = puVar8;
      puVar8[1] = puVar2;
      if (puVar4[4] != 0) {
        pbVar1 = (byte *)(puVar4[4] + 0xe);
        *pbVar1 = *pbVar1 & 0xef;
        puVar2 = (undefined4 *)puVar4[5];
        if (puVar2 != (undefined4 *)0x0) {
          FUN_00591c90(puVar2);
          iVar6 = DAT_007344c8;
          iVar9 = *(int *)(DAT_007344c8 + 0x18);
          *puVar2 = *(undefined4 *)(DAT_007344c8 + 0x10);
          *(int *)(iVar6 + 0x18) = iVar9 + -1;
          *(undefined4 **)(iVar6 + 0x10) = puVar2;
        }
      }
      iVar9 = *(int *)(iVar5 + 0x18);
      *puVar4 = *(undefined4 *)(iVar5 + 0x10);
      *(int *)(iVar5 + 0x18) = iVar9 + -1;
      *(undefined4 **)(iVar5 + 0x10) = puVar4;
    }
  }
  for (; (puVar8 != puVar7 && (puVar8[2] != param_1)); puVar8 = (undefined4 *)*puVar8) {
  }
  if (((undefined4 **)puVar8 == &DAT_007377d8) && (*(int *)(iVar5 + 0x18) != *(int *)(iVar5 + 0x2c))
     ) {
    puVar8 = *(undefined4 **)(iVar5 + 0x10);
    iVar9 = *(int *)(iVar5 + 0x18) + 1;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      uVar3 = *puVar8;
      if (*(int *)(iVar5 + 0x1c) < iVar9) {
        *(int *)(iVar5 + 0x1c) = iVar9;
      }
      *(int *)(iVar5 + 0x18) = iVar9;
      *(undefined4 *)(iVar5 + 0x10) = uVar3;
      puVar8[2] = param_1;
      puVar8[3] = DAT_006f08a0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
    }
    *DAT_007377dc = puVar8;
    puVar7 = puVar8;
    puVar8[1] = DAT_007377dc;
    DAT_007377dc = puVar7;
    *puVar8 = &DAT_007377d8;
  }
  return;
}

