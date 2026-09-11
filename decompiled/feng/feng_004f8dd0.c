/* Decompiled from Speed.exe @ 004f8dd0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f8dd0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  do {
    if (puVar1 == (undefined4 *)(param_1 + 8)) {
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 != 0) {
        pcVar5 = "Highlight";
        iVar4 = -1;
        bVar3 = 0x48;
        do {
          if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
            bVar3 = bVar3 - 0x20;
          }
          iVar4 = iVar4 * 0x21 + (uint)bVar3;
          bVar3 = pcVar5[1];
          pcVar5 = pcVar5 + 1;
        } while (bVar3 != 0);
        iVar6 = *(int *)(iVar2 + 0x4c);
        if (iVar6 != 0) {
          while (*(int *)(iVar6 + 0x30) != iVar4) {
            iVar6 = *(int *)(iVar6 + 4);
            if (iVar6 == 0) {
              return;
            }
          }
          if (iVar6 != 0) {
            if (iVar6 != *(int *)(iVar2 + 0x54)) {
              *(int *)(iVar2 + 0x54) = iVar6;
              FUN_004ff030(iVar2);
              *(undefined4 *)(*(int *)(iVar2 + 0x54) + 0x10) = 0;
            }
            *(undefined4 *)(iVar6 + 0x10) = 0;
          }
        }
      }
      return;
    }
    iVar2 = puVar1[2];
    if (iVar2 != 0) {
      pcVar5 = "Highlight";
      iVar4 = -1;
      bVar3 = 0x48;
      do {
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 - 0x20;
        }
        iVar4 = iVar4 * 0x21 + (uint)bVar3;
        bVar3 = pcVar5[1];
        pcVar5 = pcVar5 + 1;
      } while (bVar3 != 0);
      for (iVar6 = *(int *)(iVar2 + 0x4c); iVar6 != 0; iVar6 = *(int *)(iVar6 + 4)) {
        if (*(int *)(iVar6 + 0x30) == iVar4) {
          if (iVar6 != 0) {
            if (iVar6 != *(int *)(iVar2 + 0x54)) {
              *(int *)(iVar2 + 0x54) = iVar6;
              FUN_004ff030(iVar2);
              *(undefined4 *)(*(int *)(iVar2 + 0x54) + 0x10) = 0;
            }
            *(undefined4 *)(iVar6 + 0x10) = 0;
          }
          break;
        }
      }
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

