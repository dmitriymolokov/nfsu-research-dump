/* Decompiled from Speed.exe @ 004c4a60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c4a60(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int *piStack_40;
  uint auStack_3c [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar5 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00688a63;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(param_1 + 0x40))(1);
  }
  pvVar6 = _malloc(0x3c);
  uStack_4 = 0;
  if (pvVar6 == (void *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_004f8370(pvVar6,"master_thumb","thumb");
  }
  piVar1 = (int *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x40) = uVar7;
  piVar8 = (int *)*piVar1;
  uStack_4 = 0xffffffff;
  while (piVar8 != piVar1) {
    piVar8 = (int *)*piVar1;
    iVar10 = *piVar8;
    piVar2 = (int *)piVar8[1];
    *piVar2 = iVar10;
    *(int **)(iVar10 + 4) = piVar2;
    _free(piVar8);
    piVar8 = (int *)*piVar1;
  }
  puVar11 = auStack_3c;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = 0xffffffff;
    puVar11 = puVar11 + 1;
  }
  FUN_005a2270(auStack_3c);
  piStack_40 = (int *)0x0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1 = 0;
  do {
    uVar3 = auStack_3c[param_1];
    if (((0 < (int)uVar3) && (uVar3 < 0x100)) && (iVar10 = (&DAT_00733ff8)[uVar3], iVar10 != 0)) {
      piVar8 = _malloc(0xc);
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8[2] = iVar10;
      }
      if (*(int *)(iVar10 + 4) == 8) {
        piStack_40 = piVar8;
      }
      puVar4 = *(undefined4 **)(iVar5 + 0x48);
      *puVar4 = piVar8;
      *(int **)(iVar5 + 0x48) = piVar8;
      piVar8[1] = (int)puVar4;
      *piVar8 = (int)piVar1;
      iVar10 = FUN_004f8730(*(undefined4 *)(iVar5 + 0x40),piVar8,0,1);
      iVar9 = FUN_004c4920(iVar5);
      if ((iVar10 != 0) && (*(int *)(iVar10 + 0x24) != iVar9)) {
        *(int *)(iVar10 + 0x24) = iVar9;
        *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) | 0x400000;
      }
    }
    param_1 = param_1 + 1;
  } while (param_1 < 0xc);
  if (piStack_40 == (int *)0x0) {
    piStack_40 = (int *)*piVar1;
  }
  else {
    *(undefined1 *)(iVar5 + 0x50) = 1;
  }
  *(int **)(iVar5 + 0x4c) = piStack_40;
  FUN_004f8960();
  FUN_004c4c60(iVar5);
  ExceptionList = pvStack_c;
  return;
}

