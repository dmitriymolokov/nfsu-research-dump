/* Decompiled from Speed.exe @ 0051cc10 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0051cc10(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_006f1dd8 != 0) {
    if (*(int *)(param_1 + 0x104) != 0) {
      FUN_00538e20();
    }
    if (DAT_007356ac != 0) {
      FUN_005365e0();
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0xbc) + 0x20) + 0x24))();
    }
    if (*(int *)(param_1 + 0xc0) != 0) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0xc0) + 0x20) + 0x24))();
    }
    iVar2 = 0;
    piVar1 = (int *)(param_1 + 0xd0);
    do {
      if ((iVar2 < 2) && (piVar1[-3] != 0)) {
        (**(code **)(*(int *)(piVar1[-3] + 0x20) + 0x24))();
      }
      if (*piVar1 != 0) {
        (**(code **)(*(int *)(*piVar1 + 0x20) + 0x24))();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 4);
    if (*(int *)(param_1 + 0x80) != 0) {
      FUN_0052fa30();
    }
    FUN_0051d860();
    if (*(int *)(param_1 + 0xc0) != 0) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0xc0) + 0x20) + 0x24))();
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0xbc) + 0x20) + 0x24))();
    }
    FUN_005330b0();
  }
  return;
}

