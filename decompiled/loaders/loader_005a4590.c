/* Decompiled from Speed.exe @ 005a4590 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005a4590(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piStack_4;
  
  iVar2 = param_1[10];
  piStack_4 = param_1;
  if (iVar2 != 0) {
    FUN_006451dc();
    (*DAT_00712024)(iVar2);
    param_1[10] = 0;
  }
  if ((((0x12 < *param_1) && (*param_1 < 0x21)) && (DAT_006f1dd8 != 0)) &&
     ((*(int *)(DAT_007356a8 + 0x104) != 0 &&
      (piVar1 = *(int **)(*(int *)(DAT_007356a8 + 0x104) + 0x14), piVar1 != (int *)0x0)))) {
    (**(code **)(*piVar1 + 0x98))(0,0xffffffff);
  }
  if (*param_1 == 2) {
    piVar1 = *(int **)(DAT_007356a8 + 0x8c);
    iVar2 = DAT_007356a8;
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        FUN_0064bbd0();
      }
      FUN_0064b510(&piStack_4);
      FUN_0064b580();
      (**(code **)(*piStack_4 + 4))(piVar1);
      FUN_0064b5a0();
      iVar2 = DAT_007356a8;
      *(undefined4 *)(DAT_007356a8 + 0x8c) = 0;
    }
    *(undefined4 *)(iVar2 + 0x90) = 0;
  }
  FUN_00408010();
  DAT_0073634c = 0;
  if (DAT_00736348 != 0) {
    FUN_00638880(DAT_00736348);
  }
  DAT_00736348 = 0;
  return;
}

