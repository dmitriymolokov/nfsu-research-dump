/* Decompiled from Speed.exe @ 00582c60 */
/* Module: Loader */
/* Ghidra DecompileModule */


float10 FUN_00582c60(float *param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_005829e0(param_2);
  FUN_00582a90(param_2);
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  FUN_00567370();
  FUN_00567370();
  return (float10)local_1c * (float10)(local_2c - fVar2) +
         (float10)local_18 * (float10)(local_28 - fVar3) +
         (float10)(local_30 - fVar1) * (float10)local_20;
}

