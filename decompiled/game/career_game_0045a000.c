/* Decompiled from Speed.exe @ 0045a000 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0045a000(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5)

{
  undefined4 uVar1;
  float *unaff_EDI;
  
  if (ABS(param_5) < _DAT_006cc8bc == (ABS(param_5) == _DAT_006cc8bc)) {
    if (ABS(param_4) < _DAT_006cc8bc == (ABS(param_4) == _DAT_006cc8bc)) {
      FUN_00567310(param_5);
      FUN_00567310(*unaff_EDI);
      uVar1 = FUN_0045a0b0(param_1,param_2,param_4,param_5);
      return uVar1;
    }
    *unaff_EDI = param_5;
  }
  return 1;
}

