/* Decompiled from Speed.exe @ 00431df0 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_00431df0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  undefined4 *puVar4;
  
  puVar4 = unaff_ESI;
  for (iVar3 = 0x4e; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  unaff_ESI[2] = 3;
  unaff_ESI[4] = 3;
  unaff_ESI[0xc] = 1;
  unaff_ESI[0x12] = 1;
  unaff_ESI[0x19] = 1;
  unaff_ESI[0x1a] = 1;
  unaff_ESI[0x1b] = 1;
  unaff_ESI[0x1c] = 1;
  unaff_ESI[0x1d] = 1;
  unaff_ESI[0x1f] = 1;
  unaff_ESI[0x44] = 1;
  unaff_ESI[0x45] = 0x3f800000;
  unaff_ESI[0x46] = 0x3f800000;
  unaff_ESI[0xb] = 2;
  unaff_ESI[0x20] = 2;
  *unaff_ESI = 0xb;
  unaff_ESI[1] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[5] = 0x3f000000;
  *(undefined1 *)(unaff_ESI + 6) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x19) = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[0xd] = 7;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0x10] = 0;
  *(undefined1 *)((int)unaff_ESI + 0x46) = 0;
  *(undefined1 *)(unaff_ESI + 0x13) = 0;
  unaff_ESI[0x14] = 0;
  *(undefined1 *)(unaff_ESI + 0x11) = 7;
  *(undefined1 *)((int)unaff_ESI + 0x45) = 8;
  unaff_ESI[0x18] = 0;
  unaff_ESI[0x1e] = 0;
  unaff_ESI[0x23] = 0;
  unaff_ESI[0x43] = 0;
  puVar4 = (undefined4 *)&DAT_0077c790;
  for (iVar3 = 0x36d8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  unaff_ESI[0x48] = 0xffffffff;
  unaff_ESI[0x49] = 0xffffffff;
  unaff_ESI[0x16] = 0xffffffff;
  unaff_ESI[0x17] = 0xffffffff;
  unaff_ESI[0x4a] = &DAT_0077c790;
  unaff_ESI[0x4b] = 0;
  FUN_00432890();
  FUN_00432890();
  unaff_ESI[10] = 0;
  FUN_004329a0();
  *(undefined1 *)((int)unaff_ESI + 0x47) = 0;
  uVar1 = DAT_006f227c ^ 0x1d872b41;
  uVar2 = uVar1 >> 5 ^ uVar1;
  uVar1 = uVar2 << 0x1b ^ uVar2 ^ uVar1;
  unaff_ESI[0x4c] = DAT_006f227c;
  DAT_006f227c = uVar1;
  unaff_ESI[0x4d] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[0x24] = 0x3f800000;
  unaff_ESI[0x47] = 2;
  return;
}

