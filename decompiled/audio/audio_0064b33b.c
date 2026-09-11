/* Decompiled from Speed.exe @ 0064b33b */
/* Module: Audio */
/* Ghidra DecompileAll */


uint FUN_0064b33b(uint *param_1,int param_2)

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

