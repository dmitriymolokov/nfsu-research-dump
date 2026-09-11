/* Decompiled from Speed.exe @ 0058acf0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0058acf0(int param_1)

{
  int *piVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0068626c;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  FUN_0058cfd0();
  FUN_0058cf90();
  piVar1 = *(int **)(param_1 + 0x3c);
  while (piVar1 != (int *)(param_1 + 0x3c)) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    FUN_00565ce0();
    piVar1 = *(int **)(param_1 + 0x3c);
  }
  FUN_0058cf50();
  FUN_0058cf10();
  FUN_0058ced0();
  FUN_0058ce90();
  ExceptionList = local_c;
  return;
}

