/* spd-match: far pct=5.16 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_c2440_uint_int/batches/20260724T134631Z_w0_tp1 */
#include "ghidra_compat.h"

int __cdecl FUN_005b1775(...);
int __cdecl FUN_005b19ea(...);
int __cdecl FUN_005b1a04(...);
int __cdecl FUN_005b1f01(...);
int __cdecl FUN_005b291b(...);
int __cdecl FUN_005c64c6(...);
int __cdecl FUN_005d7865(...);
int __cdecl FUN_005d78db(...);
int __cdecl FUN_005d7ac2(...);
extern int DAT_006a0548;
extern void LAB_005c6a27(...);
extern void LAB_005c6b4b(...);
extern void LAB_005c6b4e(...);
extern void LAB_005c6bfa(...);
extern void LAB_005c6c1a(...);
extern void LAB_005c6c54(...);
extern void LAB_005c6c59(...);
extern void LAB_005c6cb0(...);
extern void LAB_005c6e23(...);
extern void LAB_005c6fa0(...);
extern void LAB_005c6fc4(...);
extern void LAB_005c6fc9(...);

struct ThisCallBox {
  undefined4 FUN_005c691a(undefined4 **param_2, int param_3, undefined4 **param_4);
};
undefined4 ThisCallBox::FUN_005c691a(undefined4 **param_2, int param_3, undefined4 **param_4) {
  byte bVar1;
  void *pvVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  undefined4 **ppuVar13;
  undefined4 **ppuVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  int *piVar17;
  byte *pbVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  bool bVar21;
  undefined1 local_44 [32];
  undefined4 **local_24;
  undefined4 **local_20;
  undefined4 **local_1c;
  undefined4 *local_18;
  int *local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  local_18 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_8 = ((int)this);
  if (param_3 == 0) {
    ppuVar13 = &local_c;
    while( true ) {
      if (param_4 == (undefined4 **)0x0) {
        *ppuVar13 = *(undefined4 **)(((int)this) + 0x44);
        *(undefined4 **)(((int)this) + 0x44) = local_c;
        return 1;
      }
      pvVar2 = _malloc(0x30);
      if (pvVar2 == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)FUN_005d7ac2(param_4 + 4);
      }
      *ppuVar13 = puVar3;
      if (puVar3 == (undefined4 *)0x0) break;
      param_4 = (undefined4 **)param_4[3];
      ppuVar13 = (undefined4 **)(puVar3 + 3);
    }
  }
  else {
    puVar3 = *(undefined4 **)(((int)this) + 0x44);
    if (puVar3 == (undefined4 *)0x0) {
      pcVar4 = (char *)**(undefined4 **)(((int)this) + 0x54);
      if (((char *)(*(undefined4 **)(((int)this) + 0x54))[1] <= pcVar4) || (*pcVar4 == '(')) {
        piVar5 = (int *)(((int)this) + 0x60);
        local_14 = piVar5;
        iVar7 = FUN_005b291b(*(undefined4 *)(((int)this) + 0x80),piVar5);
        if ((-1 < iVar7) && (*piVar5 == 1)) {
          local_20 = (undefined4 **)(local_8 + 0x68);
          iVar7 = 2;
          bVar21 = true;
          ppuVar13 = local_20;
          pcVar4 = "(";
          do {
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            bVar21 = *(char *)ppuVar13 == *pcVar4;
            ppuVar13 = (undefined4 **)((int)ppuVar13 + 1);
            pcVar4 = pcVar4 + 1;
          } while (bVar21);
          if (bVar21) goto LAB_005c6a27;
        }
      }
    }
    else {
      local_14 = (int *)(((int)this) + 0x60);
      piVar5 = (int *)(unsigned int)(puVar3 + 4);
      piVar17 = local_14;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar17 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar17 = piVar17 + 1;
      }
      if (*local_14 == 1) {
        local_20 = (undefined4 **)(((int)this) + 0x68);
        iVar7 = 2;
        bVar21 = true;
        ppuVar13 = local_20;
        pcVar4 = "(";
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar21 = *(char *)ppuVar13 == *pcVar4;
          ppuVar13 = (undefined4 **)((int)ppuVar13 + 1);
          pcVar4 = pcVar4 + 1;
        } while (bVar21);
        if (bVar21) {
          *(undefined4 *)(((int)this) + 0x44) = puVar3[3];
          puVar3[3] = 0;
          (**(code **)*puVar3)(1);
LAB_005c6a27:
          local_1c = (undefined4 **)0x0;
          local_24 = &local_18;
          local_10 = 1;
          iVar7 = local_8;
          piVar5 = local_14;
          do {
            puVar3 = *(undefined4 **)(iVar7 + 0x44);
            if (puVar3 == (undefined4 *)0x0) {
              iVar8 = FUN_005b291b(*(undefined4 *)(iVar7 + 0x80),piVar5);
              iVar7 = local_8;
              if (iVar8 < 0) goto LAB_005c6fc4;
            }
            else {
              piVar5 = (int *)(unsigned int)(puVar3 + 4);
              piVar17 = local_14;
              for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
                *piVar17 = *piVar5;
                piVar5 = piVar5 + 1;
                piVar17 = piVar17 + 1;
              }
              *(undefined4 *)(iVar7 + 0x44) = puVar3[3];
              puVar3[3] = 0;
              (**(code **)*puVar3)(1);
            }
            piVar5 = local_14;
            ppuVar13 = local_24;
            if (*local_14 == 0xd) {
              FUN_005b1f01(iVar7 + 4,param_2,0x5eb,"unexpected end of file in macro expansion");
              goto LAB_005c6fc4;
            }
            if (*local_24 == (undefined4 *)0x0) {
              pvVar2 = _malloc(0x14);
              if (pvVar2 == (void *)0x0) {
                puVar3 = (undefined4 *)0x0;
              }
              else {
                puVar3 = (undefined4 *)FUN_005d78db(0,0,&DAT_006a0548);
              }
              *ppuVar13 = puVar3;
              if (puVar3 == (undefined4 *)0x0) goto LAB_005c6fc4;
              local_1c = (undefined4 **)(puVar3 + 2);
            }
            if ((((local_10 == 1) && (*piVar5 == 1)) &&
                ((*(char *)local_20 == ',' || (*(char *)local_20 == ')')))) &&
               (*(char *)(iVar7 + 0x69) == '\0')) {
              local_24 = (undefined4 **)(*ppuVar13 + 3);
            }
            else {
              pvVar2 = _malloc(0x30);
              if (pvVar2 == (void *)0x0) {
                puVar3 = (undefined4 *)0x0;
              }
              else {
                puVar3 = (undefined4 *)FUN_005d7ac2(piVar5);
              }
              *local_1c = puVar3;
              if (puVar3 == (undefined4 *)0x0) goto LAB_005c6fc4;
              local_1c = (undefined4 **)(puVar3 + 3);
              iVar7 = local_8;
              piVar5 = local_14;
            }
            if ((*piVar5 == 1) && (*(char *)(iVar7 + 0x69) == '\0')) {
              cVar11 = *(char *)local_20;
              if (cVar11 == '(') {
LAB_005c6b4b:
                local_10 = local_10 + 1;
              }
              else {
                if (cVar11 != ')') {
                  if (cVar11 == '[') goto LAB_005c6b4b;
                  if (cVar11 != ']') {
                    if (cVar11 == '{') goto LAB_005c6b4b;
                    if (cVar11 != '}') goto LAB_005c6b4e;
                  }
                }
                local_10 = local_10 + -1;
              }
            }
LAB_005c6b4e:
            puVar3 = local_18;
            iVar8 = param_3;
          } while (local_10 != 0);
          do {
            if ((puVar3 == (undefined4 *)0x0) || (puVar3[2] == 0)) break;
            iVar8 = *(int *)(iVar8 + 0xc);
            puVar3 = (undefined4 *)puVar3[3];
          } while (iVar8 != 0);
          if ((iVar8 == 0) && (puVar3 == (undefined4 *)0x0)) {
            param_2 = &local_c;
            local_14 = (int *)0x0;
            local_10 = 0;
            local_20 = (undefined4 **)0x0;
            for (local_24 = param_4; local_24 != (undefined4 **)0x0;
                local_24 = (undefined4 **)local_24[3]) {
              ppuVar13 = local_24 + 4;
              local_1c = param_2;
              if ((local_14 == (int *)0x0) && (local_10 == 0)) {
                if (*ppuVar13 != (undefined4 *)0x1) {
LAB_005c6bfa:
                  if (*ppuVar13 == (undefined4 *)0x1) {
                    iVar7 = 3;
                    bVar21 = true;
                    ppuVar14 = local_24 + 6;
                    pcVar4 = "#@";
                    do {
                      if (iVar7 == 0) break;
                      iVar7 = iVar7 + -1;
                      bVar21 = *(char *)ppuVar14 == *pcVar4;
                      ppuVar14 = (undefined4 **)((int)ppuVar14 + 1);
                      pcVar4 = pcVar4 + 1;
                    } while (bVar21);
                    if (bVar21) {
                      local_10 = 1;
                      local_20 = ppuVar13;
                      goto LAB_005c6e23;
                    }
                  }
                  goto LAB_005c6c1a;
                }
                iVar7 = 2;
                bVar21 = true;
                ppuVar14 = local_24 + 6;
                pcVar4 = "#";
                do {
                  if (iVar7 == 0) break;
                  iVar7 = iVar7 + -1;
                  bVar21 = *(char *)ppuVar14 == *pcVar4;
                  ppuVar14 = (undefined4 **)((int)ppuVar14 + 1);
                  pcVar4 = pcVar4 + 1;
                } while (bVar21);
                if (!bVar21) goto LAB_005c6bfa;
                local_14 = (int *)0x1;
                local_20 = ppuVar13;
              }
              else {
LAB_005c6c1a:
                iVar7 = param_3;
                param_4 = (undefined4 **)local_18;
                if (*ppuVar13 == (undefined4 *)0x9) {
                  do {
                    pbVar18 = (byte *)local_24[6];
                    pbVar15 = *(byte **)(iVar7 + 0x18);
                    do {
                      bVar1 = *pbVar15;
                      bVar21 = bVar1 < *pbVar18;
                      if (bVar1 != *pbVar18) {
LAB_005c6c54:
                        iVar8 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
                        goto LAB_005c6c59;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar15[1];
                      bVar21 = bVar1 < pbVar18[1];
                      if (bVar1 != pbVar18[1]) goto LAB_005c6c54;
                      pbVar15 = pbVar15 + 2;
                      pbVar18 = pbVar18 + 2;
                    } while (bVar1 != 0);
                    iVar8 = 0;
LAB_005c6c59:
                    if (iVar8 == 0) break;
                    iVar7 = *(int *)(iVar7 + 0xc);
                    param_4 = (undefined4 **)param_4[3];
                  } while (iVar7 != 0);
                  if (iVar7 == 0) goto LAB_005c6cb0;
                  for (iVar7 = (int)param_4[2]; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0xc)) {
                    pvVar2 = _malloc(0x30);
                    if (pvVar2 == (void *)0x0) {
                      puVar3 = (undefined4 *)0x0;
                    }
                    else {
                      puVar3 = (undefined4 *)FUN_005d7ac2(iVar7 + 0x10);
                    }
                    *param_2 = puVar3;
                    if (puVar3 == (undefined4 *)0x0) goto LAB_005c6fc4;
                    param_2 = (undefined4 **)(puVar3 + 3);
                  }
                }
                else {
LAB_005c6cb0:
                  pvVar2 = _malloc(0x30);
                  if (pvVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)0x0;
                  }
                  else {
                    puVar3 = (undefined4 *)FUN_005d7ac2(ppuVar13);
                  }
                  *param_2 = puVar3;
                  if (puVar3 == (undefined4 *)0x0) goto LAB_005c6fc4;
                  param_2 = (undefined4 **)(puVar3 + 3);
                }
                if ((local_14 != (int *)0x0) || (local_10 != 0)) {
                  iVar7 = 0;
                  iVar8 = 1;
                  for (puVar3 = *local_1c; puVar3 != (undefined4 *)0x0;
                      puVar3 = (undefined4 *)puVar3[3]) {
                    if ((iVar7 != 0) && (iVar7 != puVar3[10])) {
                      iVar8 = iVar8 + 1;
                    }
                    iVar7 = FUN_005c64c6(puVar3[10],puVar3[0xb],0);
                    iVar8 = iVar8 + iVar7;
                    iVar7 = puVar3[10] + puVar3[0xb];
                  }
                  pcVar4 = (char *)FUN_005b1775(iVar8 + 1);
                  if (pcVar4 == (char *)0x0) goto LAB_005c6fc4;
                  iVar8 = 0;
                  param_4 = (undefined4 **)0x1;
                  cVar11 = ((local_14 == (int *)0x0) - 1U & 0xfb) + 0x27;
                  *pcVar4 = cVar11;
                  iVar7 = (int)param_4;
                  for (puVar3 = *local_1c; puVar3 != (undefined4 *)0x0;
                      puVar3 = (undefined4 *)puVar3[3]) {
                    param_4 = (undefined4 **)iVar7;
                    if ((iVar8 != 0) && (iVar8 != puVar3[10])) {
                      param_4 = (undefined4 **)(iVar7 + 1);
                      pcVar4[iVar7] = ' ';
                    }
                    iVar7 = FUN_005c64c6(puVar3[10],puVar3[0xb],pcVar4 + (int)param_4);
                    iVar7 = (int)param_4 + iVar7;
                    iVar8 = puVar3[0xb] + puVar3[10];
                  }
                  pcVar4[iVar7] = cVar11;
                  FUN_005b19ea();
                  iVar8 = local_8;
                  iVar7 = FUN_005b1a04(pcVar4,iVar7 + 1,local_20[4],local_20[5],local_8,local_8 + 4)
                  ;
                  if ((iVar7 < 0) ||
                     (iVar7 = FUN_005b291b(*(undefined4 *)(iVar8 + 0x80),local_44),
                     ppuVar13 = local_1c, iVar7 < 0)) goto LAB_005c6fa0;
                  if (*local_1c != (undefined4 *)0x0) {
                    (**(code **)**local_1c)(1);
                  }
                  pvVar2 = _malloc(0x30);
                  if (pvVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)0x0;
                  }
                  else {
                    puVar3 = (undefined4 *)FUN_005d7ac2(local_44);
                  }
                  *ppuVar13 = puVar3;
                  if (puVar3 == (undefined4 *)0x0) goto LAB_005c6fa0;
                  local_10 = 0;
                  local_14 = (int *)0x0;
                  param_2 = (undefined4 **)(puVar3 + 3);
                  FUN_005d7865();
                }
              }
LAB_005c6e23:
              iVar7 = local_8;
            }
            ppuVar13 = &local_c;
            puVar3 = local_c;
            while (puVar3 != (undefined4 *)0x0) {
              puVar3 = *ppuVar13;
              local_20 = (undefined4 **)puVar3[3];
              if (local_20 == (undefined4 **)0x0) {
                local_24 = (undefined4 **)0x0;
              }
              else {
                local_24 = (undefined4 **)local_20[3];
              }
              piVar5 = (int *)(-(uint)(local_20 != (undefined4 **)0x0) & (uint)(local_20 + 4));
              uVar12 = -(uint)(local_24 != (undefined4 **)0x0) & (uint)(local_24 + 4);
              if (((local_20 != (undefined4 **)0x0) && (local_24 != (undefined4 **)0x0)) &&
                 (*piVar5 == 1)) {
                iVar7 = 3;
                bVar21 = true;
                piVar5 = piVar5 + 2;
                pcVar4 = "##";
                do {
                  if (iVar7 == 0) break;
                  iVar7 = iVar7 + -1;
                  bVar21 = (char)*piVar5 == *pcVar4;
                  piVar5 = (int *)((int)piVar5 + 1);
                  pcVar4 = pcVar4 + 1;
                } while (bVar21);
                if (bVar21) {
                  local_1c = (undefined4 **)(puVar3[0xb] + *(int *)(uVar12 + 0x1c));
                  puVar6 = (undefined4 *)FUN_005b1775(local_1c);
                  if (puVar6 == (undefined4 *)0x0) goto LAB_005c6fc4;
                  uVar10 = puVar3[0xb];
                  puVar16 = (undefined4 *)puVar3[10];
                  puVar19 = puVar6;
                  for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                    *puVar19 = *puVar16;
                    puVar16 = puVar16 + 1;
                    puVar19 = puVar19 + 1;
                  }
                  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                    *(undefined1 *)puVar19 = *(undefined1 *)puVar16;
                    puVar16 = (undefined4 *)((int)puVar16 + 1);
                    puVar19 = (undefined4 *)((int)puVar19 + 1);
                  }
                  uVar10 = *(uint *)(uVar12 + 0x1c);
                  puVar16 = *(undefined4 **)(uVar12 + 0x18);
                  puVar19 = (undefined4 *)(puVar3[0xb] + (int)puVar6);
                  for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                    *puVar19 = *puVar16;
                    puVar16 = puVar16 + 1;
                    puVar19 = puVar19 + 1;
                  }
                  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                    *(undefined1 *)puVar19 = *(undefined1 *)puVar16;
                    puVar16 = (undefined4 *)((int)puVar16 + 1);
                    puVar19 = (undefined4 *)((int)puVar19 + 1);
                  }
                  FUN_005b19ea();
                  iVar7 = FUN_005b1a04(puVar6,local_1c,puVar3[8],puVar3[9],local_8,local_8 + 4);
                  if ((iVar7 < 0) ||
                     (iVar7 = FUN_005b291b(*(undefined4 *)(local_8 + 0x80),puVar3 + 4), iVar7 < 0))
                  goto LAB_005c6fa0;
                  puVar3[3] = (unsigned int)(local_24[3]);
                  local_24[3] = (undefined4 *)0x0;
                  (*(code *)**local_20)(1);
                  FUN_005d7865();
                }
              }
              ppuVar13 = (undefined4 **)(*ppuVar13 + 3);
              iVar7 = local_8;
              puVar3 = *ppuVar13;
            }
            *ppuVar13 = *(undefined4 **)(iVar7 + 0x44);
            puVar3 = (undefined4 *)0x0;
            *(undefined4 **)(iVar7 + 0x44) = local_c;
            uVar20 = 1;
            goto LAB_005c6fc9;
          }
          FUN_005b1f01(iVar7 + 4,param_2,0x5ec,"not enough actual parameters for macro \'%s\'",
                       *(undefined4 *)((int)param_2 + 8));
        }
      }
    }
  }
  goto LAB_005c6fc4;
LAB_005c6fa0:
  FUN_005d7865();
LAB_005c6fc4:
  uVar20 = 0;
  puVar3 = local_c;
LAB_005c6fc9:
  if (local_18 != (undefined4 *)0x0) {
    (**(code **)*local_18)(1);
  }
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  return uVar20;
}
