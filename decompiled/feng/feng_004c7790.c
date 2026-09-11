/* spd-match: far pct=5.88 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_00417600();
int __cdecl FUN_004323f0();
int __cdecl FUN_004ac5a0();
int __cdecl FUN_004acce0();
int __cdecl FUN_004b0150();
int __cdecl FUN_004b0e50();
int __cdecl FUN_004b2480();
int __cdecl FUN_004b3940();
int __cdecl FUN_004c76d0();
int __cdecl FUN_004c7750();
int __cdecl FUN_004c8560();
int __cdecl FUN_004c9470();
int __cdecl FUN_004eede0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f6850();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8730();
int __cdecl FUN_004f8960();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_0051ba80();
int __cdecl FUN_0051c830();
int __cdecl FUN_0053e400();
int __cdecl FUN_00567c70();
int __cdecl FUN_0057ce10();
int __cdecl FUN_0057ea80();
int __cdecl FUN_005a0500();
extern int DAT_006b9172;
extern int DAT_00706540;
extern int DAT_00734588;
extern unsigned char *DAT_0073578c;
extern int DAT_0073ad40;
extern int DAT_00744ff8;
extern int DAT_00745000;
extern int DAT_00745720;
extern int DAT_00745e40;
extern int DAT_00746104;
extern int DAT_00748850;
extern int DAT_0075eef8;
extern int _DAT_0072cc80;
extern unsigned char *PTR_FUN_006c51a4;
extern void LAB_004c78f7(void);
extern void LAB_004c7938(void);
extern void LAB_004c79a1(void);
extern void LAB_004c79b6(void);
extern void LAB_004c7aa4(void);
extern void LAB_004c7af6(void);
extern void LAB_004c7be5(void);
extern void LAB_004c7c15(void);
extern void LAB_004c7c46(void);
extern void LAB_004c7c64(void);
extern void LAB_004c7c98(void);
extern void LAB_004c7cc5(void);
extern void LAB_004c7d45(void);
extern void LAB_004c7d75(void);
extern void LAB_004c7db5(void);
extern void LAB_004c7df5(void);
extern void LAB_004c80b2(void);
extern void LAB_004c833a(void);
extern void LAB_006891b6(void);
void *ExceptionList;

undefined4 * FUN_004c7790(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  undefined4 *puVar8;
  int iVar9;
  int ******ppppppiVar10;
  undefined4 uVar11;
  int *****pppppiVar12;
  int *****pppppiVar13;
  int *******pppppppiVar14;
  int *******pppppppiVar15;
  int ******ppppppiVar16;
  int *******pppppppiVar17;
  undefined4 *puVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  char *pcVar22;
  int *piVar23;
  int iVar24;
  int ****ppppiVar25;
  undefined1 *puVar26;
  int ******local_4c;
  int ******local_48;
  int ******local_44;
  int ******local_40;
  int ******local_3c;
  int ******local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int *local_2c;
  int *local_28;
  int ******local_24;
  int local_20;
  int ******local_1c;
  int ******local_18;
  char local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006891b6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(param_1,param_2);
  local_30 = param_1 + 0x10;
  local_8 = 0;
  *param_1 = &PTR_FUN_006c51a4;
  FUN_004f8370(local_30,"master_thumb","car_thumb");
  local_28 = param_1 + 0x1f;
  puVar8 = param_1 + 0x20;
  *puVar8 = puVar8;
  param_1[0x21] = puVar8;
  local_34 = param_1 + 0x24;
  FUN_00417600();
  *(undefined1 *)(param_1 + 0x1ec) = 1;
  *(undefined1 *)((int)param_1 + 0x8a) = 0;
  uVar6 = FUN_0051ba80();
  *(undefined1 *)((int)param_1 + 0x89) = uVar6;
  *(undefined1 *)(param_1 + 0x22) = 0;
  iVar9 = FUN_005a0500();
  local_20 = iVar9;
  local_24 = (int ******)FUN_004acce0();
  piVar23 = DAT_0073ad40;
  bVar5 = false;
  local_1c = (int ******)0x0;
  if (iVar9 == 0x11) {
    bVar5 = true;
    pcVar22 = "WHEELS";
    local_1c = (int ******)0xffffffff;
    uVar20 = 0x57;
    do {
      local_1c = (int ******)((int)local_1c * 0x21 + uVar20);
      pbVar21 = (byte *)(pcVar22 + 1);
      uVar20 = (uint)*pbVar21;
      pcVar22 = pcVar22 + 1;
    } while (*pbVar21 != 0);
  }
  local_11 = iVar9 == 0x1f;
  if ((((int *******)local_24 == (int *******)0x0) || ((int *******)local_24 == (int *******)0x1))
     || (local_12 = '\0', (int *******)local_24 == (int *******)0x5)) {
    local_12 = '\x01';
  }
  if (bVar5) {
    local_2c = (int *)FUN_0040a880();
    pppppppiVar14 = (int *******)local_1c;
    if (piVar23 == local_2c) {
LAB_004c78f7:
      ppppppiVar10 = (int ******)0x0;
    }
    else {
      do {
        ppppppiVar10 = (int ******)piVar23[3];
        ppppppiVar16 = ppppppiVar10 + piVar23[4] * 0xc;
        if ((pppppppiVar14 != (int *******)0x0) &&
           (ppppppiVar10 = (int ******)FUN_0053e400(local_1c,ppppppiVar10,4),
           pppppppiVar14 = (int *******)local_1c, ppppppiVar10 == (int ******)0x0))
        goto LAB_004c78f7;
        if (ppppppiVar10 < ppppppiVar16) {
          if ((pppppppiVar14 == (int *******)0x0) || ((int *******)ppppppiVar10[1] == pppppppiVar14)
             ) goto LAB_004c7938;
          goto LAB_004c78f7;
        }
        piVar23 = (int *)*piVar23;
      } while (piVar23 != local_2c);
      ppppppiVar10 = (int ******)0x0;
    }
  }
  else {
    pppppppiVar14 = (int *******)0x23;
    if (!(bool)local_11) {
      pppppppiVar14 = (int *******)local_24;
    }
    uVar11 = 0;
    if (pppppppiVar14 != (int *******)0x23) {
      if ((int)pppppppiVar14 * 0xc90 + DAT_00734588 == 0) {
        ppppppiVar10 = (int ******)0x0;
        goto LAB_004c7938;
      }
      uVar11 = FUN_00567c70();
    }
    ppppppiVar10 = (int ******)FUN_0057ce10(uVar11,iVar9,0,0,0xffffffff);
  }
LAB_004c7938:
  local_44 = (int ******)&local_44;
  local_40 = (int ******)&local_44;
  piVar23 = (int *)((int)local_24 * 0xc90 + DAT_00734588);
  (*(unsigned char *)&(local_8)) = 3;
  local_2c = piVar23;
  while (local_18 = ppppppiVar10, ppppppiVar10 != (int ******)0x0) {
    if (bVar5) {
      pppppiVar12 = ppppppiVar10[5];
      pppppiVar13 = pppppiVar12 + *(short *)(ppppppiVar10 + 7) * 2;
      if (pppppiVar12 != (int *****)0x0) {
        for (; pppppiVar12 < pppppiVar13; pppppiVar12 = pppppiVar12 + 2) {
          if (*pppppiVar12 == (int ****)0xce7d8db5) {
            if (pppppiVar12 != (int *****)0x0) {
              cVar7 = (char)pppppiVar12[1];
              goto LAB_004c79a1;
            }
            break;
          }
        }
      }
      cVar7 = '\0';
LAB_004c79a1:
      if (cVar7 == *(char *)((int)piVar23 + 0xdc)) goto LAB_004c79b6;
      bVar4 = false;
    }
    else {
LAB_004c79b6:
      bVar4 = true;
    }
    if ((local_20 == 0x1f) && (local_11 != '\0')) {
      if ((*(char *)((int)ppppppiVar10 + 0x12) == '\x0f') && (cVar7 = FUN_004c7750(), cVar7 != '\0')
         ) {
        pcVar22 = "CAR_THUMB";
        do {
          pcVar1 = pcVar22 + 1;
          pcVar22 = pcVar22 + 1;
        } while (*pcVar1 != '\0');
        FUN_004c8560();
        ppppppiVar10 = local_18;
        piVar23 = local_2c;
      }
LAB_004c7af6:
      if (bVar5) {
        pppppppiVar17 = (int *******)local_1c;
        iVar9 = -1;
      }
      else {
LAB_004c7aa4:
        pppppppiVar14 = (int *******)0x23;
        if (local_11 == '\0') {
          pppppppiVar14 = (int *******)local_24;
        }
        pppppppiVar17 = (int *******)0x0;
        iVar9 = local_20;
        if (pppppppiVar14 != (int *******)0x23) {
          iVar19 = (int)pppppppiVar14 * 0xc90 + DAT_00734588;
          if (iVar19 == 0) {
            pppppppiVar17 = (int *******)0x0;
          }
          else {
            pbVar21 = (byte *)(iVar19 + 0x20);
            pppppppiVar17 = (int *******)0xffffffff;
            bVar3 = *pbVar21;
            while (bVar3 != 0) {
              pppppppiVar17 = (int *******)((int)pppppppiVar17 * 0x21 + (uint)bVar3);
              pbVar2 = pbVar21 + 1;
              pbVar21 = pbVar21 + 1;
              bVar3 = *pbVar2;
            }
          }
        }
      }
      ppppppiVar10 = (int ******)FUN_0057ce10(pppppppiVar17,iVar9,0,ppppppiVar10,0xffffffff);
    }
    else {
      if ((*(char *)((int)ppppppiVar10 + 0x11) != '\x04') || (!bVar4)) goto LAB_004c7af6;
      if (bVar5) {
        pppppppiVar14 = _malloc(0xc);
        pppppppiVar14[2] = ppppppiVar10;
        *local_40 = (int *****)pppppppiVar14;
        pppppppiVar14[1] = local_40;
        *pppppppiVar14 = (int ******)&local_44;
        local_40 = (int ******)pppppppiVar14;
        goto LAB_004c7af6;
      }
      if (((local_20 != 0xb) || (local_12 == '\0')) ||
         (pppppiVar13 = (int *****)FUN_00567c70(), ppppppiVar10[3] != pppppiVar13)) {
        piVar23 = &DAT_00706540;
        do {
          if (*piVar23 == (int)*(char *)(ppppppiVar10 + 4)) break;
          piVar23 = piVar23 + 7;
        } while ((int)piVar23 < 0x7066ac);
        FUN_004c8560();
        ppppppiVar10 = local_18;
        piVar23 = local_2c;
        goto LAB_004c7aa4;
      }
      ppppppiVar10 = (int ******)FUN_004b3940(&DAT_0073ad40,ppppppiVar10,0xb,0,0xffffffff);
    }
  }
  local_4c = (int ******)&local_4c;
  local_48 = (int ******)&local_4c;
  local_3c = (int ******)&local_3c;
  local_38 = (int ******)&local_3c;
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),5);
  local_18 = (int ******)0x0;
  if (bVar5) {
    local_18 = ppppppiVar10;
    FUN_004c9470();
    pppppppiVar14 = (int *******)local_44;
    local_2c = (int *)(int)*(char *)((int)piVar23 + 0xdc);
    local_18 = (int ******)FUN_0040a880();
    pppppppiVar17 = pppppppiVar14;
    if (pppppppiVar14 != (int *******)local_18) {
      pppppppiVar15 = (int *******)FUN_0040a880();
      do {
        bVar5 = false;
        pppppppiVar17 = (int *******)local_3c;
        if ((int *******)local_3c == pppppppiVar15) {
LAB_004c7c64:
          pppppppiVar17 = _malloc(0x10);
          pppppiVar12 = pppppppiVar14[2][5];
          pppppiVar13 = pppppiVar12 + *(short *)(pppppppiVar14[2] + 7) * 2;
          if (pppppiVar12 != (int *****)0x0) {
            for (; pppppiVar12 < pppppiVar13; pppppiVar12 = pppppiVar12 + 2) {
              if (*pppppiVar12 == (int ****)0x10c98090) {
                if (pppppiVar12 != (int *****)0x0) {
                  ppppppiVar10 = (int ******)pppppiVar12[1];
                  goto LAB_004c7c98;
                }
                break;
              }
            }
          }
          ppppppiVar10 = (int ******)0x0;
LAB_004c7c98:
          pppppppiVar17[2] = ppppppiVar10;
          pppppiVar12 = pppppppiVar14[2][5];
          pppppiVar13 = pppppiVar12 + *(short *)(pppppppiVar14[2] + 7) * 2;
          if (pppppiVar12 != (int *****)0x0) {
            for (; pppppiVar12 < pppppiVar13; pppppiVar12 = pppppiVar12 + 2) {
              if (*pppppiVar12 == (int ****)0xeb0101e2) {
                if (pppppiVar12 != (int *****)0x0) {
                  cVar7 = (char)pppppiVar12[1];
                  goto LAB_004c7cc5;
                }
                break;
              }
            }
          }
          cVar7 = '\0';
LAB_004c7cc5:
          pppppppiVar17[3] = (int ******)(int)cVar7;
          *local_38 = (int *****)pppppppiVar17;
          pppppppiVar17[1] = local_38;
          *pppppppiVar17 = (int ******)&local_3c;
          local_38 = (int ******)pppppppiVar17;
        }
        else {
          do {
            ppppppiVar10 = pppppppiVar14[2];
            pppppiVar12 = ppppppiVar10[5];
            pppppiVar13 = pppppiVar12 + *(short *)(ppppppiVar10 + 7) * 2;
            if (pppppiVar12 != (int *****)0x0) {
              for (; pppppiVar12 < pppppiVar13; pppppiVar12 = pppppiVar12 + 2) {
                if (*pppppiVar12 == (int ****)0x10c98090) {
                  if (pppppiVar12 != (int *****)0x0) {
                    ppppppiVar16 = (int ******)pppppiVar12[1];
                    goto LAB_004c7be5;
                  }
                  break;
                }
              }
            }
            ppppppiVar16 = (int ******)0x0;
LAB_004c7be5:
            if (pppppppiVar17[2] == ppppppiVar16) {
              pppppiVar12 = ppppppiVar10[5];
              pppppiVar13 = pppppiVar12 + *(short *)(ppppppiVar10 + 7) * 2;
              if (pppppiVar12 != (int *****)0x0) {
                for (; pppppiVar12 < pppppiVar13; pppppiVar12 = pppppiVar12 + 2) {
                  if (*pppppiVar12 == (int ****)0xce7d8db5) {
                    if (pppppiVar12 != (int *****)0x0) {
                      cVar7 = (char)pppppiVar12[1];
                      goto LAB_004c7c15;
                    }
                    break;
                  }
                }
              }
              cVar7 = '\0';
LAB_004c7c15:
              if (local_2c == (int *)(int)cVar7) {
                pppppiVar12 = ppppppiVar10[5];
                pppppiVar13 = pppppiVar12 + *(short *)(ppppppiVar10 + 7) * 2;
                if (pppppiVar12 != (int *****)0x0) {
                  for (; pppppiVar12 < pppppiVar13; pppppiVar12 = pppppiVar12 + 2) {
                    if (*pppppiVar12 == (int ****)0xeb0101e2) {
                      if (pppppiVar12 != (int *****)0x0) {
                        cVar7 = (char)pppppiVar12[1];
                        goto LAB_004c7c46;
                      }
                      break;
                    }
                  }
                }
                cVar7 = '\0';
LAB_004c7c46:
                bVar5 = true;
                if ((int)pppppppiVar17[3] < (int)cVar7) {
                  pppppppiVar17[3] = (int ******)(int)cVar7;
                }
              }
            }
            pppppppiVar17 = (int *******)*pppppppiVar17;
          } while (pppppppiVar17 != pppppppiVar15);
          if (!bVar5) goto LAB_004c7c64;
        }
        pppppppiVar14 = (int *******)*pppppppiVar14;
        pppppppiVar17 = (int *******)local_44;
      } while (pppppppiVar14 != (int *******)local_18);
    }
    local_1c = (int ******)pppppppiVar17;
    if (pppppppiVar17 != (int *******)local_18) {
      pppppppiVar17 = (int *******)FUN_0040a880();
      pppppppiVar14 = (int *******)local_3c;
      do {
        while (local_24 = (int ******)pppppppiVar14, (int *******)local_24 != pppppppiVar17) {
          ppppppiVar10 = (int ******)local_1c[2];
          pppppiVar12 = ppppppiVar10[5];
          pppppiVar13 = pppppiVar12 + *(short *)(ppppppiVar10 + 7) * 2;
          if (pppppiVar12 != (int *****)0x0) {
            for (; pppppiVar12 < pppppiVar13; pppppiVar12 = pppppiVar12 + 2) {
              if (*pppppiVar12 == (int ****)0x10c98090) {
                if (pppppiVar12 != (int *****)0x0) {
                  ppppppiVar16 = (int ******)pppppiVar12[1];
                  goto LAB_004c7d45;
                }
                break;
              }
            }
          }
          ppppppiVar16 = (int ******)0x0;
LAB_004c7d45:
          if (ppppppiVar16 == (int ******)local_24[2]) {
            pppppiVar12 = ppppppiVar10[5];
            pppppiVar13 = pppppiVar12 + *(short *)(ppppppiVar10 + 7) * 2;
            if (pppppiVar12 != (int *****)0x0) {
              for (; pppppiVar12 < pppppiVar13; pppppiVar12 = pppppiVar12 + 2) {
                if (*pppppiVar12 == (int ****)0xeb0101e2) {
                  if (pppppiVar12 != (int *****)0x0) {
                    cVar7 = (char)pppppiVar12[1];
                    goto LAB_004c7d75;
                  }
                  break;
                }
              }
            }
            cVar7 = '\0';
LAB_004c7d75:
            if ((int ******)(int)cVar7 == (int ******)local_24[3]) {
              pppppiVar12 = ppppppiVar10[5];
              pppppiVar13 = pppppiVar12 + *(short *)(ppppppiVar10 + 7) * 2;
              if (pppppiVar12 != (int *****)0x0) {
                for (; pppppiVar12 < pppppiVar13; pppppiVar12 = pppppiVar12 + 2) {
                  if (*pppppiVar12 == (int ****)0xce7d8db5) {
                    if (pppppiVar12 != (int *****)0x0) {
                      cVar7 = (char)pppppiVar12[1];
                      goto LAB_004c7db5;
                    }
                    break;
                  }
                }
              }
              cVar7 = '\0';
LAB_004c7db5:
              if ((int *)(int)cVar7 == local_2c) {
                pppppiVar12 = ppppppiVar10[5];
                pppppiVar13 = pppppiVar12 + *(short *)(ppppppiVar10 + 7) * 2;
                if (pppppiVar12 != (int *****)0x0) {
                  for (; pppppiVar12 < pppppiVar13; pppppiVar12 = pppppiVar12 + 2) {
                    if (*pppppiVar12 == (int ****)0x10c98090) {
                      if (pppppiVar12 != (int *****)0x0) {
                        ppppiVar25 = pppppiVar12[1];
                        goto LAB_004c7df5;
                      }
                      break;
                    }
                  }
                }
                ppppiVar25 = (int ****)0x0;
LAB_004c7df5:
                iVar9 = FUN_004f8730(local_30,ppppppiVar10,0,1);
                if (((ppppiVar25 != (int ****)0x0) && (iVar9 != 0)) &&
                   (*(int *****)(iVar9 + 0x24) != ppppiVar25)) {
                  *(int *****)(iVar9 + 0x24) = ppppiVar25;
                  *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x400000;
                }
                puVar18 = _malloc(0x10);
                puVar18[2] = ppppppiVar10;
                puVar8 = (undefined4 *)param_1[0x21];
                *puVar8 = puVar18;
                param_1[0x21] = puVar18;
                puVar18[1] = puVar8;
                *puVar18 = param_1 + 0x20;
              }
            }
          }
          pppppppiVar14 = (int *******)*local_24;
        }
        local_1c = (int ******)*local_1c;
        pppppppiVar14 = (int *******)local_3c;
      } while (local_1c != local_18);
    }
  }
  iVar9 = FUN_004f3f90(&DAT_00746104);
  if (((iVar9 != 0) && (*(int *)(iVar9 + 0x18) != 0)) && (*(int **)(iVar9 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar9 + 0x14) + 8))(0x18883f75,0,0,*(int *)(iVar9 + 0x18));
  }
  FUN_004b2480();
  puVar8 = local_34;
  FUN_004ac5a0(&DAT_0075eef8,0,local_34);
  if (local_20 == 0x1f) {
    puVar8[0x132] = 0;
    *(char *)((int)puVar8 + 0x64b) = *(char *)((int)puVar8 + 0x64b) + '\x01';
    FUN_0057ea80(puVar8);
    puVar8[0x133] = 0;
    *(char *)(puVar8 + 0x193) = *(char *)(puVar8 + 0x193) + '\x01';
    FUN_0057ea80(puVar8);
    puVar8[0x134] = 0;
    *(char *)((int)puVar8 + 0x64d) = *(char *)((int)puVar8 + 0x64d) + '\x01';
    FUN_0057ea80(puVar8);
LAB_004c80b2:
    *(char *)((int)puVar8 + 0x64e) = *(char *)((int)puVar8 + 0x64e) + '\x01';
    puVar8[0x135] = 0;
    FUN_0057ea80(puVar8);
  }
  else if (local_20 == 8) {
    iVar9 = param_1[0x156];
    if (((iVar9 != 0) && (*(char *)(iVar9 + 0x10) == '\x1f')) &&
       ((((cVar7 = *(char *)(iVar9 + 0x12), cVar7 == '\b' || ((cVar7 == '\n' || (cVar7 == '\x06'))))
         || (cVar7 == '\x03')) || ((cVar7 == '\x01' || (cVar7 == '\r')))))) {
      puVar8[0x132] = 0;
      *(char *)((int)puVar8 + 0x64b) = *(char *)((int)puVar8 + 0x64b) + '\x01';
      FUN_0057ea80(puVar8);
    }
    iVar9 = param_1[0x157];
    if (((iVar9 != 0) && (*(char *)(iVar9 + 0x10) == '\x1f')) &&
       ((cVar7 = *(char *)(iVar9 + 0x12), cVar7 == '\b' ||
        ((((cVar7 == '\n' || (cVar7 == '\x06')) || (cVar7 == '\x03')) ||
         ((cVar7 == '\x01' || (cVar7 == '\r')))))))) {
      puVar8[0x133] = 0;
      *(char *)(puVar8 + 0x193) = *(char *)(puVar8 + 0x193) + '\x01';
      FUN_0057ea80(puVar8);
    }
    iVar9 = param_1[0x158];
    if (((iVar9 != 0) && (*(char *)(iVar9 + 0x10) == '\x1f')) &&
       (((cVar7 = *(char *)(iVar9 + 0x12), cVar7 == '\b' ||
         (((cVar7 == '\n' || (cVar7 == '\x06')) || (cVar7 == '\x03')))) ||
        ((cVar7 == '\x01' || (cVar7 == '\r')))))) {
      puVar8[0x134] = 0;
      *(char *)((int)puVar8 + 0x64d) = *(char *)((int)puVar8 + 0x64d) + '\x01';
      FUN_0057ea80(puVar8);
    }
    iVar9 = param_1[0x159];
    if (((iVar9 != 0) && (*(char *)(iVar9 + 0x10) == '\x1f')) &&
       (((cVar7 = *(char *)(iVar9 + 0x12), cVar7 == '\b' ||
         (((cVar7 == '\n' || (cVar7 == '\x06')) || (cVar7 == '\x03')))) ||
        ((cVar7 == '\x01' || (cVar7 == '\r')))))) goto LAB_004c80b2;
  }
  iVar9 = FUN_004f3f90(&DAT_00746104);
  if (((iVar9 == 0) || (*(int *)(iVar9 + 0x18) == 0)) && (DAT_0073578c != 0)) {
    iVar19 = *(int *)(DAT_0073578c + 8);
    iVar9 = iVar19 + 0xdc;
    if ((iVar9 == 0) || (iVar9 = FUN_004fd1e0(iVar9), iVar9 == 0)) {
      FUN_004eede0(iVar19,"MU_HorizontalBrowserBack.fng",0x10,0xff);
    }
  }
  iVar9 = FUN_004f3f90(&DAT_00746104);
  if (((iVar9 == 0) || (*(int *)(iVar9 + 0x18) == 0)) && (DAT_0073578c != 0)) {
    iVar19 = *(int *)(DAT_0073578c + 8);
    iVar9 = iVar19 + 0xdc;
    if ((iVar9 == 0) || (iVar9 = FUN_004fd1e0(iVar9), iVar9 == 0)) {
      FUN_004eede0(iVar19,"GarageMain.fng",0x10,0);
    }
  }
  iVar9 = FUN_004f3f90(&DAT_00746104);
  if (((iVar9 != 0) && (*(int *)(iVar9 + 0x18) != 0)) && (*(int **)(iVar9 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar9 + 0x14) + 8))(0x6c6603df,0,0,*(int *)(iVar9 + 0x18));
  }
  DAT_00744ff8 = &DAT_0075eef8;
  FUN_004ac5a0(&DAT_0075eef8,0,&DAT_00745000);
  FUN_004ac5a0(DAT_00744ff8,0,&DAT_00745720);
  piVar23 = param_1 + 0x20;
  DAT_00745e40 = 1;
  if ((int *)*piVar23 != piVar23) {
    *local_28 = local_28[1];
    iVar9 = *(int *)(local_28[1] + 8);
    FUN_004f8960();
    puVar8 = local_34;
    iVar19 = (int)*(char *)(iVar9 + 0x10);
    local_34[iVar19 + 0x113] = iVar9;
    *(char *)(iVar19 + 0x62c + (int)local_34) = *(char *)(iVar19 + 0x62c + (int)local_34) + '\x01';
    FUN_0057ea80(local_34);
    iVar9 = FUN_004f3f90(&DAT_00746104);
    if ((iVar9 == 0) || (*(int *)(iVar9 + 0x18) == 0)) {
      iVar9 = FUN_004f3f90(&DAT_00746104);
      if ((iVar9 == 0) ||
         (((*(int *)(iVar9 + 0x18) == 0 || (iVar9 = FUN_004f3f90(&DAT_00746104), iVar9 == 0)) ||
          (*(int *)(iVar9 + 0x14) == 0)))) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(*(int *)(iVar9 + 0x14) + 0x40);
      }
    }
    else {
      iVar9 = FUN_004f3f90(&DAT_00746104);
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(iVar9 + 0x14);
      }
    }
    FUN_004323f0(&DAT_00748850,puVar8);
    _DAT_0072cc80 = 2;
    if (iVar9 != 0) {
      FUN_004b0e50(iVar9,&DAT_00748850,2);
    }
    iVar9 = FUN_004f3f90(&DAT_00746104);
    if ((iVar9 == 0) || (*(int *)(iVar9 + 0x18) == 0)) {
      iVar9 = FUN_004f3f90(&DAT_00746104);
      if (((iVar9 == 0) ||
          ((*(int *)(iVar9 + 0x18) == 0 || (iVar9 = FUN_004f3f90(&DAT_00746104), iVar9 == 0)))) ||
         (*(int *)(iVar9 + 0x14) == 0)) goto LAB_004c833a;
      iVar9 = *(int *)(*(int *)(iVar9 + 0x14) + 0x40);
    }
    else {
      iVar9 = FUN_004f3f90(&DAT_00746104);
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(iVar9 + 0x14);
      }
    }
    if (iVar9 != 0) {
      FUN_004b0150();
    }
  }
LAB_004c833a:
  if ((int *)*piVar23 == piVar23) {
    puVar26 = &DAT_006b9172;
  }
  else {
    puVar26 = (undefined1 *)**(undefined4 **)(*local_28 + 8);
  }
  FUN_004f6850(puVar26);
  *(undefined1 *)(param_1 + 8) = 1;
  iVar9 = FUN_004c76d0();
  if (iVar9 != -1) {
    FUN_0051c830(0xffffffff);
  }
  if (((DAT_0073578c != 0) && (iVar9 = FUN_004f3f90(&DAT_00746104), iVar9 != 0)) &&
     (iVar9 = *(int *)(iVar9 + 0x18), iVar9 != 0)) {
    iVar19 = *(int *)(iVar9 + 0x88);
    iVar24 = 0;
    if (iVar19 != 0) {
      piVar23 = *(int **)(iVar9 + 0x84);
      do {
        if (*(int *)(*piVar23 + 0x10) == -0x15619cfe) {
          iVar24 = *piVar23;
        }
        piVar23 = piVar23 + 1;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
      if (iVar24 != 0) {
        *(uint *)(iVar24 + 0x1c) = *(uint *)(iVar24 + 0x1c) | 0x4000000;
      }
    }
  }
  if ((int *******)local_3c != &local_3c) {
    do {
      ppppppiVar10 = (int ******)*local_3c;
      ppppppiVar16 = (int ******)local_3c[1];
      *ppppppiVar16 = (int *****)ppppppiVar10;
      ppppppiVar10[1] = (int *****)ppppppiVar16;
      _free(local_3c);
    } while ((int *******)local_3c != &local_3c);
  }
  if ((int *******)local_4c != &local_4c) {
    do {
      ppppppiVar10 = (int ******)*local_4c;
      ppppppiVar16 = (int ******)local_4c[1];
      *ppppppiVar16 = (int *****)ppppppiVar10;
      ppppppiVar10[1] = (int *****)ppppppiVar16;
      _free(local_4c);
    } while ((int *******)local_4c != &local_4c);
  }
  if ((int *******)local_44 != &local_44) {
    do {
      ppppppiVar10 = (int ******)*local_44;
      ppppppiVar16 = (int ******)local_44[1];
      *ppppppiVar16 = (int *****)ppppppiVar10;
      ppppppiVar10[1] = (int *****)ppppppiVar16;
      _free(local_44);
    } while ((int *******)local_44 != &local_44);
  }
  ExceptionList = local_10;
  return param_1;
}
