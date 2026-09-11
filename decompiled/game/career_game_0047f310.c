/* Decompiled from Speed.exe @ 0047f310 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0047f310(int param_1)

{
  byte *pbVar1;
  int *piVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  undefined *puVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  uVar5 = DAT_006ffdbc;
  DAT_006ffdbc = 0x41f00000;
  if (*(float *)(param_1 + 0x24) <= *(float *)(param_1 + 0x2c)) {
    DAT_006ffdbc = uVar5;
    return;
  }
  fVar3 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x2c);
  pcVar7 = "NISFlagGirl";
  iVar9 = -1;
  uVar6 = 0x4e;
  do {
    pbVar1 = (byte *)(pcVar7 + 1);
    iVar9 = iVar9 * 0x21 + uVar6;
    pcVar7 = pcVar7 + 1;
    uVar6 = (uint)*pbVar1;
  } while (*pbVar1 != 0);
  puVar11 = (undefined *)0x0;
  do {
    puVar4 = DAT_0073b138;
    if (iVar9 == DAT_0073b128) {
      puVar10 = &DAT_0073b118;
    }
    else {
      while( true ) {
        if ((undefined4 **)puVar4 == &DAT_0073b138) goto LAB_0047f39e;
        uVar12 = FUN_00577d10(iVar9);
        puVar10 = (undefined *)uVar12;
        if (puVar10 != (undefined *)0x0) break;
        puVar4 = (undefined4 *)*(undefined4 *)((ulonglong)uVar12 >> 0x20);
      }
    }
    if (puVar11 == (undefined *)0x0) {
      puVar11 = *(undefined **)(puVar10 + 0x2c);
      if (puVar11 == puVar10 + 0x2c) {
        puVar11 = (undefined *)FUN_00577e60(0);
      }
      else if (puVar11 == (undefined *)0x0) {
LAB_0047f463:
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar11 = puVar11 + -4;
      }
    }
    else {
      piVar2 = (int *)(puVar11 + 0x18);
      if (*(int *)(puVar11 + 4) == 0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar11 = (undefined *)(*(int *)(puVar11 + 4) + -4);
      }
      if (*piVar2 == -0x2c) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = (undefined *)(*piVar2 + 0x28);
      }
      if (puVar11 == puVar8) {
        uVar12 = FUN_00577e60(0);
        puVar11 = (undefined *)uVar12;
        if (puVar11 == (undefined *)0x0) {
          if ((undefined *)((ulonglong)uVar12 >> 0x20) == puVar10) goto LAB_0047f463;
          puVar11 = (undefined *)FUN_00577ed0();
        }
      }
    }
    if (puVar11 == (undefined *)0x0) {
LAB_0047f39e:
      if ((*(int *)(param_1 + 0x20) != 0) && (iVar9 = 0, 0 < DAT_007361c4)) {
        do {
          if ((*(int *)((&DAT_007361bc)[iVar9] + 0x27c) != 0) &&
             (*(int *)(*(int *)((&DAT_007361bc)[iVar9] + 0x27c) + 0xc) == 0x16)) {
            FUN_0048e7b0(fVar3,1);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < DAT_007361c4);
      }
      if (DAT_006fc5f0 != 0) {
        FUN_0047c580(&DAT_00779800,fVar3);
      }
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x24);
      DAT_006ffdbc = uVar5;
      return;
    }
    piVar2 = *(int **)(puVar11 + 0x20);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(fVar3);
      *(undefined1 *)((int)piVar2 + 0x72) = 0;
    }
  } while( true );
}

