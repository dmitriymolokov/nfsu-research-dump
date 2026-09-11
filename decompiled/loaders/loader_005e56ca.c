/* spd-match: far pct=4.89 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/C2440_int_ptr_casts/batches/20260724T141741Z_w0_tp1 */
#include "ghidra_compat.h"

#ifndef ZEXT48
#define ZEXT48(x) ((unsigned __int64)(unsigned int)(x))
#endif

extern int DAT_006a1274;
extern unsigned char *DAT_006a1278;
extern unsigned char *DAT_006a28c8;
extern unsigned char *DAT_006a2910;
extern int DAT_006a3280;
extern int DAT_006a3284;
extern int DAT_006a3288;
extern int DAT_006a328c;
extern int DAT_006a3290;
extern int DAT_006a3294;
extern int DAT_006a32a8;
extern int DAT_006a3318;
extern int DAT_006a3324;
extern int DAT_006a332c;
extern int DAT_006a3330;
extern int DAT_006a3334;
extern int DAT_006a3338;
extern int DAT_006a333c;
extern int DAT_006a3340;
extern int DAT_006a3350;
extern int DAT_006c7acc;
extern void *PTR_DAT_006a1270;
extern void LAB_005e57ba(...);
extern void LAB_005e57bf(...);
extern void LAB_005e5b74(...);
extern void LAB_005e5bb1(...);
extern void LAB_005e5d21(...);
extern void LAB_005e5d69(...);
extern void LAB_005e5fb8(...);
extern void LAB_005e5ff0(...);
extern void LAB_005e6029(...);
extern void LAB_005e6030(...);
extern void LAB_005e6037(...);

struct ThisCallBox {
  uint FUN_005e56ca(byte *param_2);
};
uint ThisCallBox::FUN_005e56ca(byte *param_2) {
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  byte *pbVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  byte *local_20;
  byte local_10 [16];
  
  local_20 = *(byte **)((int)param_2 + 8);
  *(undefined4 *)(((int)this) + 0x54) = 0;
  local_50 = 0x10d;
  local_44 = 0;
  local_4c = 0;
  local_48 = 0;
  bVar16 = true;
  bVar18 = false;
  bVar1 = false;
  bVar2 = false;
  bVar19 = false;
  bVar4 = false;
  bVar5 = false;
  bVar20 = false;
  bVar3 = false;
  if (*local_20 == 0) {
LAB_005e6037:
    *(undefined4 *)(((int)this) + 0x54) = 0;
    *(int *)(((int)this) + 0x40) = local_44;
    *(uint *)(((int)this) + 0x44) = local_4c;
    *(uint *)(((int)this) + 0x48) = local_48;
  }
  else {
    do {
      for (param_2 = local_20; (*param_2 != 0 && (*param_2 != 0x5f)); param_2 = param_2 + 1) {
      }
      uVar8 = (int)param_2 - (int)local_20;
      if (0xf < uVar8) goto LAB_005e6030;
      pbVar9 = local_10;
      for (uVar11 = uVar8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pbVar9 = *(undefined4 *)local_20;
        local_20 = local_20 + 4;
        pbVar9 = pbVar9 + 4;
      }
      iVar14 = 3;
      for (uVar11 = uVar8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar9 = *local_20;
        local_20 = local_20 + 1;
        pbVar9 = pbVar9 + 1;
      }
      local_10[uVar8] = 0;
      if (*param_2 != 0) {
        param_2 = param_2 + 1;
      }
      if (bVar16) {
        iVar14 = 0;
        uVar8 = 0;
        do {
          pbVar13 = *(byte **)((int)&PTR_DAT_006a1270 + uVar8);
          pbVar9 = local_10;
          do {
            bVar7 = *pbVar9;
            bVar16 = bVar7 < *pbVar13;
            if (bVar7 != *pbVar13) {
LAB_005e57ba:
              iVar10 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_005e57bf;
            }
            if (bVar7 == 0) break;
            bVar7 = pbVar9[1];
            bVar16 = bVar7 < pbVar13[1];
            if (bVar7 != pbVar13[1]) goto LAB_005e57ba;
            pbVar9 = pbVar9 + 2;
            pbVar13 = pbVar13 + 2;
          } while (bVar7 != 0);
          iVar10 = 0;
LAB_005e57bf:
          if (iVar10 == 0) break;
          uVar8 = uVar8 + 0x44;
          iVar14 = iVar14 + 1;
        } while (uVar8 < 0x1650);
        if (iVar14 == 0x54) goto LAB_005e6030;
        iVar10 = *(int *)(((int)this) + 0x38);
        uVar8 = *(uint *)(&DAT_006a1278 + (iVar14 * 0x11 + iVar10) * 4);
        if (uVar8 < 0xfffffffb) {
          if (uVar8 == 0xfffffffa) {
            local_50 = 0x10c;
          }
          else if (uVar8 == 0) {
            local_50 = 0x102;
          }
          else if (uVar8 == 1) {
            local_50 = 0x103;
          }
          else if (uVar8 == 2) {
            local_50 = 0x104;
          }
          else if (uVar8 == 3) {
            local_50 = 0x105;
          }
          else if (uVar8 == 4) {
            local_50 = 0x106;
          }
          else if (uVar8 == 5) {
            local_50 = 0x107;
          }
        }
        else if (uVar8 == 0xfffffffb) {
          local_50 = 0x10b;
        }
        else if (uVar8 == 0xfffffffc) {
          local_50 = 0x10a;
        }
        else if (uVar8 == 0xfffffffd) {
          local_50 = 0x108;
        }
        else if (uVar8 == 0xfffffffe) {
          local_50 = 0x109;
        }
        else if (uVar8 == 0xffffffff) {
          *(undefined4 *)(((int)this) + 0x54) = 0x7e7;
          goto LAB_005e6030;
        }
        bVar16 = false;
        local_44 = (&DAT_006a1274)[iVar14 * 0x11];
        if ((((5 < iVar10) && (iVar10 < 10)) && (0x102 < local_50)) && (local_50 < 0x108)) {
          bVar18 = true;
        }
        if ((((3 < iVar10) && (iVar10 < 6)) || ((5 < iVar10 && (iVar10 < 0xf)))) &&
           ((0x102 < local_50 && (local_50 < 0x108)))) {
          bVar1 = true;
        }
        if (((0xc < iVar10) && (iVar10 < 0xf)) &&
           ((local_44 == 0x5b || (((local_44 == 0x5c || (local_44 == 0x1f)) || (local_44 == 0x42))))
           )) {
          bVar2 = true;
        }
        if (((9 < iVar10) && (iVar10 < 0xf)) && ((0x102 < local_50 && (local_50 < 0x108)))) {
          bVar3 = true;
        }
        if ((((3 < iVar10) && (iVar10 < 6)) || ((9 < iVar10 && (iVar10 < 0xf)))) &&
           (local_44 == 0x1f)) {
          bVar19 = true;
        }
        if (((0xc < iVar10) && (iVar10 < 0xf)) && (local_44 == 0x1f)) {
          bVar4 = true;
        }
        if (((-1 < iVar10) && (iVar10 < 6)) && (local_44 == 0x1f)) {
          bVar5 = true;
        }
        if (((local_44 == 0x28) || (local_44 == 0x2c)) || (local_44 == 0x5e)) {
          bVar20 = true;
        }
        *(undefined4 *)(((int)this) + 0x54) = 0x7e8;
      }
      else {
        if (bVar1) {
          iVar10 = 4;
          bVar17 = true;
          pbVar9 = local_10;
          pbVar13 = (unsigned char *)(unsigned int)(&DAT_006a3350);
          do {
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            bVar17 = *pbVar9 == *pbVar13;
            pbVar9 = pbVar9 + 1;
            pbVar13 = pbVar13 + 1;
          } while (bVar17);
          if (bVar17) {
            local_4c = local_4c | 0x100000;
            bVar18 = false;
            bVar1 = false;
            goto LAB_005e5fb8;
          }
        }
        if (bVar2) {
          iVar10 = 9;
          bVar17 = true;
          pbVar9 = local_10;
          pbVar13 = (byte *)"centroid";
          do {
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            bVar17 = *pbVar9 == *pbVar13;
            pbVar9 = pbVar9 + 1;
            pbVar13 = pbVar13 + 1;
          } while (bVar17);
          if (bVar17) {
            local_4c = local_4c | 0x400000;
            bVar2 = false;
            goto LAB_005e5fb8;
          }
        }
        if (bVar18) {
          bVar18 = true;
          iVar10 = iVar14;
          pbVar9 = local_10;
          pbVar13 = (unsigned char *)(unsigned int)(&DAT_006a3340);
          do {
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            bVar18 = *pbVar9 == *pbVar13;
            pbVar9 = pbVar9 + 1;
            pbVar13 = pbVar13 + 1;
          } while (bVar18);
          if (bVar18) {
            local_4c = 0x3000000;
          }
          else {
            bVar18 = true;
            iVar10 = iVar14;
            pbVar9 = local_10;
            pbVar13 = (unsigned char *)(unsigned int)(&DAT_006a333c);
            do {
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              bVar18 = *pbVar9 == *pbVar13;
              pbVar9 = pbVar9 + 1;
              pbVar13 = pbVar13 + 1;
            } while (bVar18);
            if (bVar18) {
              local_4c = 0x2000000;
            }
            else {
              bVar18 = true;
              iVar10 = iVar14;
              pbVar9 = local_10;
              pbVar13 = (unsigned char *)(unsigned int)(&DAT_006a3338);
              do {
                if (iVar10 == 0) break;
                iVar10 = iVar10 + -1;
                bVar18 = *pbVar9 == *pbVar13;
                pbVar9 = pbVar9 + 1;
                pbVar13 = pbVar13 + 1;
              } while (bVar18);
              if (bVar18) {
                local_4c = 0x1000000;
              }
              else {
                bVar18 = true;
                iVar10 = iVar14;
                pbVar9 = local_10;
                pbVar13 = (unsigned char *)(unsigned int)(&DAT_006a3334);
                do {
                  if (iVar10 == 0) break;
                  iVar10 = iVar10 + -1;
                  bVar18 = *pbVar9 == *pbVar13;
                  pbVar9 = pbVar9 + 1;
                  pbVar13 = pbVar13 + 1;
                } while (bVar18);
                if (bVar18) {
                  local_4c = 0xf000000;
                }
                else {
                  bVar18 = true;
                  iVar10 = iVar14;
                  pbVar9 = local_10;
                  pbVar13 = (unsigned char *)(unsigned int)(&DAT_006a3330);
                  do {
                    if (iVar10 == 0) break;
                    iVar10 = iVar10 + -1;
                    bVar18 = *pbVar9 == *pbVar13;
                    pbVar9 = pbVar9 + 1;
                    pbVar13 = pbVar13 + 1;
                  } while (bVar18);
                  if (bVar18) {
                    local_4c = 0xe000000;
                  }
                  else {
                    bVar18 = true;
                    pbVar9 = local_10;
                    pbVar13 = (unsigned char *)(unsigned int)(&DAT_006a332c);
                    do {
                      if (iVar14 == 0) break;
                      iVar14 = iVar14 + -1;
                      bVar18 = *pbVar9 == *pbVar13;
                      pbVar9 = pbVar9 + 1;
                      pbVar13 = pbVar13 + 1;
                    } while (bVar18);
                    if (!bVar18) goto LAB_005e6030;
                    local_4c = 0xd000000;
                  }
                }
              }
            }
          }
          bVar18 = false;
        }
        else {
          if (bVar19) {
            uVar8 = 0;
            bVar19 = true;
            iVar10 = iVar14;
            pbVar9 = local_10;
            pbVar13 = (unsigned char *)(unsigned int)(&DAT_006c7acc);
            do {
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              bVar19 = *pbVar9 == *pbVar13;
              pbVar9 = pbVar9 + 1;
              pbVar13 = pbVar13 + 1;
            } while (bVar19);
            if (bVar19) {
              uVar8 = 0x10000000;
            }
            else {
              iVar10 = 5;
              bVar19 = true;
              pbVar9 = local_10;
              pbVar13 = (unsigned char *)(unsigned int)(&DAT_006a3324);
              do {
                if (iVar10 == 0) break;
                iVar10 = iVar10 + -1;
                bVar19 = *pbVar9 == *pbVar13;
                pbVar9 = pbVar9 + 1;
                pbVar13 = pbVar13 + 1;
              } while (bVar19);
              if (bVar19) {
                uVar8 = 0x18000000;
              }
              else {
                iVar10 = 7;
                bVar19 = true;
                pbVar9 = local_10;
                pbVar13 = (byte *)"volume";
                do {
                  if (iVar10 == 0) break;
                  iVar10 = iVar10 + -1;
                  bVar19 = *pbVar9 == *pbVar13;
                  pbVar9 = pbVar9 + 1;
                  pbVar13 = pbVar13 + 1;
                } while (bVar19);
                if (bVar19) {
                  uVar8 = 0x20000000;
                }
              }
            }
            local_48 = local_48 | uVar8;
            bVar19 = false;
            if (uVar8 != 0) {
              bVar4 = false;
              bVar5 = false;
              goto LAB_005e5fb8;
            }
          }
          if (bVar3) {
            bVar17 = true;
            pbVar9 = local_10;
            pbVar13 = (unsigned char *)(unsigned int)(&DAT_006a3318);
            do {
              if (iVar14 == 0) break;
              iVar14 = iVar14 + -1;
              bVar17 = *pbVar9 == *pbVar13;
              pbVar9 = pbVar9 + 1;
              pbVar13 = pbVar13 + 1;
            } while (bVar17);
            if (bVar17) {
              local_4c = local_4c | 0x200000;
              bVar3 = false;
              goto LAB_005e5fb8;
            }
          }
          if (bVar4) {
            pbVar9 = local_10;
            if (local_10[0] == 0) {
LAB_005e5b74:
              uVar8 = 0;
            }
            else {
              do {
                iVar14 = _isalpha((int)(char)*pbVar9);
                if (iVar14 == 0) break;
                pbVar9 = pbVar9 + 1;
              } while (*pbVar9 != 0);
              if (*pbVar9 == 0) goto LAB_005e5b74;
              uVar8 = _atol((char *)pbVar9);
            }
            if (uVar8 < 0x10) {
              bVar7 = *pbVar9;
              pbVar13 = pbVar9;
              if (bVar7 != 0) {
                *pbVar9 = 0;
                pbVar13 = pbVar9 + 1;
              }
              bVar6 = *pbVar13;
              if (bVar6 == 0) {
LAB_005e5bb1:
                iVar14 = 9;
                uVar11 = 0;
                bVar17 = true;
                pbVar13 = local_10;
                pbVar15 = (byte *)"position";
                do {
                  if (iVar14 == 0) break;
                  iVar14 = iVar14 + -1;
                  bVar17 = *pbVar13 == *pbVar15;
                  pbVar13 = pbVar13 + 1;
                  pbVar15 = pbVar15 + 1;
                } while (bVar17);
                if (bVar17) {
                  if (uVar8 == 0) goto LAB_005e5d21;
                }
                else {
                  iVar14 = 0xc;
                  bVar17 = true;
                  pbVar13 = local_10;
                  pbVar15 = (byte *)"blendweight";
                  do {
                    if (iVar14 == 0) break;
                    iVar14 = iVar14 + -1;
                    bVar17 = *pbVar13 == *pbVar15;
                    pbVar13 = pbVar13 + 1;
                    pbVar15 = pbVar15 + 1;
                  } while (bVar17);
                  if (bVar17) {
                    uVar11 = 1;
                  }
                  else {
                    iVar14 = 0xd;
                    bVar17 = true;
                    pbVar13 = local_10;
                    pbVar15 = (byte *)"blendindices";
                    do {
                      if (iVar14 == 0) break;
                      iVar14 = iVar14 + -1;
                      bVar17 = *pbVar13 == *pbVar15;
                      pbVar13 = pbVar13 + 1;
                      pbVar15 = pbVar15 + 1;
                    } while (bVar17);
                    if (bVar17) {
                      uVar11 = 2;
                    }
                    else {
                      iVar14 = 7;
                      bVar17 = true;
                      pbVar13 = local_10;
                      pbVar15 = (byte *)"normal";
                      do {
                        if (iVar14 == 0) break;
                        iVar14 = iVar14 + -1;
                        bVar17 = *pbVar13 == *pbVar15;
                        pbVar13 = pbVar13 + 1;
                        pbVar15 = pbVar15 + 1;
                      } while (bVar17);
                      if (bVar17) {
                        uVar11 = 3;
                      }
                      else {
                        uVar11 = 6;
                        bVar17 = true;
                        uVar12 = uVar11;
                        pbVar13 = local_10;
                        pbVar15 = (byte *)"psize";
                        do {
                          if (uVar12 == 0) break;
                          uVar12 = uVar12 - 1;
                          bVar17 = *pbVar13 == *pbVar15;
                          pbVar13 = pbVar13 + 1;
                          pbVar15 = pbVar15 + 1;
                        } while (bVar17);
                        if (bVar17) {
                          uVar11 = 4;
                        }
                        else {
                          iVar14 = 9;
                          bVar17 = true;
                          pbVar13 = local_10;
                          pbVar15 = (byte *)"texcoord";
                          do {
                            if (iVar14 == 0) break;
                            iVar14 = iVar14 + -1;
                            bVar17 = *pbVar13 == *pbVar15;
                            pbVar13 = pbVar13 + 1;
                            pbVar15 = pbVar15 + 1;
                          } while (bVar17);
                          if (bVar17) {
                            uVar11 = 5;
                          }
                          else {
                            iVar14 = 8;
                            bVar17 = true;
                            pbVar13 = local_10;
                            pbVar15 = (byte *)"tangent";
                            do {
                              if (iVar14 == 0) break;
                              iVar14 = iVar14 + -1;
                              bVar17 = *pbVar13 == *pbVar15;
                              pbVar13 = pbVar13 + 1;
                              pbVar15 = pbVar15 + 1;
                            } while (bVar17);
                            if (!bVar17) {
                              iVar14 = 9;
                              bVar17 = true;
                              pbVar13 = local_10;
                              pbVar15 = (byte *)"binormal";
                              do {
                                if (iVar14 == 0) break;
                                iVar14 = iVar14 + -1;
                                bVar17 = *pbVar13 == *pbVar15;
                                pbVar13 = pbVar13 + 1;
                                pbVar15 = pbVar15 + 1;
                              } while (bVar17);
                              if (bVar17) {
                                uVar11 = 7;
                              }
                              else {
                                iVar14 = 0xb;
                                bVar17 = true;
                                pbVar13 = local_10;
                                pbVar15 = (byte *)"tessfactor";
                                do {
                                  if (iVar14 == 0) break;
                                  iVar14 = iVar14 + -1;
                                  bVar17 = *pbVar13 == *pbVar15;
                                  pbVar13 = pbVar13 + 1;
                                  pbVar15 = pbVar15 + 1;
                                } while (bVar17);
                                if (bVar17) {
                                  uVar11 = 8;
                                }
                                else {
                                  uVar11 = 10;
                                  bVar17 = true;
                                  uVar12 = uVar11;
                                  pbVar13 = local_10;
                                  pbVar15 = (byte *)"positiont";
                                  do {
                                    if (uVar12 == 0) break;
                                    uVar12 = uVar12 - 1;
                                    bVar17 = *pbVar13 == *pbVar15;
                                    pbVar13 = pbVar13 + 1;
                                    pbVar15 = pbVar15 + 1;
                                  } while (bVar17);
                                  if (bVar17) {
                                    uVar11 = 9;
                                  }
                                  else {
                                    iVar14 = 6;
                                    bVar17 = true;
                                    pbVar13 = local_10;
                                    pbVar15 = (byte *)"color";
                                    do {
                                      if (iVar14 == 0) break;
                                      iVar14 = iVar14 + -1;
                                      bVar17 = *pbVar13 == *pbVar15;
                                      pbVar13 = pbVar13 + 1;
                                      pbVar15 = pbVar15 + 1;
                                    } while (bVar17);
                                    if (!bVar17) {
                                      iVar14 = 4;
                                      bVar17 = true;
                                      pbVar13 = local_10;
                                      pbVar15 = (unsigned char *)(unsigned int)(&DAT_006a32a8);
                                      do {
                                        if (iVar14 == 0) break;
                                        iVar14 = iVar14 + -1;
                                        bVar17 = *pbVar13 == *pbVar15;
                                        pbVar13 = pbVar13 + 1;
                                        pbVar15 = pbVar15 + 1;
                                      } while (bVar17);
                                      if (bVar17) {
                                        uVar11 = 0xb;
                                      }
                                      else {
                                        iVar14 = 6;
                                        bVar17 = true;
                                        pbVar13 = local_10;
                                        pbVar15 = (byte *)"depth";
                                        do {
                                          if (iVar14 == 0) break;
                                          iVar14 = iVar14 + -1;
                                          bVar17 = *pbVar13 == *pbVar15;
                                          pbVar13 = pbVar13 + 1;
                                          pbVar15 = pbVar15 + 1;
                                        } while (bVar17);
                                        if (bVar17) {
                                          uVar11 = 0xc;
                                        }
                                        else {
                                          iVar14 = 7;
                                          bVar17 = true;
                                          pbVar13 = local_10;
                                          pbVar15 = (byte *)"sample";
                                          do {
                                            if (iVar14 == 0) break;
                                            iVar14 = iVar14 + -1;
                                            bVar17 = *pbVar13 == *pbVar15;
                                            pbVar13 = pbVar13 + 1;
                                            pbVar15 = pbVar15 + 1;
                                          } while (bVar17);
                                          if (!bVar17) goto LAB_005e5d21;
                                          uVar11 = 0xd;
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
                bVar4 = false;
                local_48 = local_48 | (uVar8 & 0xf) << 0x10 | uVar11;
                bVar19 = false;
                goto LAB_005e5fb8;
              }
              do {
                iVar14 = _isdigit((int)(char)bVar6);
                if (iVar14 == 0) break;
                pbVar13 = pbVar13 + 1;
                bVar6 = *pbVar13;
              } while (bVar6 != 0);
              if (*pbVar13 == 0) goto LAB_005e5bb1;
LAB_005e5d21:
              *pbVar9 = bVar7;
            }
          }
          iVar14 = 3;
          if (bVar5) {
            pbVar9 = local_10;
            if (local_10[0] == 0) {
LAB_005e5d69:
              uVar8 = 0;
            }
            else {
              do {
                iVar14 = _isalpha((int)(char)*pbVar9);
                if (iVar14 == 0) break;
                pbVar9 = pbVar9 + 1;
              } while (*pbVar9 != 0);
              if (*pbVar9 == 0) goto LAB_005e5d69;
              uVar8 = _atol((char *)pbVar9);
            }
            if (0xf < uVar8) goto LAB_005e6030;
            if (*pbVar9 != 0) {
              *pbVar9 = 0;
              pbVar9 = pbVar9 + 1;
            }
            bVar7 = *pbVar9;
            if (bVar7 != 0) {
              do {
                iVar14 = _isdigit((int)(char)bVar7);
                if (iVar14 == 0) break;
                pbVar9 = pbVar9 + 1;
                bVar7 = *pbVar9;
              } while (bVar7 != 0);
              if (*pbVar9 != 0) goto LAB_005e6030;
            }
            iVar14 = 9;
            local_48 = 0;
            bVar19 = true;
            pbVar9 = local_10;
            pbVar13 = (byte *)"position";
            do {
              if (iVar14 == 0) break;
              iVar14 = iVar14 + -1;
              bVar19 = *pbVar9 == *pbVar13;
              pbVar9 = pbVar9 + 1;
              pbVar13 = pbVar13 + 1;
            } while (bVar19);
            if (!bVar19) {
              iVar14 = 0xc;
              bVar19 = true;
              pbVar9 = local_10;
              pbVar13 = (byte *)"blendweight";
              do {
                if (iVar14 == 0) break;
                iVar14 = iVar14 + -1;
                bVar19 = *pbVar9 == *pbVar13;
                pbVar9 = pbVar9 + 1;
                pbVar13 = pbVar13 + 1;
              } while (bVar19);
              if (bVar19) {
                local_48 = 1;
              }
              else {
                iVar14 = 0xd;
                bVar19 = true;
                pbVar9 = local_10;
                pbVar13 = (byte *)"blendindices";
                do {
                  if (iVar14 == 0) break;
                  iVar14 = iVar14 + -1;
                  bVar19 = *pbVar9 == *pbVar13;
                  pbVar9 = pbVar9 + 1;
                  pbVar13 = pbVar13 + 1;
                } while (bVar19);
                if (bVar19) {
                  local_48 = 2;
                }
                else {
                  iVar14 = 7;
                  bVar19 = true;
                  pbVar9 = local_10;
                  pbVar13 = (byte *)"normal";
                  do {
                    if (iVar14 == 0) break;
                    iVar14 = iVar14 + -1;
                    bVar19 = *pbVar9 == *pbVar13;
                    pbVar9 = pbVar9 + 1;
                    pbVar13 = pbVar13 + 1;
                  } while (bVar19);
                  if (bVar19) {
                    local_48 = 3;
                  }
                  else {
                    local_48 = 6;
                    bVar19 = true;
                    uVar11 = (unsigned int)(local_48);
                    pbVar9 = local_10;
                    pbVar13 = (byte *)"psize";
                    do {
                      if (uVar11 == 0) break;
                      uVar11 = uVar11 - 1;
                      bVar19 = *pbVar9 == *pbVar13;
                      pbVar9 = pbVar9 + 1;
                      pbVar13 = pbVar13 + 1;
                    } while (bVar19);
                    if (bVar19) {
                      local_48 = 4;
                    }
                    else {
                      iVar14 = 9;
                      bVar19 = true;
                      pbVar9 = local_10;
                      pbVar13 = (byte *)"texcoord";
                      do {
                        if (iVar14 == 0) break;
                        iVar14 = iVar14 + -1;
                        bVar19 = *pbVar9 == *pbVar13;
                        pbVar9 = pbVar9 + 1;
                        pbVar13 = pbVar13 + 1;
                      } while (bVar19);
                      if (bVar19) {
                        local_48 = 5;
                      }
                      else {
                        iVar14 = 8;
                        bVar19 = true;
                        pbVar9 = local_10;
                        pbVar13 = (byte *)"tangent";
                        do {
                          if (iVar14 == 0) break;
                          iVar14 = iVar14 + -1;
                          bVar19 = *pbVar9 == *pbVar13;
                          pbVar9 = pbVar9 + 1;
                          pbVar13 = pbVar13 + 1;
                        } while (bVar19);
                        if (!bVar19) {
                          iVar14 = 9;
                          bVar19 = true;
                          pbVar9 = local_10;
                          pbVar13 = (byte *)"binormal";
                          do {
                            if (iVar14 == 0) break;
                            iVar14 = iVar14 + -1;
                            bVar19 = *pbVar9 == *pbVar13;
                            pbVar9 = pbVar9 + 1;
                            pbVar13 = pbVar13 + 1;
                          } while (bVar19);
                          if (bVar19) {
                            local_48 = 7;
                          }
                          else {
                            iVar14 = 0xb;
                            bVar19 = true;
                            pbVar9 = local_10;
                            pbVar13 = (byte *)"tessfactor";
                            do {
                              if (iVar14 == 0) break;
                              iVar14 = iVar14 + -1;
                              bVar19 = *pbVar9 == *pbVar13;
                              pbVar9 = pbVar9 + 1;
                              pbVar13 = pbVar13 + 1;
                            } while (bVar19);
                            if (bVar19) {
                              local_48 = 8;
                            }
                            else {
                              local_48 = 10;
                              bVar19 = true;
                              uVar11 = (unsigned int)(local_48);
                              pbVar9 = local_10;
                              pbVar13 = (byte *)"positiont";
                              do {
                                if (uVar11 == 0) break;
                                uVar11 = uVar11 - 1;
                                bVar19 = *pbVar9 == *pbVar13;
                                pbVar9 = pbVar9 + 1;
                                pbVar13 = pbVar13 + 1;
                              } while (bVar19);
                              if (bVar19) {
                                local_48 = 9;
                              }
                              else {
                                iVar14 = 6;
                                bVar19 = true;
                                pbVar9 = local_10;
                                pbVar13 = (byte *)"color";
                                do {
                                  if (iVar14 == 0) break;
                                  iVar14 = iVar14 + -1;
                                  bVar19 = *pbVar9 == *pbVar13;
                                  pbVar9 = pbVar9 + 1;
                                  pbVar13 = pbVar13 + 1;
                                } while (bVar19);
                                if (!bVar19) {
                                  iVar14 = 4;
                                  bVar19 = true;
                                  pbVar9 = local_10;
                                  pbVar13 = (unsigned char *)(unsigned int)(&DAT_006a32a8);
                                  do {
                                    if (iVar14 == 0) break;
                                    iVar14 = iVar14 + -1;
                                    bVar19 = *pbVar9 == *pbVar13;
                                    pbVar9 = pbVar9 + 1;
                                    pbVar13 = pbVar13 + 1;
                                  } while (bVar19);
                                  if (bVar19) {
                                    local_48 = 0xb;
                                  }
                                  else {
                                    iVar14 = 6;
                                    bVar19 = true;
                                    pbVar9 = local_10;
                                    pbVar13 = (byte *)"depth";
                                    do {
                                      if (iVar14 == 0) break;
                                      iVar14 = iVar14 + -1;
                                      bVar19 = *pbVar9 == *pbVar13;
                                      pbVar9 = pbVar9 + 1;
                                      pbVar13 = pbVar13 + 1;
                                    } while (bVar19);
                                    if (bVar19) {
                                      local_48 = 0xc;
                                    }
                                    else {
                                      iVar14 = 7;
                                      bVar19 = true;
                                      pbVar9 = local_10;
                                      pbVar13 = (byte *)"sample";
                                      do {
                                        if (iVar14 == 0) break;
                                        iVar14 = iVar14 + -1;
                                        bVar19 = *pbVar9 == *pbVar13;
                                        pbVar9 = pbVar9 + 1;
                                        pbVar13 = pbVar13 + 1;
                                      } while (bVar19);
                                      if (!bVar19) goto LAB_005e6030;
                                      local_48 = 0xd;
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
            bVar5 = false;
            local_48 = (uVar8 & 0xf) << 0x10 | local_48;
            bVar19 = false;
          }
          else {
            if (!bVar20) goto LAB_005e6030;
            bVar20 = true;
            iVar10 = iVar14;
            pbVar9 = local_10;
            pbVar13 = (unsigned char *)(unsigned int)(&DAT_006a3294);
            do {
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              bVar20 = *pbVar9 == *pbVar13;
              pbVar9 = pbVar9 + 1;
              pbVar13 = pbVar13 + 1;
            } while (bVar20);
            if (bVar20) {
              local_48 = 1;
            }
            else {
              bVar20 = true;
              iVar10 = iVar14;
              pbVar9 = local_10;
              pbVar13 = (unsigned char *)(unsigned int)(&DAT_006a3290);
              do {
                if (iVar10 == 0) break;
                iVar10 = iVar10 + -1;
                bVar20 = *pbVar9 == *pbVar13;
                pbVar9 = pbVar9 + 1;
                pbVar13 = pbVar13 + 1;
              } while (bVar20);
              if (bVar20) {
                local_48 = 2;
              }
              else {
                bVar20 = true;
                iVar10 = iVar14;
                pbVar9 = local_10;
                pbVar13 = (unsigned char *)(unsigned int)(&DAT_006a328c);
                do {
                  if (iVar10 == 0) break;
                  iVar10 = iVar10 + -1;
                  bVar20 = *pbVar9 == *pbVar13;
                  pbVar9 = pbVar9 + 1;
                  pbVar13 = pbVar13 + 1;
                } while (bVar20);
                if (bVar20) {
                  local_48 = 3;
                }
                else {
                  bVar20 = true;
                  iVar10 = iVar14;
                  pbVar9 = local_10;
                  pbVar13 = (unsigned char *)(unsigned int)(&DAT_006a3288);
                  do {
                    if (iVar10 == 0) break;
                    iVar10 = iVar10 + -1;
                    bVar20 = *pbVar9 == *pbVar13;
                    pbVar9 = pbVar9 + 1;
                    pbVar13 = pbVar13 + 1;
                  } while (bVar20);
                  if (bVar20) {
                    local_48 = 4;
                  }
                  else {
                    bVar20 = true;
                    iVar10 = iVar14;
                    pbVar9 = local_10;
                    pbVar13 = (unsigned char *)(unsigned int)(&DAT_006a3284);
                    do {
                      if (iVar10 == 0) break;
                      iVar10 = iVar10 + -1;
                      bVar20 = *pbVar9 == *pbVar13;
                      pbVar9 = pbVar9 + 1;
                      pbVar13 = pbVar13 + 1;
                    } while (bVar20);
                    if (bVar20) {
                      local_48 = 5;
                    }
                    else {
                      bVar20 = true;
                      pbVar9 = local_10;
                      pbVar13 = (unsigned char *)(unsigned int)(&DAT_006a3280);
                      do {
                        if (iVar14 == 0) break;
                        iVar14 = iVar14 + -1;
                        bVar20 = *pbVar9 == *pbVar13;
                        pbVar9 = pbVar9 + 1;
                        pbVar13 = pbVar13 + 1;
                      } while (bVar20);
                      if (!bVar20) goto LAB_005e6030;
                      local_48 = 6;
                    }
                  }
                }
              }
            }
            bVar20 = false;
          }
        }
      }
LAB_005e5fb8:
      local_20 = param_2;
    } while (*param_2 != 0);
    if (local_44 == 0x28) {
      if (bVar20) goto LAB_005e6029;
      if (*(int *)(&DAT_006a28c8 + *(int *)(((int)this) + 0x38) * 4) != -1) {
        local_44 = 0x29;
        local_50 = 0x10c;
        goto LAB_005e5ff0;
      }
    }
    else {
LAB_005e5ff0:
      if (local_44 == 0x2c) {
        if (bVar20) goto LAB_005e6029;
        if (*(int *)(&DAT_006a2910 + *(int *)(((int)this) + 0x38) * 4) == -1) goto LAB_005e6030;
        local_44 = 0x2d;
        local_50 = 0x10c;
      }
      if ((local_44 != 0x5e) || (!bVar20)) {
LAB_005e6029:
        if (!bVar5) goto LAB_005e6037;
      }
    }
LAB_005e6030:
    local_50 = 0x10d;
  }
  return local_50;
}
