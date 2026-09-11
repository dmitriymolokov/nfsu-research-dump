/* Decompiled from Speed.exe @ 004e1f70 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004e1f70(void)

{
  int extraout_EDX;
  undefined4 uVar1;
  int extraout_EDX_00;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(unaff_EBX + 0x14) = 1;
  iVar3 = 0;
  do {
    iVar2 = *(int *)(unaff_EBX + iVar3 * 4);
    if ((iVar2 != 0) &&
       (*(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar2 + 0x18) == 5)) {
      uVar1 = *(undefined4 *)(iVar2 + 0x60);
      iVar2 = *(int *)(iVar2 + 0x5c);
      if (0 < iVar2) {
        do {
          FUN_004f6970(uVar1);
          uVar1 = *(undefined4 *)(extraout_EDX + 4);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  iVar3 = *(int *)(unaff_EBX + 0xc);
  if ((iVar3 != 0) &&
     (*(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffe | 0x400000,
     *(int *)(iVar3 + 0x18) == 5)) {
    uVar1 = *(undefined4 *)(iVar3 + 0x60);
    iVar3 = *(int *)(iVar3 + 0x5c);
    if (0 < iVar3) {
      do {
        FUN_004f6970(uVar1);
        uVar1 = *(undefined4 *)(extraout_EDX_00 + 4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

