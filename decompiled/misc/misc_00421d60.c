/* Decompiled from Speed.exe @ 00421d60 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00421d60(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006896cb;
  local_c = ExceptionList;
  iVar2 = *param_1;
  local_4 = 0;
  ExceptionList = &local_c;
  if (iVar2 != 0) {
    ExceptionList = &local_c;
    piVar4 = (int *)FUN_00567160();
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[2] = 2;
      piVar4[3] = iVar2;
    }
    puVar3 = (undefined4 *)param_1[3];
    piVar1 = param_1 + 2;
    *puVar3 = piVar4;
    param_1[3] = (int)piVar4;
    piVar4[1] = (int)puVar3;
    *piVar4 = (int)piVar1;
    if (param_1[4] == 0) {
      FUN_00421b10(param_1);
    }
    piVar4 = (int *)FUN_00567160();
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[2] = 1;
      piVar4[3] = 0;
    }
    puVar3 = (undefined4 *)param_1[3];
    *puVar3 = piVar4;
    param_1[3] = (int)piVar4;
    piVar4[1] = (int)puVar3;
    *piVar4 = (int)piVar1;
    if (param_1[4] == 0) {
      FUN_00421b10(param_1);
    }
    piVar4 = (int *)FUN_00567160();
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[2] = 3;
      piVar4[3] = 0;
    }
    puVar3 = (undefined4 *)param_1[3];
    *puVar3 = piVar4;
    param_1[3] = (int)piVar4;
    piVar4[1] = (int)puVar3;
    *piVar4 = (int)piVar1;
    if (param_1[4] == 0) {
      FUN_00421b10(param_1);
    }
  }
  FUN_00422130();
  FUN_004244b0();
  FUN_00567220();
  FUN_00424b10();
  ExceptionList = local_c;
  return;
}

