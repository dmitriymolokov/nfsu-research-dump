/* Decompiled from Speed.exe @ 0062b950 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void FUN_0062b950(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  
  FUN_00636b20();
  *(int *)(param_1 + -0x18) = local_18;
  FUN_00636b40();
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + -0x18);
    FUN_006353d0();
    *piVar1 = local_18;
    FUN_006353f0();
    (**(code **)(*piVar1 + 0x3c))(iVar2);
    *(int **)(param_1 + 0x10) = piVar1;
  }
  return;
}

