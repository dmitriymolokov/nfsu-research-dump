/* Decompiled from Speed.exe @ 0042f020 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042f020(undefined4 param_1)

{
  float *unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 local_20 [28];
  
  thunk_FUN_005abda2(local_20,param_1);
  if (DAT_006cc7a4 == fStack_24) {
    *unaff_ESI = 0.0;
    unaff_ESI[1] = 0.0;
    return;
  }
  fVar1 = (float10)FUN_00564b10();
  fVar2 = (float10)FUN_00564b10();
  fVar3 = (float10)_DAT_006cc7bc;
  *unaff_ESI = (float)(((float10)fStack_2c * (fVar3 / (float10)ABS(fStack_24))) /
                      ((float10)(float)fVar1 / fVar2));
  unaff_ESI[1] = (float)(((fVar3 / (float10)ABS(fStack_24)) * (float10)fStack_28) /
                        (((float10)DAT_00701038 * ((float10)(float)fVar1 / fVar2)) /
                        (float10)DAT_00701034));
  return;
}

