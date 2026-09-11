/* Decompiled from Speed.exe @ 0051acb0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_0051acb0(void)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int unaff_ESI;
  
  pcVar4 = "MAGAZINE_TASK_16";
  iVar3 = -1;
  uVar2 = 0x4d;
  do {
    iVar3 = iVar3 * 0x21 + uVar2;
    pbVar1 = (byte *)(pcVar4 + 1);
    uVar2 = (uint)*pbVar1;
    pcVar4 = pcVar4 + 1;
  } while (*pbVar1 != 0);
  if (unaff_ESI != iVar3) {
    pcVar4 = "MAGAZINE_TASK_15";
    iVar3 = -1;
    uVar2 = 0x4d;
    do {
      iVar3 = iVar3 * 0x21 + uVar2;
      pbVar1 = (byte *)(pcVar4 + 1);
      uVar2 = (uint)*pbVar1;
      pcVar4 = pcVar4 + 1;
    } while (*pbVar1 != 0);
    if (unaff_ESI != iVar3) {
      pcVar4 = "MAGAZINE_TASK_14";
      iVar3 = -1;
      uVar2 = 0x4d;
      do {
        iVar3 = iVar3 * 0x21 + uVar2;
        pbVar1 = (byte *)(pcVar4 + 1);
        uVar2 = (uint)*pbVar1;
        pcVar4 = pcVar4 + 1;
      } while (*pbVar1 != 0);
      if (unaff_ESI != iVar3) {
        iVar3 = FUN_00567c70();
        if (unaff_ESI != iVar3) {
          return 0;
        }
      }
    }
  }
  return 1;
}

