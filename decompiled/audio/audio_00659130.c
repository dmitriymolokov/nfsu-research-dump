/* Decompiled from Speed.exe @ 00659130 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __stdcall FUN_00659130(float param_1)

{
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar2 = (float10)param_1;
  if ((float10)*(float*)&_DAT_006cca48 < fVar2) {
    do {
      fVar2 = fVar2 - (float10)*(float*)&_DAT_006cca48;
    } while ((float10)*(float*)&_DAT_006cca48 < fVar2);
  }
  fVar3 = fVar2 * fVar2;
  fVar4 = fVar3 * fVar2;
  fVar5 = fVar4 * fVar3;
  fVar6 = fVar5 * fVar3;
  fVar7 = fVar6 * fVar3;
  param_1 = (float)(fVar7 * fVar3);
  return (float10)param_1 * fVar3 * (float10)*(float*)&_DAT_006aab3c +
         ((fVar7 * (float10)*(float*)&_DAT_006cca80 +
          ((fVar5 * (float10)*(float*)&_DAT_006aab44 + (fVar2 - fVar4 * (float10)*(float*)&_DAT_006cca8c)) -
          fVar6 * (float10)*(float*)&_DAT_006cca84)) - (float10)param_1 * (float10)*(float*)&_DAT_006aab40);
}
