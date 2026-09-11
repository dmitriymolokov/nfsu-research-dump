/* Decompiled from Speed.exe @ 00464c80 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00464c80(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *unaff_ESI;
  
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x15] = 0;
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x18] = 0;
  unaff_ESI[0x1a] = 0;
  unaff_ESI[0x1b] = 0;
  unaff_ESI[0x1c] = 0;
  unaff_ESI[0x1d] = 0;
  unaff_ESI[0x1f] = 0;
  unaff_ESI[0x20] = 0;
  unaff_ESI[0x21] = 0;
  unaff_ESI[0x22] = 0;
  unaff_ESI[0x14] = 0x3f800000;
  unaff_ESI[0x19] = 0x3f800000;
  unaff_ESI[0x1e] = 0x3f800000;
  unaff_ESI[0x23] = 0x3f800000;
  *(undefined2 *)(unaff_ESI + 0xdd) = 0;
  *(undefined2 *)((int)unaff_ESI + 0x376) = 0;
  unaff_ESI[0x24] = 0;
  unaff_ESI[0x25] = 0;
  unaff_ESI[0x26] = 0;
  unaff_ESI[0x28] = 0;
  unaff_ESI[0x29] = 0;
  unaff_ESI[0x2a] = 0;
  iVar3 = 0;
  piVar4 = unaff_ESI + 0xcd;
  piVar1 = unaff_ESI + 0xb0;
  do {
    piVar1[-4] = 0;
    *piVar1 = 0;
    piVar1[4] = 0;
    piVar1[8] = 0;
    piVar1[0xc] = 0;
    *(undefined1 *)((int)unaff_ESI + iVar3 + 0x310) = 1;
    piVar1[0x15] = 1;
    piVar1[0x19] = 1;
    *piVar4 = 0;
    piVar4[1] = 0;
    piVar1[0x25] = 0;
    piVar1[0x10] = 0;
    piVar1[0x29] = 0;
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 1;
    piVar4 = piVar4 + 2;
  } while (iVar3 < 4);
  unaff_ESI[0xe3] = 4;
  iVar3 = 0;
  do {
    FUN_00465150(unaff_ESI);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  unaff_ESI[0xe0] = 0;
  unaff_ESI[0xe1] = 0;
  unaff_ESI[0xe2] = 0;
  unaff_ESI[0xe4] = 0;
  unaff_ESI[0xe5] = 0;
  unaff_ESI[0xe6] = 1;
  unaff_ESI[0xe7] = 0;
  unaff_ESI[0xe8] = 0x447a0000;
  unaff_ESI[0xe9] = -0x40800000;
  unaff_ESI[0xea] = 1;
  if (((unaff_ESI[0xec] == 0) || (unaff_ESI[0xec] == 0x7fffffff)) ||
     ((float)unaff_ESI[0xec] * _DAT_006cca38 == DAT_006cc7a4)) {
    iVar3 = *unaff_ESI;
    iVar2 = FUN_00674898();
    unaff_ESI[0xec] = iVar2;
    iVar2 = FUN_00674898();
    unaff_ESI[0xee] = iVar2;
    if (*(int *)(iVar3 + 0x2a4) < 1) {
      unaff_ESI[0xed] = 0;
    }
    else {
      iVar3 = FUN_00674898();
      unaff_ESI[0xed] = iVar3;
    }
    unaff_ESI[0xef] = 0;
  }
  unaff_ESI[0xf1] = 0x3f800000;
  unaff_ESI[0xf2] = 0;
  unaff_ESI[0xf3] = 0;
  unaff_ESI[0xf4] = 0x3f800000;
  piVar4 = unaff_ESI + 0xf8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  *(undefined1 *)(unaff_ESI + 0x108) = 0;
  return;
}

