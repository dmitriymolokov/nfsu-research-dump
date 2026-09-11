/* Decompiled from Speed.exe @ 00480b40 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480b40(float param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_ESI;
  float *pfVar7;
  
  uVar3 = (uint)param_1;
  uVar2 = *(uint *)(unaff_ESI + 0xcb0);
  if ((int)param_1 < (int)(uVar2 - 1)) {
    pfVar7 = (float *)((int)param_1 * 0x4c + 0x124 + unaff_ESI);
    uVar4 = (uint)param_1;
    do {
      uVar5 = ((int)uVar4 < 1) - 1 & uVar4;
      uVar6 = uVar5;
      if ((int)uVar5 > (int)uVar2) {
        uVar6 = uVar2;
      }
      if (SBORROW4(uVar6,uVar2) == ((int)uVar5 <= (int)uVar2 && (int)(uVar5 - uVar2) < 0)) {
        param_1 = DAT_007372b0;
      }
      else {
        param_1 = *(float *)(uVar6 * 0x4c + 0xd8 + unaff_ESI);
      }
      uVar4 = uVar4 + 1;
      uVar5 = ((int)uVar4 < 1) - 1 & uVar4;
      uVar6 = uVar5;
      if ((int)uVar5 > (int)uVar2) {
        uVar6 = uVar2;
      }
      fVar1 = DAT_007372b0;
      if (SBORROW4(uVar6,uVar2) != ((int)uVar5 <= (int)uVar2 && (int)(uVar5 - uVar2) < 0)) {
        fVar1 = *(float *)(uVar6 * 0x4c + 0xd8 + unaff_ESI);
      }
      if (fVar1 <= param_1 + _DAT_006b6f80) {
        fVar1 = param_1 + _DAT_006b6f80;
      }
      *pfVar7 = fVar1;
      uVar2 = *(uint *)(unaff_ESI + 0xcb0);
      pfVar7 = pfVar7 + 0x13;
    } while ((int)uVar4 < (int)(uVar2 - 1));
  }
  if (0 < (int)uVar3) {
    pfVar7 = (float *)(unaff_ESI + 0x8c + uVar3 * 0x4c);
    do {
      uVar2 = *(uint *)(unaff_ESI + 0xcb0);
      uVar6 = ((int)uVar3 < 1) - 1 & uVar3;
      uVar4 = uVar6;
      if ((int)uVar6 > (int)uVar2) {
        uVar4 = uVar2;
      }
      if (SBORROW4(uVar4,uVar2) == ((int)uVar6 <= (int)uVar2 && (int)(uVar6 - uVar2) < 0)) {
        param_1 = DAT_007372b0;
      }
      else {
        param_1 = *(float *)(uVar4 * 0x4c + 0xd8 + unaff_ESI);
      }
      uVar3 = uVar3 - 1;
      uVar6 = ((int)uVar3 < 1) - 1 & uVar3;
      uVar4 = uVar6;
      if ((int)uVar6 > (int)uVar2) {
        uVar4 = uVar2;
      }
      fVar1 = DAT_007372b0;
      if (SBORROW4(uVar4,uVar2) != ((int)uVar6 <= (int)uVar2 && (int)(uVar6 - uVar2) < 0)) {
        fVar1 = *(float *)(uVar4 * 0x4c + 0xd8 + unaff_ESI);
      }
      if (param_1 - _DAT_006b6f80 <= fVar1) {
        fVar1 = param_1 - _DAT_006b6f80;
      }
      *pfVar7 = fVar1;
      pfVar7 = pfVar7 + -0x13;
    } while (0 < (int)uVar3);
  }
  return;
}

