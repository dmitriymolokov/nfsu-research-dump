/* Decompiled from Speed.exe @ 004f85b0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f85b0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *_Memory;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int unaff_EBX;
  
  iVar3 = *(int *)(unaff_EBX + 0x28);
  uVar10 = *(undefined4 *)(unaff_EBX + 0x30);
  uVar2 = *(undefined4 *)(unaff_EBX + 0x2c);
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 0x18);
    iVar5 = *(int *)(iVar3 + 0x2c);
    if (((iVar4 == 1) || (iVar4 == 7)) || (iVar4 == 9)) {
      *(undefined4 *)(iVar5 + 0x38) = uVar2;
      *(undefined4 *)(iVar5 + 0x3c) = uVar10;
    }
    *(undefined4 *)(iVar5 + 0x38) = uVar2;
    *(undefined4 *)(iVar5 + 0x3c) = uVar10;
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x400000;
  }
  FUN_004f8680();
  puVar1 = (undefined4 *)(unaff_EBX + 4);
  *(undefined4 *)(unaff_EBX + 0x1c) = 0;
  *(undefined4 *)(unaff_EBX + 0xc) = 0;
  puVar6 = (undefined4 *)*puVar1;
  while (puVar6 != puVar1) {
    _Memory = (int *)*puVar1;
    iVar3 = *_Memory;
    piVar7 = (int *)_Memory[1];
    *piVar7 = iVar3;
    *(int **)(iVar3 + 4) = piVar7;
    iVar3 = _Memory[8];
    iVar5 = _Memory[3];
    iVar4 = _Memory[7];
    if (iVar5 != 0) {
      iVar8 = *(int *)(iVar5 + 0x18);
      iVar9 = *(int *)(iVar5 + 0x2c);
      if (((iVar8 == 1) || (iVar8 == 7)) || (iVar8 == 9)) {
        *(int *)(iVar9 + 0x38) = iVar4;
        *(int *)(iVar9 + 0x3c) = iVar3;
      }
      *(int *)(iVar9 + 0x38) = iVar4;
      *(int *)(iVar9 + 0x3c) = iVar3;
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x400000;
    }
    _free(_Memory);
    puVar6 = (undefined4 *)*puVar1;
  }
  uVar10 = FUN_004f86c0();
  *(undefined4 *)(unaff_EBX + 0x34) = uVar10;
  return;
}

