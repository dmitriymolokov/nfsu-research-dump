/* spd-match: matched pct=100.00 M4.0.2-CE */
/* Decompiled from Speed.exe @ 005f57dd */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4  FUN_005f57dd(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 8) < 0x14) || (**(uint **)(param_1 + 0xc) < 0x14)) {
    uVar1 = 0x88760b59;
  }
  else {
    *param_2 = (uint)*(uint **)(param_1 + 0xc);
    uVar1 = 0;
  }
  return uVar1;
}

