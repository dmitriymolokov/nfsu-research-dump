/* Decompiled from Speed.exe @ 00524740 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


float10 FUN_00524740(float param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1 + (float10)param_3;
  if (((float10)param_2 <= fVar1) &&
     (fVar1 = (float10)param_1 - (float10)param_4, fVar1 <= (float10)param_2)) {
    fVar1 = (float10)param_2;
  }
  return fVar1;
}

