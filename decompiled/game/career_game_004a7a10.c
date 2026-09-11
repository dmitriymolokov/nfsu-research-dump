/* Decompiled from Speed.exe @ 004a7a10 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a7a10(int param_1)

{
  float fVar1;
  
  if (*(float *)(param_1 + 0xa4) <= DAT_006cc7a4) {
    FUN_004f6910();
    return;
  }
  fVar1 = *(float *)(param_1 + 0xa4) -
          (float)(DAT_0073ad34 - *(int *)(param_1 + 0xa8)) * _DAT_006cca38;
  if (fVar1 < DAT_006cc7a4) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
    FUN_004f6910();
    return;
  }
  FUN_004f68a0("%1.1f",(double)fVar1);
  return;
}

