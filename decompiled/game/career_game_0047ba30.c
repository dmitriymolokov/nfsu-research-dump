/* Decompiled from Speed.exe @ 0047ba30 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


uint FUN_0047ba30(uint param_1)

{
  uint uVar1;
  int unaff_ESI;
  
  uVar1 = *(uint *)(unaff_ESI + 0x1c);
  if (uVar1 == param_1) {
    FUN_004444f0();
    FUN_004444f0();
    uVar1 = 0xffffffff;
    DAT_0077aaf9 = 1;
    DAT_0077aa6c = 0xffffffff;
    DAT_0077aab0 = 0xffffffff;
  }
  else if (param_1 != 0) {
    if (uVar1 != 0) {
      FUN_00444550();
      FUN_00444550();
      FUN_00445450(*(undefined4 *)(unaff_ESI + 0x1c));
    }
    FUN_004444f0();
    FUN_004444f0();
    DAT_0077aa6c = 0xffffffff;
    DAT_0077aab0 = 0xffffffff;
    DAT_0077aaf9 = 1;
    return 0xffffff01;
  }
  return uVar1 & 0xffffff00;
}

