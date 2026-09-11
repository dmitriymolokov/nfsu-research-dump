/* Decompiled from Speed.exe @ 0058d750 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0058d750(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *unaff_ESI;
  int *piVar6;
  undefined4 *puVar7;
  
  piVar6 = unaff_ESI + 3;
  *DAT_00737b44 = (int)piVar6;
  piVar3 = piVar6;
  unaff_ESI[4] = (int)DAT_00737b44;
  DAT_00737b44 = piVar3;
  *piVar6 = (int)&DAT_00737b40;
  piVar6 = unaff_ESI + 5;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  puVar7 = (undefined4 *)((int)unaff_ESI + 0x36);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)(unaff_ESI + 0xd) = 0;
  *(undefined2 *)((int)unaff_ESI + 0x56) = 0;
  unaff_ESI[0x1a] = 0;
  unaff_ESI[0x37] = 0;
  unaff_ESI[0x38] = 0;
  unaff_ESI[0x39] = 0;
  *unaff_ESI = param_1;
  iVar4 = *(int *)(param_1 + 0xc) + 0x20;
  iVar5 = -1;
  bVar2 = *(byte *)(*(int *)(param_1 + 0xc) + 0x20);
  while (bVar2 != 0) {
    iVar5 = iVar5 * 0x21 + (uint)bVar2;
    pbVar1 = (byte *)(iVar4 + 1);
    iVar4 = iVar4 + 1;
    bVar2 = *pbVar1;
  }
  unaff_ESI[1] = iVar5;
  unaff_ESI[0x3a] = -1;
  unaff_ESI[0x3b] = -1;
  unaff_ESI[0x3c] = -1;
  *(undefined2 *)(unaff_ESI + 0x3d) = 0xffff;
  *(undefined1 *)((int)unaff_ESI + 0xf6) = 0xff;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  return;
}

