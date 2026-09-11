/* Decompiled from Speed.exe @ 00454a20 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00454a20(int param_1)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  undefined1 uVar4;
  int iVar5;
  int *unaff_EDI;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = *unaff_EDI;
  if (iVar1 != 0) {
    fVar6 = (float10)FUN_00443d60(unaff_EDI[1],*(undefined4 *)(param_1 + 0x814));
    if ((float10)DAT_006cc7a4 < fVar6) {
      fVar7 = (float10)FUN_004570d0((float)fVar6);
      fVar3 = (float10)_DAT_006b76f4;
      iVar5 = iVar1;
      if ((*(int *)(iVar1 + 0xc) == 0x24cebc53) && (0 < *(int *)(iVar1 + 0x90))) {
        iVar5 = *(int *)(iVar1 + 0x98);
      }
      iVar5 = *(int *)(iVar5 + 0x20);
      fVar2 = *(float *)(*(int *)(iVar1 + 0x20) + 0x60);
      iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + 0x14);
      if ((iVar1 == 0) || (*(char *)(iVar1 + 0x34) < '\0')) {
        local_18 = 0xbf800000;
        if (iVar1 != 0) {
          local_18 = *(undefined4 *)(iVar1 + 100);
        }
        fVar8 = (float10)FUN_0057a020(local_18,unaff_EDI[2]);
        fVar8 = fVar8 + (float10)fVar2;
      }
      else {
        fVar8 = (float10)FUN_00579ff0(unaff_EDI[2]);
      }
      iVar1 = *(int *)(iVar5 + 0x14);
      if ((iVar1 == 0) || (*(char *)(iVar1 + 0x34) < '\0')) {
        local_14 = 0xbf800000;
        if (iVar1 != 0) {
          local_14 = *(undefined4 *)(iVar1 + 100);
        }
        fVar9 = (float10)FUN_0057a020(local_14,unaff_EDI[3]);
        fVar9 = fVar9 + (float10)fVar2;
      }
      else {
        fVar9 = (float10)FUN_00579ff0(unaff_EDI[3]);
      }
      if (((float)(fVar7 - fVar3) < (float)fVar8) || (fVar9 < (float10)(float)(fVar7 - fVar3))) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      if (((((float)fVar8 < DAT_006cc7a4) && ((float10)DAT_006cc7a4 < fVar9)) &&
          (ABS(*(float *)(param_1 + 0x3d4)) < _DAT_006cc8bc !=
           (ABS(*(float *)(param_1 + 0x3d4)) == _DAT_006cc8bc))) && ((float)fVar6 < _DAT_006ccac0))
      {
        return 0;
      }
      return uVar4;
    }
  }
  return 1;
}

