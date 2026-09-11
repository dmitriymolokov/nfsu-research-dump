/* Decompiled from Speed.exe @ 005a3850 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005a3850(byte param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  char cVar5;
  int unaff_ESI;
  int unaff_EDI;
  
  cVar5 = '\0';
  puVar4 = &DAT_006b8150;
  uVar2 = 0x54;
  iVar3 = -1;
  do {
    iVar3 = iVar3 * 0x21 + uVar2;
    pbVar1 = puVar4 + 1;
    uVar2 = (uint)*pbVar1;
    puVar4 = puVar4 + 1;
  } while (*pbVar1 != 0);
  if (unaff_ESI != iVar3) {
    puVar4 = &DAT_006b8148;
    iVar3 = -1;
    uVar2 = 0x54;
    do {
      iVar3 = iVar3 * 0x21 + uVar2;
      pbVar1 = puVar4 + 1;
      uVar2 = (uint)*pbVar1;
      puVar4 = puVar4 + 1;
    } while (*pbVar1 != 0);
    if (unaff_ESI != iVar3) {
      puVar4 = &DAT_006b8140;
      iVar3 = -1;
      uVar2 = 0x54;
      do {
        iVar3 = iVar3 * 0x21 + uVar2;
        pbVar1 = puVar4 + 1;
        uVar2 = (uint)*pbVar1;
        puVar4 = puVar4 + 1;
      } while (*pbVar1 != 0);
      if (unaff_ESI != iVar3) {
        iVar3 = FUN_00567c70();
        if (((unaff_ESI == iVar3) || (iVar3 = FUN_00567c70(), unaff_ESI == iVar3)) ||
           (iVar3 = FUN_00567c70(), unaff_ESI == iVar3)) {
          cVar5 = '\x01';
        }
        else {
          iVar3 = FUN_00567c70();
          if (((unaff_ESI == iVar3) || (iVar3 = FUN_00567c70(), unaff_ESI == iVar3)) ||
             (iVar3 = FUN_00567c70(), unaff_ESI == iVar3)) {
            cVar5 = '\x02';
          }
          else {
            iVar3 = FUN_00567c70();
            if ((unaff_ESI == iVar3) || (iVar3 = FUN_00567c70(), unaff_ESI == iVar3)) {
              cVar5 = '\x03';
            }
            else {
              iVar3 = FUN_00567c70();
              if ((unaff_ESI == iVar3) ||
                 ((iVar3 = FUN_00567c70(), unaff_ESI == iVar3 ||
                  (iVar3 = FUN_00567c70(), unaff_ESI == iVar3)))) {
                cVar5 = '\x04';
              }
              else {
                iVar3 = FUN_00567c70();
                if ((unaff_ESI == iVar3) ||
                   ((iVar3 = FUN_00567c70(), unaff_ESI == iVar3 ||
                    (iVar3 = FUN_00567c70(), unaff_ESI == iVar3)))) {
                  cVar5 = '\x05';
                }
                else {
                  iVar3 = FUN_00567c70();
                  if ((unaff_ESI == iVar3) ||
                     ((iVar3 = FUN_00567c70(), unaff_ESI == iVar3 ||
                      (iVar3 = FUN_00567c70(), unaff_ESI == iVar3)))) {
                    cVar5 = '\x06';
                  }
                  else {
                    iVar3 = FUN_00567c70();
                    if ((unaff_ESI == iVar3) ||
                       ((iVar3 = FUN_00567c70(), unaff_ESI == iVar3 ||
                        (iVar3 = FUN_00567c70(), unaff_ESI == iVar3)))) {
                      cVar5 = '\a';
                    }
                    else {
                      iVar3 = FUN_00567c70();
                      if ((unaff_ESI == iVar3) ||
                         ((iVar3 = FUN_00567c70(), unaff_ESI == iVar3 ||
                          (iVar3 = FUN_00567c70(), unaff_ESI == iVar3)))) {
                        cVar5 = '\b';
                      }
                      else {
                        iVar3 = FUN_00567c70();
                        if ((unaff_ESI == iVar3) ||
                           ((iVar3 = FUN_00567c70(), unaff_ESI == iVar3 ||
                            (iVar3 = FUN_00567c70(), unaff_ESI == iVar3)))) {
                          cVar5 = '\t';
                        }
                        else {
                          iVar3 = FUN_00567c70();
                          if (unaff_ESI != iVar3) {
                            iVar3 = FUN_00567c70();
                            if (((unaff_ESI == iVar3) ||
                                (iVar3 = FUN_00567c70(), unaff_ESI == iVar3)) ||
                               (iVar3 = FUN_00567c70(), unaff_ESI == iVar3)) {
                              cVar5 = '\v';
                            }
                            else {
                              iVar3 = FUN_00567c70();
                              if (((unaff_ESI == iVar3) ||
                                  (iVar3 = FUN_00567c70(), unaff_ESI == iVar3)) ||
                                 (iVar3 = FUN_00567c70(), unaff_ESI == iVar3)) {
                                cVar5 = '\f';
                              }
                              else {
                                iVar3 = FUN_00567c70();
                                if (((unaff_ESI == iVar3) ||
                                    (iVar3 = FUN_00567c70(), unaff_ESI == iVar3)) ||
                                   (iVar3 = FUN_00567c70(), unaff_ESI == iVar3)) {
                                  cVar5 = '\r';
                                }
                                else {
                                  iVar3 = FUN_00567c70();
                                  if (((unaff_ESI != iVar3) &&
                                      (iVar3 = FUN_00567c70(), unaff_ESI != iVar3)) &&
                                     (iVar3 = FUN_00567c70(), unaff_ESI != iVar3))
                                  goto LAB_005a3aab;
                                  cVar5 = '\x0e';
                                }
                              }
                            }
                            *(uint *)(unaff_EDI + 0xc) =
                                 *(uint *)(unaff_EDI + 0xc) |
                                 1 << ((cVar5 + -0xb) * '\x03' + param_1 & 0x1f);
                            return;
                          }
                          cVar5 = '\n';
                          if (1 < param_1) {
                            return;
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
        goto LAB_005a3aab;
      }
    }
  }
  cVar5 = '\0';
LAB_005a3aab:
  *(uint *)(unaff_EDI + 8) = *(uint *)(unaff_EDI + 8) | 1 << (cVar5 * '\x03' + param_1 & 0x1f);
  return;
}

