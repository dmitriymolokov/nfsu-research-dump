/* Decompiled from Speed.exe @ 00480750 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00480750(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  short sVar4;
  float fVar5;
  bool bVar6;
  float fVar7;
  int iVar8;
  short *psVar9;
  short *extraout_EDX;
  int unaff_ESI;
  float10 fVar10;
  float10 fVar11;
  
  iVar8 = param_2 * 0x4c;
  *(bool *)(unaff_ESI + 0x60) = *(char *)(iVar8 + 0xd4 + unaff_ESI) != '\0';
  *(bool *)(unaff_ESI + 0x61) = *(char *)(iVar8 + 0xd5 + unaff_ESI) != '\0';
  iVar1 = param_2 * 0x13 + param_1;
  *(undefined4 *)(unaff_ESI + 0x7c) = *(undefined4 *)(unaff_ESI + 0x114 + iVar1 * 4);
  *(undefined4 *)(unaff_ESI + 0x80) = *(undefined4 *)(unaff_ESI + 0x10c + iVar1 * 4);
  iVar1 = param_1 * 0xc + iVar8;
  *(undefined4 *)(unaff_ESI + 100) = *(undefined4 *)(iVar1 + 0xdc + unaff_ESI);
  *(undefined4 *)(unaff_ESI + 0x68) = *(undefined4 *)(iVar1 + 0xe0 + unaff_ESI);
  *(undefined4 *)(unaff_ESI + 0x6c) =
       *(undefined4 *)((param_2 + 3) * 0x4c + param_1 * 0xc + unaff_ESI);
  *(undefined4 *)(unaff_ESI + 0x70) = *(undefined4 *)(iVar1 + unaff_ESI + 0xf4);
  *(undefined4 *)(unaff_ESI + 0x74) = *(undefined4 *)(iVar1 + unaff_ESI + 0xf8);
  *(undefined4 *)(unaff_ESI + 0x78) = *(undefined4 *)(iVar8 + (param_1 * 3 + 0x3f) * 4 + unaff_ESI);
  if ((*(char *)(iVar8 + 0xd0 + unaff_ESI) == '\0') &&
     ((psVar9 = (short *)FUN_0047d680(), psVar9 != (short *)0x0 ||
      (psVar9 = (short *)FUN_0047d680(), psVar9 != (short *)0x0)))) {
    *(undefined1 *)(unaff_ESI + 0x60) = 1;
    *(undefined1 *)(unaff_ESI + 0x61) = 1;
    uVar2 = _DAT_006cc7dc;
    if (*psVar9 == 3) {
      uVar2 = DAT_006fbf1c;
    }
    *(undefined4 *)(unaff_ESI + 0x7c) = uVar2;
    fVar10 = (float10)FUN_00564b10();
    fVar11 = (float10)FUN_00564b10();
    *(float *)(unaff_ESI + 0x80) =
         (float)(((float10)_DAT_006b6c9c / ((float10)(float)fVar10 / fVar11)) *
                (float10)_DAT_006b6ca0);
    fVar10 = (float10)FUN_00564b10();
    fVar11 = (float10)FUN_00564b10();
    sVar4 = *extraout_EDX;
    if (((sVar4 == 1) || (sVar4 == 0)) || (sVar4 == 4)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    uVar2 = *(undefined4 *)(extraout_EDX + 6);
    fVar5 = *(float *)(extraout_EDX + 2);
    fVar3 = *(float *)(extraout_EDX + 4);
    if (bVar6) {
      fVar10 = ((float10)(float)fVar10 / fVar11) * (float10)fVar5 + (float10)fVar3;
      fVar7 = DAT_006cc7a4;
    }
    else {
      fVar10 = (float10)fVar3 - (float10)(float)fVar10 / fVar11;
      fVar7 = fVar5 + _DAT_006cc7bc;
    }
    *(float *)(unaff_ESI + 0x70) = fVar7;
    *(float *)(unaff_ESI + 0x78) = (float)fVar10;
    *(float *)(unaff_ESI + 100) = fVar5;
    *(undefined4 *)(unaff_ESI + 0x68) = uVar2;
    *(float *)(unaff_ESI + 0x6c) = fVar3;
    *(undefined4 *)(unaff_ESI + 0x74) = 0;
  }
  return;
}

