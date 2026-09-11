/* Decompiled from Speed.exe @ 0051dd70 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0051dd70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = param_1;
  if (DAT_006f1dd8 != 0) {
    if (*(int *)(param_1 + 0xbc) != 0) {
      FUN_00523060(*(int *)(param_1 + 0xbc));
    }
    if (*(int *)(param_1 + 0x104) != 0) {
      FUN_005379c0();
      FUN_0063f0a0(0);
    }
    piVar5 = (int *)(param_1 + 0x78);
    param_1 = 0;
    if (0 < *piVar5) {
      piVar5 = (int *)(iVar4 + 0x1e8);
      do {
        if ((*piVar5 == 1) && (*(int *)(iVar4 + 0x104) != 0)) {
          FUN_00537a00();
        }
        iVar1 = *(int *)(iVar4 + 0xb4);
        if (DAT_006f1dd8 == 1) {
          *(int *)(iVar1 + 0x40) = piVar5[1];
          FUN_00521f80();
          iVar3 = DAT_00735684;
          iVar2 = *(int *)(iVar1 + 0x200 + DAT_00735684 * 4);
          if (iVar2 < 2) {
            *(undefined4 *)(iVar1 + 0x200 + DAT_00735684 * 4) = 0;
            if (0 < iVar2) {
              FUN_0064dd70(*(undefined4 *)(DAT_0072cfd0 + 0x48 + iVar3 * 4));
              FUN_00522280(iVar1);
            }
          }
          else {
            *(int *)(iVar1 + 0x200 + DAT_00735684 * 4) = iVar2 + -1;
          }
        }
        param_1 = param_1 + 1;
        piVar5 = piVar5 + 7;
      } while (param_1 < *(int *)(iVar4 + 0x78));
    }
    if (*(undefined4 **)(iVar4 + 0x104) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar4 + 0x104))(1);
      *(undefined4 *)(iVar4 + 0x104) = 0;
    }
    if (*(undefined4 **)(iVar4 + 0xbc) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar4 + 0xbc))(1);
      *(undefined4 *)(iVar4 + 0xbc) = 0;
    }
    if (*(undefined4 **)(iVar4 + 0xc0) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar4 + 0xc0))(1);
      *(undefined4 *)(iVar4 + 0xc0) = 0;
    }
    if (*(undefined4 **)(iVar4 + 0xb4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar4 + 0xb4))(1);
      *(undefined4 *)(iVar4 + 0xb4) = 0;
    }
    FUN_0063f0a0(0);
  }
  return;
}

