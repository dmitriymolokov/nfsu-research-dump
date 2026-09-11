/* Decompiled from Speed.exe @ 00514480 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00514480(void)

{
  undefined4 *puVar1;
  
  DAT_00735704 = (undefined4 *)FUN_00566dc0(0x60,"FERenderObjectSlotPool",0);
  if ((DAT_00735704 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_00735704;
    puVar1 = DAT_00735704;
    DAT_00735704[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_00735704 = &DAT_0073d818;
  }
  DAT_00735708 = (undefined4 *)FUN_00566dc0(0xc0,"FEEPolySlotPool",0);
  if (DAT_00735708 == (undefined4 *)0x0) {
    return;
  }
  if (DAT_0073d814 == 1) {
    *DAT_0073d81c = DAT_00735708;
    puVar1 = DAT_00735708;
    DAT_00735708[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_00735708 = &DAT_0073d818;
  }
  return;
}

