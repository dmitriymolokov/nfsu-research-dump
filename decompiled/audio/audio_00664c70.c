/* Decompiled from Speed.exe @ 00664c70 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00664c70(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((-1 < param_2) && (param_2 < 10)) && (param_3 != 0)) {
    uVar1 = FUN_006670c0(param_3);
    iVar2 = FUN_0066dac0(uVar1);
    while (iVar2 != 0) {
      uVar3 = FUN_00666eb0(param_3,iVar2);
      FUN_00447030(uVar3);
      iVar2 = FUN_0066dac0(uVar1);
    }
    FUN_0066da20(uVar1);
    FUN_00666da0(param_3);
    param_1 = param_1 + param_2 * 0x14;
    if (*(int *)(param_1 + 0x4a4) == param_3) {
      *(undefined4 *)(param_1 + 0x4a0) = 0;
      *(undefined4 *)(param_1 + 0x4a4) = 0;
    }
    *(undefined4 *)(param_1 + 0x4a8) = 0;
    *(undefined4 *)(param_1 + 0x4ac) = 0;
  }
  return;
}

