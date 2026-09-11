/* Decompiled from Speed.exe @ 005b148d */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005b148d(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  
  if ((param_3 == param_4) || (*param_3 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_005b1147(&param_1,&param_2,param_4,param_3);
  }
  return uVar1;
}

