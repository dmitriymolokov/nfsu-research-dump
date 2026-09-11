/* Decompiled from Speed.exe @ 00660c60 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00660c60(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_1 = &LAB_00660b00;
  param_1[1] = &LAB_00660c40;
  uVar2 = FUN_00659960(*(undefined4 *)(param_2 + 0x1c));
  uVar2 = FUN_00660820(uVar2);
  param_1[0xc] = uVar2;
  uVar1 = FUN_00659990(*(undefined4 *)(param_2 + 0x1c));
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  param_1[0xb] = *(undefined4 *)(param_2 + 0x24);
  param_1[8] = 0;
  param_1[9] = *(undefined4 *)(param_2 + 0xc);
  param_1[10] = 0;
  param_1[0xd] = 0;
  iVar3 = FUN_0065f5f0(0xa8);
  if (iVar3 != 0) {
    uVar2 = FUN_0065fbd0();
    param_1[7] = uVar2;
    return;
  }
  param_1[7] = 0;
  return;
}

