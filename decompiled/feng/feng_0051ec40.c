/* Decompiled from Speed.exe @ 0051ec40 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0051ec40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  undefined4 uStack_4;
  
  if (DAT_006f1dd8 != 0) {
    if (*(int **)(unaff_EDI + 0xa0) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EDI + 0xa0) + 0xc))();
    }
    iVar4 = *(int *)(unaff_EDI + 0x104);
    if (*(int **)(iVar4 + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(iVar4 + 0x14) + 0x28))();
      if (*(undefined4 **)(iVar4 + 0x14) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar4 + 0x14))(1);
      }
      *(undefined4 *)(iVar4 + 0x14) = 0;
    }
    iVar4 = *(int *)(unaff_EDI + 0x104);
    if (*(int **)(iVar4 + 0x18) != (int *)0x0) {
      (**(code **)(**(int **)(iVar4 + 0x18) + 0x28))();
      if (*(undefined4 **)(iVar4 + 0x18) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar4 + 0x18))(1);
      }
      *(undefined4 *)(iVar4 + 0x18) = 0;
    }
    iVar4 = *(int *)(unaff_EDI + 0x104);
    if (*(int **)(iVar4 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar4 + 0x1c) + 0x28))();
      if (*(undefined4 **)(iVar4 + 0x1c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar4 + 0x1c))(1);
      }
      *(undefined4 *)(iVar4 + 0x1c) = 0;
    }
    iVar4 = *(int *)(unaff_EDI + 0x104);
    if (*(int **)(iVar4 + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(iVar4 + 0x20) + 0x28))();
      if (*(undefined4 **)(iVar4 + 0x20) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar4 + 0x20))(1);
      }
      *(undefined4 *)(iVar4 + 0x20) = 0;
    }
    iVar4 = *(int *)(unaff_EDI + 0x104);
    if (*(int **)(iVar4 + 0x24) != (int *)0x0) {
      (**(code **)(**(int **)(iVar4 + 0x24) + 0x28))();
      if (*(undefined4 **)(iVar4 + 0x24) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar4 + 0x24))(1);
      }
      *(undefined4 *)(iVar4 + 0x24) = 0;
    }
    FUN_0063f0a0(0);
    *(undefined1 *)(unaff_EDI + 0x70) = 0;
    *(undefined1 *)(unaff_EDI + 0x72) = 0;
    *(undefined1 *)(unaff_EDI + 0x73) = 0;
    (**(code **)(**(int **)(unaff_EDI + 0x80) + 8))();
    FUN_00533100();
    uStack_4 = 0;
    if (0 < *(int *)(unaff_EDI + 0x78)) {
      iVar4 = unaff_EDI + 0x1e8;
      do {
        iVar1 = *(int *)(unaff_EDI + 0xb4);
        if (DAT_006f1dd8 == 1) {
          *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar4 + 4);
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
        uStack_4 = uStack_4 + 1;
        iVar4 = iVar4 + 0x1c;
      } while (uStack_4 < *(int *)(unaff_EDI + 0x78));
    }
    if (*(undefined4 **)(unaff_EDI + 0x104) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(unaff_EDI + 0x104))(1);
      *(undefined4 *)(unaff_EDI + 0x104) = 0;
    }
    if (*(undefined4 **)(unaff_EDI + 0xb4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(unaff_EDI + 0xb4))(1);
      *(undefined4 *)(unaff_EDI + 0xb4) = 0;
    }
    if (*(undefined4 **)(unaff_EDI + 0xc0) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(unaff_EDI + 0xc0))(1);
      *(undefined4 *)(unaff_EDI + 0xc0) = 0;
    }
    if (*(undefined4 **)(unaff_EDI + 0x80) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(unaff_EDI + 0x80))(1);
      *(undefined4 *)(unaff_EDI + 0x80) = 0;
    }
    FUN_0063f0a0(0);
  }
  return;
}

