/* Decompiled from Speed.exe @ 004ad990 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004ad990(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00685981;
  local_c = ExceptionList;
  local_4 = 1;
  if ((*(int *)(param_1 + 0x1318) != 0) ||
     (ExceptionList = &local_c, *(int *)(param_1 + 0x131c) != 0)) {
    iVar1 = *(int *)(param_1 + 0x1310);
    piVar2 = *(int **)(param_1 + 0x1314);
    ExceptionList = &local_c;
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
  }
  *(undefined4 *)(param_1 + 0x131c) = 0;
  *(undefined4 *)(param_1 + 0x1318) = 0;
  *(undefined4 *)(param_1 + 0x1320) = 0;
  *(undefined4 *)(param_1 + 0x1324) = 0;
  _eh_vector_destructor_iterator_
            ((void *)(param_1 + 0xd50),0x2e0,2,(_func_void_void_ptr *)&LAB_004ad920);
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x50),0x68,0x20,FUN_0040a880);
  piVar2 = *(int **)(param_1 + 0x48);
  while (piVar2 != (int *)(param_1 + 0x48)) {
    iVar1 = *piVar2;
    piVar3 = (int *)piVar2[1];
    *piVar3 = iVar1;
    *(int **)(iVar1 + 4) = piVar3;
    _free(piVar2);
    piVar2 = *(int **)(param_1 + 0x48);
  }
  ExceptionList = local_c;
  return;
}

