/* Decompiled from Speed.exe @ 0063dd20 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 FUN_0063dd20(byte *param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = CONCAT11(*param_1,param_1[1]);
  uVar2 = 0;
  if (sVar1 == -0x3f05) {
    return 1;
  }
  if (CONCAT31(CONCAT21(sVar1,param_1[2]),param_1[3]) == 0x42494746) {
    return 2;
  }
  if (((uint)CONCAT11(param_1[1],param_1[2]) << 8 | (uint)*param_1 << 0x18) == 0x42494700) {
    uVar2 = 3;
  }
  return uVar2;
}

