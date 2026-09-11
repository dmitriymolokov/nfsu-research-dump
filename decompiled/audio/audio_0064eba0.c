/* Decompiled from Speed.exe @ 0064eba0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0064eba0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < -0x4000) {
    param_2 = -0x4000;
  }
  else if (0x3fff < param_2) {
    param_2 = 0x3fff;
  }
  iVar1 = FUN_00650020(param_1);
  FUN_00652e40(param_1,*(undefined2 *)(iVar1 + 0x118),param_2);
  return;
}

