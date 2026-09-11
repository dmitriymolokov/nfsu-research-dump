/* Decompiled from Speed.exe @ 0047f830 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0047f830(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00687428;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_006c8120;
  local_8 = 0;
  if (*(int *)(DAT_007361f8 + 0x2f0) != 0) {
    FUN_0059b790();
  }
  FUN_00578b10(DAT_00779818);
  FUN_0047bfc0();
  local_8 = 0xffffffff;
  *param_1 = &PTR_LAB_006c8118;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[3])(1);
  }
  iVar1 = param_1[1];
  piVar2 = (int *)param_1[2];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  ExceptionList = local_10;
  return;
}

