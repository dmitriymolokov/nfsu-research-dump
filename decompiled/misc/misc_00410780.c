/* Decompiled from Speed.exe @ 00410780 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00410780(void)

{
  undefined4 *puVar1;
  
  DAT_007363b8 = (undefined4 *)FUN_00566dc0(0x604,"eStripSlotPool",0);
  if (DAT_007363b8 == (undefined4 *)0x0) {
    uRam00000014 = uRam00000014 & 0xfffffffd;
    return;
  }
  if (DAT_0073d814 == 1) {
    *DAT_0073d81c = DAT_007363b8;
    puVar1 = DAT_007363b8;
    DAT_007363b8[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_007363b8 = &DAT_0073d818;
  }
  DAT_007363b8[5] = DAT_007363b8[5] & 0xfffffffd;
  return;
}

