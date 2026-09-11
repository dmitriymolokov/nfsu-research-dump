/* Decompiled from Speed.exe @ 005ef48f */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4
FUN_005ef48f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,uint param_6)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 in_MM2;
  undefined8 uVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [20];
  
  FastExitMediaState();
  uVar1 = PackedFloatingADD((ulonglong)param_5,(ulonglong)param_6);
  FUN_005ef358(local_28,param_2,param_3,(int)uVar1);
  FUN_005ef358(local_18,param_2,param_4,(int)uVar1);
  uVar3 = FloatingReciprocalAprox(in_MM2,uVar1 & 0xffffffff);
  uVar2 = PackedFloatingReciprocalIter1(uVar1 & 0xffffffff,uVar3);
  uVar2 = PackedFloatingReciprocalIter2(uVar2,uVar3);
  uVar2 = PackedFloatingMUL(uVar2,(ulonglong)param_6);
  FUN_005ef358(param_1,local_28,local_18,(int)uVar2);
  FastExitMediaState();
  return param_1;
}

