/* Decompiled from Speed.exe @ 0040dcb0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0040dcb0(undefined4 param_1)

{
  float10 fVar1;
  float fVar2;
  
  fVar1 = (float10)FUN_00564b10(param_1);
  fVar2 = (float)fVar1;
  fVar1 = (float10)FUN_00564b10();
  if ((float10)fVar2 / fVar1 != (float10)DAT_006cc7a4) {
    return (float10)(DAT_00701034 >> 1) / ((float10)fVar2 / fVar1);
  }
  return (float10)_DAT_006cca94;
}

