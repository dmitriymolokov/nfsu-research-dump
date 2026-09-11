/* Decompiled from Speed.exe @ 00417580 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


int __fastcall FUN_00417580(int param_1)

{
  if ((*(int *)(param_1 + 8) != param_1 + 8) && (*(int *)(param_1 + 0x10) != 0)) {
    return *(int *)(*(int *)(param_1 + 0x10) + 8) + 8;
  }
  return 0;
}

