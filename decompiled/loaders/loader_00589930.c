/* Decompiled from Speed.exe @ 00589930 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00589930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  piVar5 = DAT_00737be0;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00688018;
  local_1c = ExceptionList;
  iVar4 = DAT_00734514;
  ExceptionList = &local_1c;
  if (*(int *)(DAT_00734514 + 0x18) == *(int *)(DAT_00734514 + 0x2c)) {
    iVar4 = *DAT_00737be0;
    piVar1 = (int *)DAT_00737be0[1];
    ExceptionList = &local_1c;
    *piVar1 = iVar4;
    *(int **)(iVar4 + 4) = piVar1;
    if ((((int *)piVar5[0xd] != (int *)0x0) && (iVar4 = *(int *)piVar5[0xd], iVar4 != 0)) &&
       (*(undefined4 **)(iVar4 + 0x34) != (undefined4 *)0x0)) {
      **(undefined4 **)(iVar4 + 0x34) = 0;
      *(undefined4 *)(iVar4 + 0x34) = 0;
    }
    iVar4 = *(int *)piVar5[0xc];
    piVar1 = (int *)((int *)piVar5[0xc])[1];
    *piVar1 = iVar4;
    *(int **)(iVar4 + 4) = piVar1;
    FUN_0041f570();
    iVar4 = DAT_00734514;
    iVar6 = *(int *)(DAT_00734514 + 0x18);
    *piVar5 = *(int *)(DAT_00734514 + 0x10);
    *(int *)(iVar4 + 0x18) = iVar6 + -1;
    *(int **)(iVar4 + 0x10) = piVar5;
  }
  puVar2 = *(undefined4 **)(iVar4 + 0x10);
  iVar6 = *(int *)(iVar4 + 0x18) + 1;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = *puVar2;
    if (*(int *)(iVar4 + 0x1c) < iVar6) {
      *(int *)(iVar4 + 0x1c) = iVar6;
    }
    *(int *)(iVar4 + 0x18) = iVar6;
    *(undefined4 *)(iVar4 + 0x10) = uVar3;
  }
  local_14 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_005893e0(param_3,param_4,param_6);
  }
  iVar4 = (int)DAT_00737bdc;
  puVar2 = (undefined4 *)((int)DAT_00737bdc + 4);
  DAT_00737bdc = piVar5;
  *puVar2 = piVar5;
  *piVar5 = iVar4;
  piVar5[1] = (int)&DAT_00737bdc;
  ExceptionList = local_1c;
  return;
}

