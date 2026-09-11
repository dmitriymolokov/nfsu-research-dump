/* Decompiled from Speed.exe @ 0058b110 */
/* Module: Loader */
/* Ghidra DecompileVAs */


void FUN_0058b110(void)

{
  undefined4 *puVar1;
  
  DAT_007344ec = (undefined4 *)FUN_00566dc0(0x58,"LoadedTexturePackSlotPool",0);
  if ((DAT_007344ec != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_007344ec;
    puVar1 = DAT_007344ec;
    DAT_007344ec[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_007344ec = &DAT_0073d818;
  }
  DAT_007344f0 = (undefined4 *)FUN_00566dc0(0x5c,"LoadedSolidPackSlotPool",0);
  if ((DAT_007344f0 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_007344f0;
    puVar1 = DAT_007344f0;
    DAT_007344f0[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_007344f0 = &DAT_0073d818;
  }
  DAT_007344f4 = (undefined4 *)FUN_00566dc0(0x10,"LoadedSkinLayerSlotPool",0);
  if ((DAT_007344f4 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_007344f4;
    puVar1 = DAT_007344f4;
    DAT_007344f4[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_007344f4 = &DAT_0073d818;
  }
  DAT_007344f8 = (undefined4 *)FUN_00566dc0(0x68,"LoadedWheelSlotPool",0);
  if ((DAT_007344f8 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_007344f8;
    puVar1 = DAT_007344f8;
    DAT_007344f8[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_007344f8 = &DAT_0073d818;
  }
  DAT_007344fc = (undefined4 *)FUN_00566dc0(500,"LoadedCarSlotPool",0);
  if ((DAT_007344fc != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_007344fc;
    puVar1 = DAT_007344fc;
    DAT_007344fc[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_007344fc = &DAT_0073d818;
  }
  DAT_00734500 = (undefined4 *)FUN_00566dc0(0x1c,"LoadedRideInfoSlotPool",0);
  if ((DAT_00734500 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_00734500;
    puVar1 = DAT_00734500;
    DAT_00734500[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_00734500 = &DAT_0073d818;
  }
  DAT_007344e8 = FUN_00565b60(FUN_004e2000,0,0,0x2000);
  DAT_007301e4 = &DAT_00730358;
  FUN_00565310(DAT_007344e8,&DAT_006b9418);
  return;
}

