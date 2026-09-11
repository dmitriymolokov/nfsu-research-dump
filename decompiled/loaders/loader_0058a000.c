/* Decompiled from Speed.exe @ 0058a000 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0058a000(void)

{
  undefined4 *puVar1;
  
  if (DAT_00734510 == (undefined4 *)0x0) {
    DAT_00734510 = (undefined4 *)FUN_00566dc0(0x50,"ClanSlotPool",0);
    if (DAT_00734510 == (undefined4 *)0x0) {
      return;
    }
    if (DAT_0073d814 == 1) {
      *DAT_0073d81c = DAT_00734510;
      puVar1 = DAT_00734510;
      DAT_00734510[1] = DAT_0073d81c;
      DAT_0073d81c = puVar1;
      *DAT_00734510 = &DAT_0073d818;
    }
  }
  return;
}

