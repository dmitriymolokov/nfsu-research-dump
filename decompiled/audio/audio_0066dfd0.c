/* Decompiled from Speed.exe @ 0066dfd0 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_0066dfd0(int *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  if (*param_1 != -1) {
    return 0xffffffff;
  }
  if ((void *)param_1[0xf] != (void *)0x0) {
    _free((void *)param_1[0xf]);
    param_1[0xf] = 0;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 1) = 2;
  iVar2 = Ordinal_8(param_2);
  param_1[2] = iVar2;
  uVar1 = Ordinal_9(param_2);
  *(undefined2 *)((int)param_1 + 6) = uVar1;
  param_1[7] = 2;
  param_1[8] = 0;
  return 0;
}

