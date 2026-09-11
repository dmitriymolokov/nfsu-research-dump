/* Decompiled from Speed.exe @ 00583270 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_00583270(int param_1,int param_2)

{
  char *pcVar1;
  
  if (*(int *)(param_2 + 0x4e0) != 0) {
    pcVar1 = (char *)(*(int *)(param_2 + 0x4e0) + 0x100);
    *pcVar1 = *pcVar1 + -1;
  }
  *(int *)(param_2 + 0x4e0) = param_1;
  if (param_1 != 0) {
    *(char *)(param_1 + 0x100) = *(char *)(param_1 + 0x100) + '\x01';
  }
  return;
}

