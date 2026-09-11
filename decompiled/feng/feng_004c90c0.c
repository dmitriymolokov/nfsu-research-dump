/* Decompiled from Speed.exe @ 004c90c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c90c0(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_ESI;
  
  FUN_00495f00(0x731eeb7b);
  if (*(int *)(unaff_ESI + 0x80) != unaff_ESI + 0x80) {
    uVar1 = *(uint *)(*(int *)(unaff_ESI + 0x7c) + 0xc);
    uVar2 = *(undefined4 *)(&DAT_006fa0b0 + uVar1 * 4);
    if ((byte)uVar1 < 0x1b) {
      uVar3 = *(undefined4 *)(&DAT_006fa120 + (uVar1 & 0xff) * 4);
    }
    else {
      uVar3 = 0;
    }
    FUN_00495f00(uVar3);
    FUN_00495f00(uVar2);
    return;
  }
  FUN_004f6850(&DAT_006b9172);
  return;
}

