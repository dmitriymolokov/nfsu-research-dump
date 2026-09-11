/* Decompiled from Speed.exe @ 00502dd0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_00502dd0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00684ef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0xabadcafe;
  param_1[2] = 0xabadcafe;
  local_4 = 0;
  *param_1 = &PTR_FUN_006c17b8;
  _eh_vector_constructor_iterator_
            (param_1 + 3,0x34,0x20,(_func_void_void_ptr *)&LAB_00500760,FUN_005028d0);
  param_1[0x1a3] = &PTR_LAB_006c2c4c;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a7] = 0;
  piVar4 = param_1 + 5;
  iVar5 = 8;
  do {
    iVar2 = param_1[0x1a6];
    if (piVar4 != (int *)0x8) {
      if (iVar2 == 0) {
        iVar3 = param_1[0x1a5];
        piVar4[-1] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar4 + -2;
        }
        *piVar4 = 0;
        param_1[0x1a5] = piVar4 + -2;
      }
      else {
        iVar3 = *(int *)(iVar2 + 4);
        piVar4[-1] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar4 + -2;
        }
        *piVar4 = iVar2;
        *(int **)(iVar2 + 4) = piVar4 + -2;
      }
      if (param_1[0x1a6] == iVar2) {
        param_1[0x1a6] = piVar4 + -2;
      }
      param_1[0x1a4] = param_1[0x1a4] + 1;
    }
    iVar2 = param_1[0x1a6];
    piVar1 = piVar4 + 0xb;
    if (piVar1 != (int *)0x0) {
      if (iVar2 == 0) {
        iVar3 = param_1[0x1a5];
        piVar4[0xc] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar1;
        }
        piVar4[0xd] = 0;
        param_1[0x1a5] = piVar1;
      }
      else {
        iVar3 = *(int *)(iVar2 + 4);
        piVar4[0xc] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar1;
        }
        piVar4[0xd] = iVar2;
        *(int **)(iVar2 + 4) = piVar1;
      }
      if (param_1[0x1a6] == iVar2) {
        param_1[0x1a6] = piVar1;
      }
      param_1[0x1a4] = param_1[0x1a4] + 1;
    }
    iVar2 = param_1[0x1a6];
    piVar1 = piVar4 + 0x18;
    if (piVar1 != (int *)0x0) {
      if (iVar2 == 0) {
        iVar3 = param_1[0x1a5];
        piVar4[0x19] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar1;
        }
        piVar4[0x1a] = 0;
        param_1[0x1a5] = piVar1;
      }
      else {
        iVar3 = *(int *)(iVar2 + 4);
        piVar4[0x19] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar1;
        }
        piVar4[0x1a] = iVar2;
        *(int **)(iVar2 + 4) = piVar1;
      }
      if (param_1[0x1a6] == iVar2) {
        param_1[0x1a6] = piVar1;
      }
      param_1[0x1a4] = param_1[0x1a4] + 1;
    }
    iVar2 = param_1[0x1a6];
    piVar1 = piVar4 + 0x25;
    if (piVar1 != (int *)0x0) {
      if (iVar2 == 0) {
        iVar3 = param_1[0x1a5];
        piVar4[0x26] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar1;
        }
        piVar4[0x27] = 0;
        param_1[0x1a5] = piVar1;
      }
      else {
        iVar3 = *(int *)(iVar2 + 4);
        piVar4[0x26] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar1;
        }
        piVar4[0x27] = iVar2;
        *(int **)(iVar2 + 4) = piVar1;
      }
      if (param_1[0x1a6] == iVar2) {
        param_1[0x1a6] = piVar1;
      }
      param_1[0x1a4] = param_1[0x1a4] + 1;
    }
    piVar4 = piVar4 + 0x34;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  ExceptionList = local_c;
  return param_1;
}

