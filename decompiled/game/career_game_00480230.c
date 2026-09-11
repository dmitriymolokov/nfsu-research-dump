/* Decompiled from Speed.exe @ 00480230 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


int FUN_00480230(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0xcb8) < 1) {
    fVar1 = *(float *)(param_1 + 0x814);
  }
  else {
    fVar1 = *(float *)(unaff_EDI + 0xcc0);
  }
  uVar2 = *(uint *)(unaff_EDI + 0xcb0);
  uVar6 = uVar2 - 1;
  if (0 < (int)uVar6) {
    pfVar7 = (float *)(uVar6 * 0x4c + 0xd8 + unaff_EDI);
    do {
      if (*pfVar7 <= fVar1) break;
      uVar6 = uVar6 - 1;
      pfVar7 = pfVar7 + -0x13;
    } while (0 < (int)uVar6);
  }
  if (param_2 != (undefined4 *)0x0) {
    uVar4 = ((int)uVar6 < 1) - 1 & uVar6;
    uVar5 = uVar4;
    if ((int)uVar4 > (int)uVar2) {
      uVar5 = uVar2;
    }
    uVar3 = DAT_007372b0;
    if (SBORROW4(uVar5,uVar2) != ((int)uVar4 <= (int)uVar2 && (int)(uVar4 - uVar2) < 0)) {
      uVar3 = *(undefined4 *)(uVar5 * 0x4c + 0xd8 + unaff_EDI);
    }
    *param_2 = uVar3;
  }
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = *(uint *)(unaff_EDI + 0xcb0);
    uVar4 = uVar6 + 1 & ((int)(uVar6 + 1) < 1) - 1;
    uVar5 = uVar4;
    if ((int)uVar4 > (int)uVar2) {
      uVar5 = uVar2;
    }
    if (SBORROW4(uVar5,uVar2) != ((int)uVar4 <= (int)uVar2 && (int)(uVar4 - uVar2) < 0)) {
      *param_3 = *(undefined4 *)(uVar5 * 0x4c + 0xd8 + unaff_EDI);
      return uVar6 * 0x4c + 0xd0 + unaff_EDI;
    }
    *param_3 = DAT_007372b0;
  }
  return uVar6 * 0x4c + 0xd0 + unaff_EDI;
}

