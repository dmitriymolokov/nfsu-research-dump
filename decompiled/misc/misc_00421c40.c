/* Decompiled from Speed.exe @ 00421c40 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_00421c40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if ((((iVar1 == 0) || (*(int *)(iVar1 + 0x20) == 0)) || (*(int *)(iVar1 + 0x1c) == 0)) &&
     ((*(int *)(param_1 + 0x40) == 0 || (*(int *)(*(int *)(param_1 + 0x40) + 0x1c) == 0)))) {
    return 0;
  }
  return 1;
}

