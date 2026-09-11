/* Decompiled from Speed.exe @ 004aeac0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 FUN_004aeac0(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined **ppuVar7;
  
  if (*(int *)(DAT_0073578c + 8) != 0) {
    for (iVar1 = *(int *)(*(int *)(DAT_0073578c + 8) + 0xe4); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 4)) {
      ppuVar7 = &PTR_s_MU_Garage_fng_00707020;
      do {
        pbVar5 = *ppuVar7;
        pbVar6 = *(byte **)(iVar1 + 0xc);
        do {
          bVar4 = *pbVar6;
          if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
            bVar4 = bVar4 & 0x5f;
          }
          bVar2 = *pbVar5;
          pbVar6 = pbVar6 + 1;
          if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
            bVar2 = bVar2 & 0x5f;
          }
          pbVar5 = pbVar5 + 1;
        } while (((bVar4 != 0) && (bVar2 != 0)) && (bVar4 == bVar2));
        if ((bVar4 == bVar2) &&
           ((iVar3 = FUN_004f3f90(&DAT_00746104), iVar3 == 0 || (*(int *)(iVar3 + 0x18) == 0)))) {
          return 1;
        }
        ppuVar7 = ppuVar7 + 1;
      } while ((int)ppuVar7 < 0x7070b0);
    }
  }
  return 0;
}

