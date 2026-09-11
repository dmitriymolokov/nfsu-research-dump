/* Decompiled from Speed.exe @ 00421f00 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00421f00(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  undefined4 *puVar7;
  short *psVar8;
  int iVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006897a6;
  local_c = ExceptionList;
  iVar4 = 0;
  if (0 < DAT_0073616c) {
    psVar8 = (short *)(DAT_00736168 + 0x6c);
    do {
      if (*psVar8 == DAT_0078a2f0) break;
      iVar4 = iVar4 + 1;
      psVar8 = psVar8 + 0x7e;
    } while (iVar4 < DAT_0073616c);
  }
  ExceptionList = &local_c;
  pvVar5 = _malloc(0x50b8);
  if (pvVar5 == (void *)0x0) {
    DAT_007345d0 = 0;
  }
  else {
    DAT_007345d0 = FUN_00571fa0();
  }
  pvVar5 = _malloc(0x568);
  local_4 = 0;
  if (pvVar5 == (void *)0x0) {
    DAT_0073619c = 0;
  }
  else {
    DAT_0073619c = FUN_00434270();
  }
  pvVar5 = _malloc(0x17a0);
  iVar4 = 1;
  local_4 = 1;
  if (pvVar5 != (void *)0x0) {
    FUN_0041f6e0(pvVar5);
  }
  local_4 = 0xffffffff;
  FUN_00422a70(param_1);
  FUN_004222a0(param_1);
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  puVar3 = DAT_00734440;
  if (DAT_0078a308 == '\0') {
    if (DAT_0078a309 == '\0') {
      if ((DAT_0073465c == 0) && (param_1[0x11] == 0)) {
        iVar9 = 4;
        iVar4 = 3;
      }
      else {
        iVar9 = 2;
      }
    }
    else {
      iVar9 = 10;
      iVar4 = 4;
    }
  }
  else {
    iVar9 = 9;
    iVar4 = 4;
    if (DAT_00734440 != (undefined1 *)0x0) {
      FUN_0059e020();
      *puVar3 = 0;
    }
  }
  param_1[6] = iVar4;
  FUN_00434590(0);
  FUN_00456ba0();
  FUN_0051f8a0(DAT_007356a8,iVar9);
  DAT_007361f0 = param_1;
  FUN_004abaa0();
  iVar4 = *param_1;
  param_1[0x11] = 0;
  param_1[5] = iVar9;
  piVar6 = (int *)FUN_00567160();
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6[2] = 2;
    piVar6[3] = iVar4;
  }
  puVar7 = (undefined4 *)param_1[3];
  piVar1 = param_1 + 2;
  *puVar7 = piVar6;
  param_1[3] = (int)piVar6;
  piVar6[1] = (int)puVar7;
  *piVar6 = (int)piVar1;
  if (param_1[4] == 0) {
    FUN_00421b10(param_1);
  }
  puVar7 = (undefined4 *)FUN_00567160();
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7[2] = 1;
    puVar7[3] = 1;
  }
  puVar2 = (undefined4 *)param_1[3];
  *puVar2 = puVar7;
  param_1[3] = (int)puVar7;
  puVar7[1] = puVar2;
  *puVar7 = piVar1;
  if (param_1[4] == 0) {
    FUN_00421b10(param_1);
  }
  puVar7 = (undefined4 *)FUN_00567160();
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7[2] = 3;
    puVar7[3] = 0;
  }
  puVar2 = (undefined4 *)param_1[3];
  *puVar2 = puVar7;
  param_1[3] = (int)puVar7;
  puVar7[1] = puVar2;
  *puVar7 = piVar1;
  if (param_1[4] == 0) {
    FUN_00421b10(param_1);
  }
  ExceptionList = local_c;
  return;
}

