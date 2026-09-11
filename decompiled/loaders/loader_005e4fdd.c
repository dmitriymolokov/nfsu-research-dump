/* Decompiled from Speed.exe @ 005e4fdd */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4
FUN_005e4fdd(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = 0;
  }
  if (param_3 == 0) {
    uVar1 = 0x8876086c;
  }
  else {
    uVar1 = FUN_005e4ca2(param_1,param_2,param_3,0,0,0,param_4,param_5,param_6,param_7,param_8);
  }
  return uVar1;
}

