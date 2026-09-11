/* Decompiled from Speed.exe @ 0061fd80 */
/* S45 QUARANTINE: Windows/D3D — out of WASM scope (see QUARANTINE.md) */
/* Module: EAGL */
/* Ghidra DecompileModule */


void FUN_0061fd80(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = FUN_00621020();
  uVar1 = *(uint *)(iVar2 + 0x240);
  if ((uVar1 & 0x80000) == 0) {
    return;
  }
  if ((uVar1 & 0x10000) == 0) {
    return;
  }
  if ((uVar1 & 0x100000) == 0) {
    return;
  }
  iVar3 = FUN_00621020();
  uVar1 = *(uint *)(iVar3 + 0x204);
  if (uVar1 < 0x104a0011) {
    if (uVar1 == 0x104a0010) {
      DAT_00709d8c = 0;
      return;
    }
    if (uVar1 == 0x10024c57) {
      DAT_00709d8c = 0;
      return;
    }
    bVar4 = uVar1 == 0x10025157;
  }
  else {
    if (uVar1 == 0x10de0171) {
      DAT_00709d8c = 0;
      return;
    }
    bVar4 = uVar1 == 0x53339102;
  }
  if (bVar4) {
    DAT_00709d8c = 0;
    return;
  }
  DAT_00709d8c = '\x01' - (*(char *)(iVar2 + 0x2e9) == '\0');
  return;
}

