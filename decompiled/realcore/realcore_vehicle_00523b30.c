/* Decompiled from Speed.exe @ 00523b30 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __thiscall FUN_00523b30(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x1d14)) {
  case 1:
  case 3:
    FUN_005326f0(param_2);
    uVar2 = *(undefined4 *)(param_1 + 0x1c84);
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x1c44 + *(int *)(param_1 + 0x1c80) * 4) =
         *(undefined4 *)(param_1 + 0x1f90);
    FUN_005326f0(param_2);
    uVar2 = *(undefined4 *)(param_1 + 0x1c84);
    break;
  case 4:
  case 5:
    FUN_005326f0(param_2);
    *(undefined4 *)(param_1 + 0x1f88) = *(undefined4 *)(param_1 + 0x1c84);
    FUN_00584310(*(undefined4 *)(param_1 + 0x1c84));
    goto LAB_00523be3;
  default:
    if (*(char *)(param_1 + 0x1f10) == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x42c80000;
    }
    piVar1 = (int *)FUN_00584270(uVar2);
    (**(code **)(*piVar1 + 4))();
    uVar2 = *(undefined4 *)(param_1 + 0x1f34);
  }
  *(undefined4 *)(param_1 + 0x1f88) = uVar2;
LAB_00523be3:
  FUN_00584270(*(float *)(param_1 + 0x1f90) - *(float *)(param_1 + 0x1f34));
  *(undefined4 *)(param_1 + 0x1f8c) = *(undefined4 *)(param_1 + 0x1f88);
  return;
}

