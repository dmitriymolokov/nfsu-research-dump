/* Decompiled from Speed.exe @ 004682c0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004682c0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00779be0;
  if ((undefined4 **)DAT_00779be0 != &DAT_00779be0) {
    do {
      if ((puVar1 != (undefined4 *)0x0) && (puVar1 + -0x94 != (undefined4 *)0x0)) {
        (**(code **)puVar1[-0x94])(1);
        puVar1 = DAT_00779be0;
      }
    } while ((undefined4 **)puVar1 != &DAT_00779be0);
  }
  return;
}

