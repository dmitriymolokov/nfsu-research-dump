/* Decompiled from Speed.exe @ 004764e0 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_004764e0(void)

{
  undefined4 *puVar1;
  
  DAT_00735f6c = (undefined4 *)FUN_00566dc0(0x1f0,"RigidBodySlotPool",0);
  if ((DAT_00735f6c != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_00735f6c;
    puVar1 = DAT_00735f6c;
    DAT_00735f6c[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_00735f6c = &DAT_0073d818;
  }
  DAT_00735f70 = (undefined4 *)FUN_00566dc0(0xa0,"TwoWheelAckermanSteeringSlotPool",0);
  if ((DAT_00735f70 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_00735f70;
    puVar1 = DAT_00735f70;
    DAT_00735f70[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_00735f70 = &DAT_0073d818;
  }
  DAT_00735f74 = (undefined4 *)FUN_00566dc0(400,"WheelSlotPool",0);
  if ((DAT_00735f74 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_00735f74;
    puVar1 = DAT_00735f74;
    DAT_00735f74[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_00735f74 = &DAT_0073d818;
  }
  DAT_00735f78 = (undefined4 *)FUN_00566dc0(0xc0,"EngineSlotPool",0);
  if ((DAT_00735f78 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_00735f78;
    puVar1 = DAT_00735f78;
    DAT_00735f78[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_00735f78 = &DAT_0073d818;
  }
  DAT_00735f7c = (undefined4 *)FUN_00566dc0(0xe8,"DriveTrainSlotPool",0);
  if ((DAT_00735f7c != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_00735f7c;
    puVar1 = DAT_00735f7c;
    DAT_00735f7c[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_00735f7c = &DAT_0073d818;
  }
  DAT_00735f80 = (undefined4 *)FUN_00566dc0(0x40,"AerodynamicsSlotPool",0);
  if ((DAT_00735f80 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_00735f80;
    puVar1 = DAT_00735f80;
    DAT_00735f80[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_00735f80 = &DAT_0073d818;
  }
  DAT_00735f84 = (undefined4 *)FUN_00566dc0(0xc0,"SuspensionSlotPool",0);
  if ((DAT_00735f84 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_00735f84;
    puVar1 = DAT_00735f84;
    DAT_00735f84[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_00735f84 = &DAT_0073d818;
  }
  DAT_00735f88 = (undefined4 *)FUN_00566dc0(0x1f0,"MellovatorSlotPool",0);
  if ((DAT_00735f88 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_00735f88;
    puVar1 = DAT_00735f88;
    DAT_00735f88[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_00735f88 = &DAT_0073d818;
  }
  DAT_00735f8c = (undefined4 *)FUN_00566dc0(0x50,"MellowMoverSlotPool",0);
  if ((DAT_00735f8c != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_00735f8c;
    puVar1 = DAT_00735f8c;
    DAT_00735f8c[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_00735f8c = &DAT_0073d818;
  }
  DAT_00735f90 = (undefined4 *)FUN_00566dc0(0xc,"NullMoverSlotPool",0);
  if (DAT_00735f90 == (undefined4 *)0x0) {
    return;
  }
  if (DAT_0073d814 == 1) {
    *DAT_0073d81c = DAT_00735f90;
    puVar1 = DAT_00735f90;
    DAT_00735f90[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_00735f90 = &DAT_0073d818;
  }
  return;
}

