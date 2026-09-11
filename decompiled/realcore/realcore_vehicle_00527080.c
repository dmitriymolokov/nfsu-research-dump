/* Decompiled from Speed.exe @ 00527080 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __thiscall FUN_00527080(int param_1,undefined4 param_2)

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
    goto LAB_0052713c;
  default:
    if (*(int *)(param_1 + 0x1d18) == 1) {
      uVar2 = *(undefined4 *)(param_1 + 0x1f78);
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x1f78);
    }
    piVar1 = (int *)FUN_00584270(uVar2);
    (**(code **)(*piVar1 + 4))();
    uVar2 = *(undefined4 *)(param_1 + 0x1f34);
  }
  *(undefined4 *)(param_1 + 0x1f88) = uVar2;
LAB_0052713c:
  FUN_00584270(*(float *)(param_1 + 0x1f90) - *(float *)(param_1 + 0x1f34));
  *(undefined4 *)(param_1 + 0x1f8c) = *(undefined4 *)(param_1 + 0x1f88);
  return;
}

