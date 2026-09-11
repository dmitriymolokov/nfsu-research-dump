/* Decompiled from Speed.exe @ 005cce58 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __thiscall FUN_005cce58(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x8c) + *(int *)(param_2 + 4) * 4);
  iVar2 = *piVar1;
  if (*(int *)(iVar2 + 0x38) == 0) {
    local_8 = *(int *)(param_1 + 0x2c);
  }
  else {
    local_8 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  }
  local_8 = *(int *)(iVar2 + 0x24) + *(int *)(param_2 + 8) + local_8;
  iVar2 = *piVar1;
  if (*(int *)(iVar2 + 0x38) == 0) {
    iVar3 = *(int *)(param_1 + 0x2c);
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  }
  param_2 = *(int *)(iVar2 + 0x28) + *(int *)(param_2 + 0xc) + iVar3;
  FUN_005cad01(&local_8,&param_2,&stack0x00000008,&stack0x0000000c);
  return;
}

