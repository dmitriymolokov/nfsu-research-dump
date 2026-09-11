/* Decompiled from Speed.exe @ 00527180 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __thiscall FUN_00527180(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x1d14)) {
  case 1:
    break;
  case 2:
  case 6:
    *(undefined4 *)(param_1 + 0x1bc8 + *(int *)(param_1 + 0x1c04) * 4) =
         *(undefined4 *)(param_1 + 0x1f20);
    FUN_005326f0(param_2);
    uVar1 = *(undefined4 *)(param_1 + 0x1c08);
    goto LAB_005271e3;
  case 3:
  case 4:
  case 5:
    break;
  default:
    uVar1 = *(undefined4 *)(param_1 + 0x1f20);
    goto LAB_005271e3;
  }
  FUN_005326f0(param_2);
  uVar1 = *(undefined4 *)(param_1 + 0x1c08);
LAB_005271e3:
  *(undefined4 *)(param_1 + 0x1f1c) = uVar1;
  *(float *)(param_1 + 0x1f1c) = *(float *)(param_1 + 0x1f1c) - *(float *)(param_1 + 0x196c);
  return;
}

