/* Decompiled from Speed.exe @ 0050c930 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_0050c930(void)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  int unaff_ESI;
  
  pcVar4 = "AUTOSTRADA";
  iVar3 = -1;
  uVar2 = 0x41;
  do {
    iVar3 = iVar3 * 0x21 + uVar2;
    pbVar1 = (byte *)(pcVar4 + 1);
    uVar2 = (uint)*pbVar1;
    pcVar4 = pcVar4 + 1;
  } while (*pbVar1 != 0);
  if (unaff_ESI != iVar3) {
    puVar5 = &DAT_006c0ca0;
    iVar3 = -1;
    uVar2 = 0x50;
    do {
      iVar3 = iVar3 * 0x21 + uVar2;
      pbVar1 = puVar5 + 1;
      uVar2 = (uint)*pbVar1;
      puVar5 = puVar5 + 1;
    } while (*pbVar1 != 0);
    if (unaff_ESI != iVar3) {
      pcVar4 = "SPARCO";
      iVar3 = -1;
      uVar2 = 0x53;
      do {
        iVar3 = iVar3 * 0x21 + uVar2;
        pbVar1 = (byte *)(pcVar4 + 1);
        uVar2 = (uint)*pbVar1;
        pcVar4 = pcVar4 + 1;
      } while (*pbVar1 != 0);
      if (unaff_ESI != iVar3) {
        iVar3 = FUN_00567c70();
        if (unaff_ESI != iVar3) {
          iVar3 = FUN_00567c70();
          if (unaff_ESI != iVar3) {
            iVar3 = FUN_00567c70();
            if (unaff_ESI != iVar3) {
              iVar3 = FUN_00567c70();
              if (unaff_ESI != iVar3) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

