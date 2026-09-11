/* Decompiled from Speed.exe @ 00445350 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00445350(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *_Memory;
  int iVar4;
  int *unaff_EBX;
  int iVar5;
  int local_8;
  int local_4;
  
  iVar5 = unaff_EBX[4];
  while (iVar5 != 0) {
    FUN_004483c0();
    iVar5 = unaff_EBX[4];
  }
  local_4 = 0;
  if (0 < unaff_EBX[1]) {
    local_8 = 0;
    do {
      iVar5 = *unaff_EBX + local_8;
      if (*(int *)(*unaff_EBX + 0xc + local_8) == 3) {
        piVar1 = *(int **)(iVar5 + 0x28);
        iVar2 = piVar1[0x24];
        while (iVar2 == 0) {
          FUN_004483c0();
          iVar2 = piVar1[0x24];
        }
        iVar2 = *piVar1;
        piVar3 = (int *)piVar1[1];
        *piVar3 = iVar2;
        *(int **)(iVar2 + 4) = piVar3;
        FUN_004481d0();
        iVar4 = DAT_007360f8;
        iVar2 = *(int *)(DAT_007360f8 + 0x18);
        *piVar1 = *(int *)(DAT_007360f8 + 0x10);
        *(int **)(iVar4 + 0x10) = piVar1;
        *(int *)(iVar4 + 0x18) = iVar2 + -1;
        *(undefined4 *)(iVar5 + 0x28) = 0;
        *(undefined4 *)(iVar5 + 0xc) = 0;
        *(undefined4 *)(iVar5 + 0x2c) = 0;
        unaff_EBX[3] = unaff_EBX[3] + -1;
      }
      local_4 = local_4 + 1;
      local_8 = local_8 + 0x38;
    } while (local_4 < unaff_EBX[1]);
  }
  piVar3 = (int *)unaff_EBX[0x164];
  piVar1 = unaff_EBX + 0x164;
  do {
    if (piVar3 == piVar1) {
      FUN_004443e0();
      return;
    }
    _Memory = (int *)*piVar1;
    piVar3 = _Memory + 2;
    for (; _Memory != piVar1; _Memory = (int *)*_Memory) {
      if ((short)*piVar3 == (short)_Memory[2]) {
        iVar5 = *_Memory;
        piVar3 = (int *)_Memory[1];
        *piVar3 = iVar5;
        *(int **)(iVar5 + 4) = piVar3;
        _free(_Memory);
        break;
      }
    }
    piVar3 = (int *)*piVar1;
  } while( true );
}

