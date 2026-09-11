/* Decompiled from Speed.exe @ 004fbe30 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004fbe30(int param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint unaff_EDI;
  
  uVar3 = 0xffffffff;
  puVar5 = (uint *)(param_1 + 0xc);
  iVar4 = 2;
  do {
    bVar2 = (byte)iVar4;
    if (((unaff_EDI & 1 << (bVar2 - 2 & 0x1f)) != 0) && (puVar5[-1] <= uVar3)) {
      uVar3 = puVar5[-1];
    }
    if (((unaff_EDI & 1 << (bVar2 - 1 & 0x1f)) != 0) && (*puVar5 <= uVar3)) {
      uVar3 = *puVar5;
    }
    if (((unaff_EDI & 1 << (bVar2 & 0x1f)) != 0) && (puVar5[1] <= uVar3)) {
      uVar3 = puVar5[1];
    }
    if (((unaff_EDI & 1 << (bVar2 + 1 & 0x1f)) != 0) && (puVar5[2] <= uVar3)) {
      uVar3 = puVar5[2];
    }
    if (((unaff_EDI & 1 << (bVar2 + 2 & 0x1f)) != 0) && (puVar5[3] <= uVar3)) {
      uVar3 = puVar5[3];
    }
    if (((unaff_EDI & 1 << (bVar2 + 3 & 0x1f)) != 0) && (puVar5[4] <= uVar3)) {
      uVar3 = puVar5[4];
    }
    if (((unaff_EDI & 1 << (bVar2 + 4 & 0x1f)) != 0) && (puVar5[5] <= uVar3)) {
      uVar3 = puVar5[5];
    }
    if (((unaff_EDI & 1 << (bVar2 + 5 & 0x1f)) != 0) && (puVar5[6] <= uVar3)) {
      uVar3 = puVar5[6];
    }
    iVar1 = iVar4 + 6;
    puVar5 = puVar5 + 8;
    iVar4 = iVar4 + 8;
  } while (iVar1 < 0x20);
  return;
}

