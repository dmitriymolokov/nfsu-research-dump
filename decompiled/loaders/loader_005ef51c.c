/* Decompiled from Speed.exe @ 005ef51c */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ef51c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  FUN_005ef358(local_20,param_2,param_5,param_6);
  FUN_005ef358(local_10,param_3,param_4,param_6);
  uVar1 = (ulonglong)param_6;
  uVar2 = PackedFloatingMUL(uVar1,uVar1);
  uVar2 = PackedFloatingSUB(uVar1,uVar2);
  uVar2 = PackedFloatingMUL(uVar2,_DAT_006a0790);
  FUN_005ef358(param_1,local_20,local_10,(int)uVar2);
  FastExitMediaState();
  return;
}

