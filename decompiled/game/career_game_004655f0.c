/* Decompiled from Speed.exe @ 004655f0 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_004655f0(void)

{
  undefined4 *puVar1;
  
  DAT_00736088 = (undefined4 *)FUN_00566dc0(0x80,"CollisionSlotPool",0);
  if (DAT_00736088 == (undefined4 *)0x0) {
    return;
  }
  if (DAT_0073d814 == 1) {
    *DAT_0073d81c = DAT_00736088;
    puVar1 = DAT_00736088;
    DAT_00736088[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_00736088 = &DAT_0073d818;
  }
  return;
}

