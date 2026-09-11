/* Decompiled from Speed.exe @ 006607e0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_006607e0(int param_1,int *param_2)

{
  *(float *)(param_1 + 0x54) =
       ((float)(*param_2 >> 8) + (float)(*param_2 >> 8)) / (float)(param_2[1] >> 8);
  FUN_00661460();
  return;
}

