/* Decompiled from Speed.exe @ 00455b50 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void __thiscall FUN_00455b50(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 4 + (param_3 + param_1 * 0x28) * 4);
  iVar2 = *(int *)(iVar1 + 0x60);
  *(undefined4 *)(iVar1 + 0x10) = 1;
  if (iVar2 == 0) {
    FUN_00401cd0();
  }
  else {
    FUN_00401cd0();
    if (*(int *)(iVar2 + 0xe4) == 0) {
      FUN_00579190();
      return;
    }
  }
  return;
}

