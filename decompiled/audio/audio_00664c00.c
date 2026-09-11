/* Decompiled from Speed.exe @ 00664c00 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00664c00(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((-1 < param_2) && (param_2 < 10)) {
    param_1 = param_1 + param_2 * 0x14;
    *(undefined4 *)(param_1 + 0x4a8) = param_3;
    *(undefined4 *)(param_1 + 0x4ac) = param_4;
    uVar1 = FUN_0066ddd0(1000,2000);
    *(undefined4 *)(param_1 + 0x4a0) = uVar1;
    uVar1 = FUN_00666d60(100,100,0);
    *(undefined4 *)(param_1 + 0x4a4) = uVar1;
    FUN_006670b0(uVar1,*(undefined4 *)(param_1 + 0x4a0));
    uVar1 = *(undefined4 *)(param_1 + 0x4a4);
  }
  return uVar1;
}

