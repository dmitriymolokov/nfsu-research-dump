/* Decompiled from Speed.exe @ 00408610 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408610(void)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar5;
  
  puVar4 = &DAT_006cc0c8;
  iVar3 = -1;
  uVar2 = 0x52;
  do {
    iVar3 = iVar3 * 0x21 + uVar2;
    pbVar1 = puVar4 + 1;
    uVar2 = (uint)*pbVar1;
    puVar4 = puVar4 + 1;
  } while (*pbVar1 != 0);
  DAT_007364ac = FUN_005461c0(iVar3,0,0);
  pcVar5 = "RVM_MASK";
  iVar3 = -1;
  uVar2 = 0x52;
  do {
    iVar3 = iVar3 * 0x21 + uVar2;
    pbVar1 = (byte *)(pcVar5 + 1);
    uVar2 = (uint)*pbVar1;
    pcVar5 = pcVar5 + 1;
  } while (*pbVar1 != 0);
  DAT_007364b0 = FUN_005461c0(iVar3,0,0);
  pcVar5 = "WHITE16X16_NOALPHA";
  iVar3 = -1;
  uVar2 = 0x57;
  do {
    iVar3 = iVar3 * 0x21 + uVar2;
    pbVar1 = (byte *)(pcVar5 + 1);
    uVar2 = (uint)*pbVar1;
    pcVar5 = pcVar5 + 1;
  } while (*pbVar1 != 0);
  _DAT_007364b4 = FUN_005461c0(iVar3,0,0);
  return;
}

