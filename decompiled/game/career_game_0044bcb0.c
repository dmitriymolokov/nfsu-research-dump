/* Decompiled from Speed.exe @ 0044bcb0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0044bcb0(void)

{
  int extraout_EDX;
  int unaff_EDI;
  float10 fVar1;
  float local_10;
  float local_c;
  float local_8;
  
  fVar1 = (float10)FUN_00564b10();
  local_8 = (float)fVar1;
  fVar1 = (float10)FUN_00564b10();
  local_10 = *(float *)(extraout_EDX + 0x60) + local_8;
  local_c = (float)((float10)*(float *)(extraout_EDX + 100) + fVar1);
  (**(code **)(**(int **)(unaff_EDI + 8) + 0x40))(&local_10);
  return;
}

