/* Decompiled from Speed.exe @ 0051a5f0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4
FUN_0051a5f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005162d0(param_6);
  if (iVar1 != 0) {
    iVar1 = FUN_00517390(param_3,param_4,param_5,param_6);
    if (iVar1 != 0) {
      iVar1 = FUN_00518460(param_6);
      if (iVar1 != 0) {
        uVar2 = FUN_00519520(param_3,param_4,param_5,param_6);
        return uVar2;
      }
    }
  }
  return 0;
}

