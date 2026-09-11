/* Decompiled from Speed.exe @ 00591d90 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_00591d90(void)

{
  undefined4 *puVar1;
  
  DAT_007344c8 = (undefined4 *)FUN_00566dc0(0x70,"WorldModelSlotPool",0);
  if (DAT_007344c8 == (undefined4 *)0x0) {
    return;
  }
  if (DAT_0073d814 == 1) {
    *DAT_0073d81c = DAT_007344c8;
    puVar1 = DAT_007344c8;
    DAT_007344c8[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_007344c8 = &DAT_0073d818;
  }
  return;
}

