/* Decompiled from Speed.exe @ 005a0220 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005a0220(uint param_1)

{
  uint uVar1;
  short *psVar2;
  uint unaff_ESI;
  short unaff_DI;
  
  uVar1 = 0;
  if (DAT_00734408 != 0) {
    psVar2 = (short *)(DAT_00734404 + 2);
    do {
      if ((((ushort)psVar2[-1] == param_1) && ((ushort)psVar2[1] == unaff_ESI)) &&
         (unaff_DI == *psVar2)) {
        return uVar1 * 0x10 + DAT_00734404;
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 8;
    } while (uVar1 < DAT_00734408);
  }
  return 0;
}

