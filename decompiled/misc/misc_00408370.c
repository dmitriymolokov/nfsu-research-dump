/* Decompiled from Speed.exe @ 00408370 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00408370(void)

{
  if ((undefined4 **)DAT_00740504 != &DAT_00740504) {
    if ((((DAT_00740504 != (undefined4 *)0x0) && (DAT_00740504 != (undefined4 *)0x4)) &&
        ((undefined4 **)DAT_00740564 != &DAT_00740564)) &&
       ((DAT_00740564 != (undefined4 *)0x0 && (DAT_00740564 != (undefined4 *)0x4)))) {
      DAT_007364a0 = 3;
      return;
    }
    if ((undefined4 **)DAT_00740504 != &DAT_00740504) {
      if (((DAT_00740504 != (undefined4 *)0x0) && (DAT_00740504 != (undefined4 *)0x4)) &&
         (((undefined4 **)DAT_007405c4 != &DAT_007405c4 &&
          ((DAT_007405c4 != (undefined4 *)0x0 && (DAT_007405c4 != (undefined4 *)0x4)))))) {
        DAT_007364a0 = 2;
        return;
      }
      if ((((undefined4 **)DAT_00740504 != &DAT_00740504) && (DAT_00740504 != (undefined4 *)0x0)) &&
         (DAT_00740504 != (undefined4 *)0x4)) {
        DAT_007364a0 = 1;
        return;
      }
    }
  }
  DAT_007364a0 = 0;
  return;
}

