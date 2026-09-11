/* Decompiled from Speed.exe @ 00645ce0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


uint FUN_00645ce0(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 1) {
    uVar1 = (uint)(byte)*param_1;
  }
  else if (param_2 == 2) {
    uVar1 = (uint)(ushort)*param_1;
  }
  else if (param_2 == 3) {
    uVar1 = *param_1 & 0xffffff;
  }
  else if (param_2 == 4) {
    uVar1 = *param_1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

