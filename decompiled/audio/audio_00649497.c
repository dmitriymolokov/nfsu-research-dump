/* Decompiled from Speed.exe @ 00649497 */
/* Module: Audio */
/* Ghidra DecompileAll */


uint FUN_00649497(byte *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 1) {
    uVar1 = (uint)*param_1;
  }
  else if (param_2 == 2) {
    uVar1 = (uint)CONCAT11(*param_1,param_1[1]);
  }
  else if (param_2 == 3) {
    uVar1 = (uint)*param_1 << 0x10 | (uint)param_1[1] << 8 | (uint)param_1[2];
  }
  else if (param_2 == 4) {
    uVar1 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
            (uint)param_1[3];
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

