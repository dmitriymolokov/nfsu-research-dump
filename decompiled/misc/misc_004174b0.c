/* Decompiled from Speed.exe @ 004174b0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_004174b0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00685583;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = _malloc(0x88);
  local_4 = 0;
  piVar3 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    FUN_004f68c0(0x80,param_2);
    piVar3 = piVar2;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  *puVar1 = piVar3;
  *(int **)(param_1 + 0xc) = piVar3;
  *piVar3 = param_1 + 8;
  piVar3[1] = (int)puVar1;
  ExceptionList = local_c;
  return;
}

