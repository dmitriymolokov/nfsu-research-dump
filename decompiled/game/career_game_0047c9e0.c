/* Decompiled from Speed.exe @ 0047c9e0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0047c9e0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0xe0) != 0) {
    piVar3 = &DAT_00779904;
    do {
      if (-1 < *piVar3) {
        iVar1 = *(int *)(DAT_007361f8 + 0x28 + *piVar3 * 4);
        iVar2 = *(int *)(iVar1 + 0x28);
        if (iVar2 == 1) {
          FUN_004782c0();
        }
        else if (iVar2 == 3) {
          FUN_00474640();
        }
        (**(code **)(**(int **)(iVar1 + 0x30) + 0x1c))();
        FUN_00426110();
      }
      piVar3 = piVar3 + 6;
    } while ((int)piVar3 < 0x779964);
    FUN_00435d30(DAT_0073619c);
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  return;
}

