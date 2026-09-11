/* Decompiled from Speed.exe @ 004ae070 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004ae070(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = param_1;
  if (*(int *)(param_1 + 0x18) != 0) {
    if ((int *)(param_1 + 0x1c) != (int *)0x0) {
      iVar6 = *(int *)(param_1 + 0x1c);
      piVar5 = *(int **)(param_1 + 0x20);
      *piVar5 = iVar6;
      *(int **)(iVar6 + 4) = piVar5;
    }
    piVar5 = (int *)(param_1 + 0x50);
    iVar6 = 0x20;
    do {
      iVar7 = *piVar5;
      piVar1 = (int *)piVar5[1];
      piVar5 = piVar5 + 0x1a;
      iVar6 = iVar6 + -1;
      *piVar1 = iVar7;
      *(int **)(iVar7 + 4) = piVar1;
    } while (iVar6 != 0);
    iVar6 = param_1 + 0xd50;
    param_1 = 2;
    do {
      piVar5 = (int *)(iVar6 + 0x24);
      iVar7 = 10;
      do {
        if ((piVar5[-7] != 0) || (piVar5[-6] != 0)) {
          iVar2 = piVar5[-9];
          piVar1 = (int *)piVar5[-8];
          *piVar1 = iVar2;
          *(int **)(iVar2 + 4) = piVar1;
        }
        piVar5[-6] = 0;
        piVar5[-7] = 0;
        piVar5[-5] = 0;
        piVar5[-4] = 0;
        if ((piVar5[-1] != 0) || (*piVar5 != 0)) {
          iVar2 = piVar5[-3];
          piVar1 = (int *)piVar5[-2];
          *piVar1 = iVar2;
          *(int **)(iVar2 + 4) = piVar1;
        }
        *piVar5 = 0;
        piVar5[-1] = 0;
        piVar5[1] = 0;
        piVar5[2] = 0;
        if ((piVar5[5] != 0) || (piVar5[6] != 0)) {
          iVar2 = piVar5[3];
          piVar1 = (int *)piVar5[4];
          *piVar1 = iVar2;
          *(int **)(iVar2 + 4) = piVar1;
        }
        piVar5[6] = 0;
        piVar5[5] = 0;
        piVar5[7] = 0;
        piVar5[8] = 0;
        piVar5 = piVar5 + 0x12;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      piVar5 = (int *)(iVar6 + 0x2d0);
      piVar1 = *(int **)(iVar6 + 0x2d0);
      while (piVar1 != piVar5) {
        piVar1 = (int *)*piVar5;
        iVar7 = *piVar1;
        piVar3 = (int *)piVar1[1];
        *piVar3 = iVar7;
        *(int **)(iVar7 + 4) = piVar3;
        _free(piVar1);
        piVar1 = (int *)*piVar5;
      }
      piVar5 = (int *)(iVar6 + 0x2d8);
      piVar1 = *(int **)(iVar6 + 0x2d8);
      while (piVar1 != piVar5) {
        piVar1 = (int *)*piVar5;
        iVar7 = *piVar1;
        piVar3 = (int *)piVar1[1];
        *piVar3 = iVar7;
        *(int **)(iVar7 + 4) = piVar3;
        _free(piVar1);
        piVar1 = (int *)*piVar5;
      }
      iVar6 = iVar6 + 0x2e0;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    if ((*(int *)(iVar4 + 0x1318) != 0) || (*(int *)(iVar4 + 0x131c) != 0)) {
      iVar6 = *(int *)(iVar4 + 0x1310);
      piVar5 = *(int **)(iVar4 + 0x1314);
      *piVar5 = iVar6;
      *(int **)(iVar6 + 4) = piVar5;
    }
    *(undefined4 *)(iVar4 + 0x131c) = 0;
    *(undefined4 *)(iVar4 + 0x1318) = 0;
    *(undefined4 *)(iVar4 + 0x1320) = 0;
    *(undefined4 *)(iVar4 + 0x1324) = 0;
    *(undefined4 *)(iVar4 + 0x18) = 0;
  }
  return;
}

