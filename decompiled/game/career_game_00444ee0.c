/* Decompiled from Speed.exe @ 00444ee0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


uint FUN_00444ee0(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *unaff_ESI;
  
  iVar5 = 0;
  iVar4 = 0;
  FUN_00444e90(unaff_ESI);
  uVar1 = FUN_00444d80(unaff_ESI);
  do {
    if (uVar1 == 0) {
LAB_00444f55:
      unaff_ESI[0x5c] = 0;
      iVar5 = 0;
      if (DAT_007301d8 != 0) {
        iVar5 = FUN_005657d0();
      }
      iVar5 = iVar5 - uVar1;
      if (0 < unaff_ESI[1]) {
        iVar4 = unaff_ESI[1];
        piVar3 = (int *)(*unaff_ESI + 0xc);
        do {
          if ((*(char *)((int)piVar3 + -1) == '\0') && (*piVar3 != 0)) {
            iVar5 = iVar5 + piVar3[4];
          }
          piVar3 = piVar3 + 0xe;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      unaff_ESI[0x5c] = iVar5;
      return CONCAT31((int3)((uint)iVar5 >> 8),1);
    }
    if ((0x9c3c00 < iVar5) || (0x9c3c00 < iVar4)) {
      return uVar1 & 0xffffff00;
    }
    FUN_00444e90(unaff_ESI);
    iVar2 = FUN_00444780(unaff_ESI);
    iVar5 = iVar5 + iVar2;
    if (iVar2 < 1) {
      iVar2 = FUN_00444830(unaff_ESI);
      iVar4 = iVar4 + iVar2;
      if (iVar2 == 0) {
        *(undefined1 *)(unaff_ESI + 0x58) = 1;
        FUN_00444d80(unaff_ESI);
        goto LAB_00444f55;
      }
    }
    FUN_00444e90(unaff_ESI);
    uVar1 = FUN_00444d80(unaff_ESI);
  } while( true );
}

