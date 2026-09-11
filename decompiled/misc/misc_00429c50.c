/* Decompiled from Speed.exe @ 00429c50 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00429c50(float param_1)

{
  float *unaff_ESI;
  float local_20;
  float local_1c;
  float local_18;
  
  if (param_1 < _DAT_006cc7b8) {
    return SQRT((float10)unaff_ESI[2] * (float10)unaff_ESI[2] +
                (float10)unaff_ESI[1] * (float10)unaff_ESI[1] +
                (float10)*unaff_ESI * (float10)*unaff_ESI);
  }
  FUN_00567370();
  return (float10)local_20 * (float10)*unaff_ESI +
         (float10)local_18 * (float10)unaff_ESI[2] + (float10)local_1c * (float10)unaff_ESI[1];
}

