/* Decompiled from Speed.exe @ 0041b970 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0041b970(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = &DAT_0071d89c;
  do {
    if (*piVar3 != 0) {
      iVar2 = FUN_0041bcf0(param_1 + 0x2448);
      if (iVar2 != 100) {
        FUN_0041bc60(param_1 + 0x2448,piVar3);
      }
    }
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0x71d8a4);
  piVar3 = (int *)(param_1 + 0x24f8);
  iVar2 = 2;
  do {
    iVar4 = 8;
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = (int *)(param_1 + 0x2548);
  iVar2 = 2;
  do {
    iVar4 = 8;
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = (int *)(param_1 + 0x2598);
  iVar2 = 2;
  do {
    iVar4 = 8;
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = (int *)(param_1 + 0x24a8);
  iVar2 = 2;
  do {
    iVar4 = 8;
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_004198b0(param_1 + 0x2224);
  return;
}

