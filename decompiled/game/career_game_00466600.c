/* Decompiled from Speed.exe @ 00466600 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_00466600(int param_1,int param_2,float param_3)

{
  float fVar1;
  
  if ((((*(float *)(param_2 + 0x24) <= param_3 + *(float *)(param_1 + 0x2c)) &&
       (fVar1 = *(float *)(param_1 + 0x24) - param_3,
       fVar1 < *(float *)(param_2 + 0x2c) != (fVar1 == *(float *)(param_2 + 0x2c)))) &&
      (*(float *)(param_2 + 0x28) <= param_3 + *(float *)(param_1 + 0x30))) &&
     (param_3 = *(float *)(param_1 + 0x28) - param_3,
     param_3 < *(float *)(param_2 + 0x30) != (param_3 == *(float *)(param_2 + 0x30)))) {
    return 1;
  }
  return 0;
}

