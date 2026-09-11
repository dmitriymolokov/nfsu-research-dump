/* Decompiled from Speed.exe @ 004e2680 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004e2680(int param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined *puVar6;
  
  pcVar5 = "SAMANTHA";
  iVar4 = -1;
  uVar3 = 0x53;
  do {
    iVar4 = iVar4 * 0x21 + uVar3;
    pbVar1 = (byte *)(pcVar5 + 1);
    uVar3 = (uint)*pbVar1;
    pcVar5 = pcVar5 + 1;
  } while (*pbVar1 != 0);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != iVar4) {
    puVar6 = &DAT_006c3420;
    iVar4 = -1;
    uVar3 = 0x45;
    do {
      iVar4 = iVar4 * 0x21 + uVar3;
      pbVar1 = puVar6 + 1;
      uVar3 = (uint)*pbVar1;
      puVar6 = puVar6 + 1;
    } while (*pbVar1 != 0);
    if (iVar2 != iVar4) {
      pcVar5 = "JUNKMAN";
      iVar4 = -1;
      uVar3 = 0x4a;
      do {
        iVar4 = iVar4 * 0x21 + uVar3;
        pbVar1 = (byte *)(pcVar5 + 1);
        uVar3 = (uint)*pbVar1;
        pcVar5 = pcVar5 + 1;
      } while (*pbVar1 != 0);
      if (iVar2 != iVar4) {
        iVar4 = FUN_00567c70();
        if (iVar2 != iVar4) {
          iVar4 = FUN_00567c70();
          if (iVar2 != iVar4) {
            iVar4 = FUN_00567c70();
            if (iVar2 != iVar4) {
              iVar4 = FUN_00567c70();
              if (iVar2 != iVar4) {
                iVar4 = FUN_00567c70();
                if (iVar2 != iVar4) {
                  iVar4 = FUN_00567c70();
                  if (iVar2 != iVar4) {
                    iVar4 = FUN_00567c70();
                    if (iVar2 != iVar4) {
                      iVar4 = FUN_00567c70();
                      if (iVar2 != iVar4) {
                        iVar4 = FUN_00567c70();
                        if (iVar2 != iVar4) {
                          iVar4 = FUN_00567c70();
                          if (iVar2 != iVar4) {
                            iVar4 = FUN_00567c70();
                            if (iVar2 != iVar4) {
                              iVar4 = FUN_00567c70();
                              if (iVar2 != iVar4) {
                                iVar4 = FUN_00567c70();
                                if (iVar2 != iVar4) {
                                  iVar4 = FUN_00567c70();
                                  if (iVar2 != iVar4) {
                                    return 0;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

