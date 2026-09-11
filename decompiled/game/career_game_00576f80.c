/* Decompiled from Speed.exe @ 00576f80 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_00576f80(void)

{
  undefined4 *puVar1;
  
  DAT_007306c8 = (undefined4 *)FUN_00566dc0(0x28,"MobileTopologySlotPool",0);
  if ((DAT_007306c8 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_007306c8;
    puVar1 = DAT_007306c8;
    DAT_007306c8[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_007306c8 = &DAT_0073d818;
  }
  DAT_007306cc = (undefined4 *)FUN_00566dc0(0xd0,"MobileTrackPolygonSlotPool",0);
  if (DAT_007306cc == (undefined4 *)0x0) {
    return;
  }
  if (DAT_0073d814 == 1) {
    *DAT_0073d81c = DAT_007306cc;
    puVar1 = DAT_007306cc;
    DAT_007306cc[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_007306cc = &DAT_0073d818;
  }
  return;
}

