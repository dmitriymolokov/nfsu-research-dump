/* Decompiled from Speed.exe @ 0046ac40 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_0046ac40(void)

{
  undefined4 *puVar1;
  
  DAT_00735fe4 = (undefined4 *)FUN_00566dc0(0x40,"ContactSlotPool",0);
  if (DAT_00735fe4 == (undefined4 *)0x0) {
    return;
  }
  if (DAT_0073d814 == 1) {
    *DAT_0073d81c = DAT_00735fe4;
    puVar1 = DAT_00735fe4;
    DAT_00735fe4[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_00735fe4 = &DAT_0073d818;
  }
  return;
}

