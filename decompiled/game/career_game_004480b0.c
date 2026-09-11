/* Decompiled from Speed.exe @ 004480b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004480b0(char param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0xa0) != 0) {
    uVar1 = *(uint *)(unaff_ESI + 0x88);
    if ((*(byte *)(unaff_ESI + 0xc) & 2) != 0) {
      uVar1 = uVar1 | 8;
    }
    if (param_1 != '\0') {
      uVar1 = uVar1 | 8;
    }
    uVar2 = FUN_00565b60(*(int *)(unaff_ESI + 0xa0),0,0,uVar1);
    *(undefined4 *)(unaff_ESI + 0x9c) = uVar2;
  }
  return;
}

