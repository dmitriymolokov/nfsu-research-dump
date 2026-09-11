/* Decompiled from Speed.exe @ 0051b8d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_0051b8d0(int param_1,float param_2,float param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  if (param_2 < param_3) {
    if (0x4b0 < param_1) {
      pcVar5 = "MAGAZINE_TASK_1";
      iVar4 = -1;
      uVar2 = 0x4d;
      do {
        iVar4 = iVar4 * 0x21 + uVar2;
        pbVar1 = (byte *)(pcVar5 + 1);
        uVar2 = (uint)*pbVar1;
        pcVar5 = pcVar5 + 1;
      } while (*pbVar1 != 0);
      iVar3 = 0;
      do {
        if ((&DAT_00744ab0)[iVar3 * 2] == iVar4) {
          (&DAT_00762541)[*(int *)(&DAT_00744ab4 + iVar3 * 8) * 0x454] = 1;
          return;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x1b);
      DAT_00762541 = 1;
      return;
    }
    if (0x44c < param_1) {
      pcVar5 = "MAGAZINE_TASK_1";
      uVar2 = 0x4d;
      iVar4 = -1;
      do {
        iVar4 = iVar4 * 0x21 + uVar2;
        pbVar1 = (byte *)(pcVar5 + 1);
        uVar2 = (uint)*pbVar1;
        pcVar5 = pcVar5 + 1;
      } while (*pbVar1 != 0);
      iVar3 = 0;
      do {
        if ((&DAT_00744ab0)[iVar3 * 2] == iVar4) {
          (&DAT_0076323d)[*(int *)(&DAT_00744ab4 + iVar3 * 8) * 0x454] = 1;
          return;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x1b);
      DAT_0076323d = 1;
      return;
    }
    if (1000 < param_1) {
      pcVar5 = "MAGAZINE_TASK_1";
      iVar4 = -1;
      uVar2 = 0x4d;
      do {
        iVar4 = iVar4 * 0x21 + uVar2;
        pbVar1 = (byte *)(pcVar5 + 1);
        uVar2 = (uint)*pbVar1;
        pcVar5 = pcVar5 + 1;
      } while (*pbVar1 != 0);
      iVar3 = 0;
      do {
        if ((&DAT_00744ab0)[iVar3 * 2] == iVar4) {
          (&DAT_00762995)[*(int *)(&DAT_00744ab4 + iVar3 * 8) * 0x454] = 1;
          return;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x1b);
      DAT_00762995 = 1;
    }
  }
  return;
}

