/* Decompiled from Speed.exe @ 00472cf0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00472cf0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  int *piVar4;
  int *piVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00684b48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_2 + 0x3c);
  iVar7 = *(int *)(param_2 + 0x14);
  *(int *)(param_1 + 0x14) = iVar7;
  piVar4 = _malloc(iVar7 * 0x30 + 0x10);
  local_4 = 0;
  if (piVar4 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = piVar4 + 4;
    *piVar4 = iVar7;
    _eh_vector_constructor_iterator_(piVar5,0x30,iVar7,FUN_004665e0,FUN_0040a880);
  }
  *(int **)(param_1 + 0x54) = piVar5;
  pvVar6 = _malloc((int)*(short *)(param_1 + 0x3c) << 1);
  *(void **)(param_1 + 0x50) = pvVar6;
  puVar9 = *(undefined4 **)(param_2 + 0x54);
  puVar10 = *(undefined4 **)(param_1 + 0x54);
  for (iVar7 = (*(int *)(param_1 + 0x14) * 3 & 0xfffffffU) << 2; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  sVar3 = *(short *)(param_1 + 0x3c);
  puVar9 = *(undefined4 **)(param_2 + 0x50);
  puVar10 = *(undefined4 **)(param_1 + 0x50);
  for (uVar8 = ((int)sVar3 & 0x7fffffffU) >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  for (iVar7 = ((int)sVar3 & 1U) << 1; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  puVar9 = (undefined4 *)(param_2 + 0x1c);
  puVar10 = (undefined4 *)(param_1 + 0x1c);
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
  ExceptionList = local_c;
  return;
}

