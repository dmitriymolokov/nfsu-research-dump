/* Decompiled from Speed.exe @ 0040c600 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0040c600(void)

{
  undefined4 *puVar1;
  
  DAT_0073644c = (undefined4 *)FUN_00566dc0(0x80,"eLightMaterialPlatInfoSlotPool",0);
  if (DAT_0073644c == (undefined4 *)0x0) {
    return;
  }
  if (DAT_0073d814 == 1) {
    *DAT_0073d81c = DAT_0073644c;
    puVar1 = DAT_0073644c;
    DAT_0073644c[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_0073644c = &DAT_0073d818;
  }
  return;
}

