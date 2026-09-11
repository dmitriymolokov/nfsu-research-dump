/* Decompiled from Speed.exe @ 0066c8d0 */
/* Module: Audio */
/* Ghidra DecompileAll */


int __fastcall FUN_0066c8d0(int param_1)

{
  return (((*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xb4)) + *(int *)(param_1 + 0xac)) %
         *(int *)(param_1 + 0xac)) / *(int *)(param_1 + 0xa8);
}

