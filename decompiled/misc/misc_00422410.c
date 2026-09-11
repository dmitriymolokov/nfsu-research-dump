/* Decompiled from Speed.exe @ 00422410 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00422410(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006869e3;
  local_c = ExceptionList;
  uVar1 = *(undefined2 *)(param_2 + 0x10);
  ExceptionList = &local_c;
  FUN_0057f2b0(1);
  iVar3 = FUN_00504630(0xc,*(undefined4 *)(param_1 + 0x20));
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x48c) = iVar3;
    *(char *)(param_1 + 0x648) = *(char *)(param_1 + 0x648) + '\x01';
    FUN_0057ea80(param_1 + 0x10);
  }
  FUN_00443a10(&DAT_007372b0,param_2);
  pvVar4 = _malloc(0x8f0);
  local_4 = 0;
  if (pvVar4 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00425350(pvVar4,param_1,param_2,uVar1,0);
  }
  local_4 = 0xffffffff;
  FUN_00425fe0();
  if (param_3 == 3) {
    FUN_00425150();
    FUN_00426110();
    *(undefined4 *)(piVar5[0xc] + 0x1fc) = *(undefined4 *)(&DAT_006b7c20 + DAT_0078a40c * 4);
  }
  else {
    FUN_00426110();
  }
  iVar3 = DAT_007361f8;
  puVar2 = *(undefined4 **)(DAT_007361f8 + 4);
  *puVar2 = piVar5;
  *(int **)(iVar3 + 4) = piVar5;
  piVar5[1] = (int)puVar2;
  *piVar5 = iVar3;
  if (param_3 == 3) {
    FUN_004a9900(piVar5);
  }
  ExceptionList = local_c;
  return;
}

