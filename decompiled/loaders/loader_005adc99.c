/* spd-match: far pct=22.99 M4.0.2-CE */
/* Decompiled from Speed.exe @ 005adc99 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4
FUN_005adc99(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,float param_6)

{
  undefined1 local_24 [16];
  undefined1 local_14 [16];
  
  FUN_005adb62(local_24,param_2,param_5,param_6);
  FUN_005adb62(local_14,param_3,param_4,param_6);
  param_6 = (1.0 - param_6) * param_6;
  FUN_005adb62(param_1,local_24,local_14,param_6 + param_6);
  return param_1;
}

