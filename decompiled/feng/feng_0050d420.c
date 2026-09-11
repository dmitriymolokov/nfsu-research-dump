/* spd-match: far pct=3.33 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_004323f0();
int __cdecl FUN_004acce0();
int __cdecl FUN_004b0e50();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8960();
int __cdecl FUN_0050c930();
int __cdecl FUN_0050d130();
int __cdecl FUN_0050d1f0();
int __cdecl FUN_0050d360();
int __cdecl FUN_0050dd40();
int __cdecl FUN_0050df60();
int __cdecl FUN_0053e400();
int __cdecl FUN_0057ce10();
int __cdecl FUN_0057ea80();
int __cdecl FUN_005a3570();
int __cdecl FUN_005a4420();
extern int DAT_006f88a8;
extern int DAT_00734588;
extern int DAT_00735744;
extern int DAT_00735ec1;
extern unsigned char *DAT_00737668;
extern int DAT_0073766c;
extern int DAT_0073ad40;
extern int DAT_00745000;
extern unsigned char *DAT_0074563d;
extern unsigned char *DAT_00745bb0;
extern int DAT_00745e40;
extern int DAT_00745e44;
extern int DAT_00746104;
extern int DAT_00748850;
extern int DAT_0075f344;
extern int DAT_007677ac;
extern int _DAT_0072cc80;
extern int _DAT_00745490;
extern int _DAT_0074571c;
extern unsigned char *PTR_FUN_006c01bc;
extern void LAB_0050d615(void);
extern void LAB_0050d6a0(void);
extern void LAB_0050d73e(void);
extern void LAB_0050d7ad(void);
extern void LAB_0050d7d9(void);
extern void LAB_0050d81f(void);
extern void LAB_0050d871(void);
extern void LAB_0050d895(void);
extern void LAB_0050d89b(void);
extern void LAB_0050d8b3(void);
extern void LAB_0050d946(void);
extern void LAB_0050d971(void);
extern void LAB_0050d9e4(void);
extern void LAB_0050da11(void);
extern void LAB_0050da17(void);
extern void LAB_0050da2f(void);
extern void LAB_0050dac1(void);
extern void LAB_0050db00(void);
extern void LAB_0050db32(void);
extern void LAB_0068906e(void);
void *ExceptionList;

undefined4 * FUN_0050d420(undefined4 *param_1,int *param_2)

{
  byte *pbVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;
  int *piVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  char *pcVar15;
  bool bVar16;
  char local_54 [32];
  undefined4 *local_34;
  int *local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  undefined4 *local_18;
  byte local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0068906e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(param_1,param_2);
  puVar14 = param_1 + 0x11;
  *param_1 = &PTR_FUN_006c01bc;
  *puVar14 = puVar14;
  param_1[0x12] = puVar14;
  local_34 = param_1 + 0x13;
  (*(unsigned char *)&(local_8)) = 1;
  (local_8 = ((unsigned int)(local_8) & 0xff));
  FUN_004f8370(local_34,"master_thumb","thumb");
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),2);
  iVar4 = FUN_004f3f90(&DAT_00746104);
  if (((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) && (*(int **)(iVar4 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar4 + 0x14) + 8))(0xe8e61aab,0,0,*(int *)(iVar4 + 0x18));
  }
  iVar4 = FUN_004f3f90(&DAT_00746104);
  if (((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) && (*(int **)(iVar4 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar4 + 0x14) + 8))(0xf7fbf050,0,0,*(int *)(iVar4 + 0x18));
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  local_2c = DAT_00745e44;
  iVar4 = FUN_004acce0();
  piVar11 = DAT_0073ad40;
  local_1c = (int)*(char *)(iVar4 * 0xc90 + 0xdc + DAT_00734588);
  pcVar10 = "WHEELS";
  uVar8 = 0x57;
  puVar14 = (undefined4 *)0xffffffff;
  do {
    puVar14 = (undefined4 *)((int)puVar14 * 0x21 + uVar8);
    pbVar1 = (byte *)(pcVar10 + 1);
    uVar8 = (uint)*pbVar1;
    pcVar10 = pcVar10 + 1;
  } while (*pbVar1 != 0);
  param_2 = DAT_0073ad40;
  local_18 = puVar14;
  local_30 = (int *)FUN_0040a880();
  if (piVar11 != local_30) {
    do {
      puVar5 = (undefined4 *)param_2[3];
      puVar13 = puVar5 + param_2[4] * 0xc;
      if ((puVar14 != (undefined4 *)0x0) &&
         (puVar5 = (undefined4 *)FUN_0053e400(local_18,puVar5,4), puVar5 == (undefined4 *)0x0))
      break;
      if (puVar5 < puVar13) {
        iVar4 = DAT_00745e40;
        if ((local_18 == (undefined4 *)0x0) || ((undefined4 *)puVar5[1] == local_18))
        goto joined_r0x0050d5bb;
        break;
      }
      param_2 = (int *)*param_2;
      puVar14 = local_18;
    } while (param_2 != local_30);
  }
LAB_0050db00:
  if (DAT_00735744 == 0) {
    param_1[0x10] = param_1[0x11];
  }
  else {
    for (puVar14 = (undefined4 *)param_1[0x11]; puVar14 != param_1 + 0x11;
        puVar14 = (undefined4 *)*puVar14) {
      if (puVar14[2] == DAT_00735744) {
        param_1[0x10] = puVar14;
        goto LAB_0050db32;
      }
    }
    param_1[0x10] = (undefined4 *)param_1[0x11];
  }
LAB_0050db32:
  iVar4 = param_1[0x10];
  FUN_004f8960();
  FUN_0050d130();
  uVar9 = *(undefined4 *)(iVar4 + 0x34);
  cVar3 = FUN_0050d1f0(param_1);
  if (cVar3 != '\0') {
    uVar9 = FUN_0050d360();
  }
  _DAT_0074571c = uVar9;
  DAT_0074563d = DAT_0074563d + '\x01';
  _DAT_00745490 = _DAT_0074571c;
  FUN_0057ea80(&DAT_00745000);
  iVar4 = FUN_004f3f90(&DAT_00746104);
  if ((iVar4 == 0) || (*(int *)(iVar4 + 0x18) == 0)) {
    iVar4 = FUN_004f3f90(&DAT_00746104);
    if ((iVar4 == 0) ||
       (((*(int *)(iVar4 + 0x18) == 0 || (iVar4 = FUN_004f3f90(&DAT_00746104), iVar4 == 0)) ||
        (*(int *)(iVar4 + 0x14) == 0)))) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(iVar4 + 0x14) + 0x40);
    }
  }
  else {
    iVar4 = FUN_004f3f90(&DAT_00746104);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x14);
    }
  }
  FUN_004323f0(&DAT_00748850,&DAT_00745000);
  _DAT_0072cc80 = 2;
  if (iVar4 != 0) {
    FUN_004b0e50(iVar4,&DAT_00748850,2);
  }
  FUN_0050df60(param_1);
  *(undefined1 *)(param_1 + 8) = 1;
  ExceptionList = local_10;
  return param_1;
joined_r0x0050d5bb:
  local_18 = puVar5;
  DAT_00745e40 = iVar4;
  if (local_18 != (undefined4 *)0x0) {
    local_12 = *(byte *)((int)local_18 + 0x11);
    local_20 = (uint)local_12;
    if (local_20 == 4) {
      local_24 = local_1c + -6;
    }
    else {
      local_24 = (local_20 - 9) + local_1c;
    }
    piVar6 = *(int **)(DAT_00745bb0 + 0x14);
    piVar11 = piVar6 + *(short *)(DAT_00745bb0 + 0x1c) * 2;
    if (piVar6 != (int *)0x0) {
      for (; piVar6 < piVar11; piVar6 = piVar6 + 2) {
        if (*piVar6 == -0x14fefe1e) {
          if (piVar6 != (int *)0x0) {
            cVar3 = (char)piVar6[1];
            goto LAB_0050d615;
          }
          break;
        }
      }
    }
    cVar3 = '\0';
LAB_0050d615:
    local_30 = (int *)(int)cVar3;
    if ((iVar4 != 2) || (bVar2 = true, 1 < local_12)) {
      bVar2 = false;
    }
    local_11 = FUN_005a3570(&DAT_0075f344);
    uVar8 = local_20;
    if ((((DAT_006f88a8 == '\0') || (bVar2)) || (iVar4 == 1)) || (bVar2 = false, local_11 != '\0'))
    {
      bVar2 = true;
    }
    if ((local_20 == 4) && (local_11 == '\0')) {
      bVar2 = false;
    }
    if (DAT_00735ec1 != '\0') {
      bVar2 = true;
    }
    if (iVar4 == 1) {
      uVar7 = FUN_005a4420();
      local_28 = CONCAT31(((unsigned int)(local_28) >> 8),1);
      if (uVar7 != uVar8) goto LAB_0050d6a0;
    }
    else {
LAB_0050d6a0:
      local_28 = local_28 & 0xffffff00;
    }
    if ((DAT_007677ac != 0) && (((int)uVar8 < 4 || ((uVar8 == 4 && (local_11 != '\0')))))) {
      bVar2 = true;
    }
    if (iVar4 == 2) {
      uVar8 = 0;
      if (DAT_0073766c != 0) {
        piVar11 = (int *)(DAT_00737668 + 0x24);
        do {
          if ((piVar11[-1] == 1) && (*piVar11 == 2)) {
            if ((*(char *)(uVar8 * 0x34 + 0x30 + DAT_00737668) != '\0') && (local_12 == 1))
            goto LAB_0050d81f;
            break;
          }
          uVar8 = uVar8 + 1;
          piVar11 = piVar11 + 0xd;
        } while (uVar8 < DAT_0073766c);
      }
      uVar8 = 0;
      if (DAT_0073766c != 0) {
        puVar12 = (uint *)(DAT_00737668 + 0x24);
        do {
          if ((puVar12[-1] == 1) && (*puVar12 == local_20)) {
            if (*(char *)(uVar8 * 0x34 + 0x30 + DAT_00737668) != '\0') goto LAB_0050d81f;
            break;
          }
          uVar8 = uVar8 + 1;
          puVar12 = puVar12 + 0xd;
        } while (uVar8 < DAT_0073766c);
      }
    }
    bVar16 = false;
    goto LAB_0050d73e;
  }
  goto LAB_0050db00;
LAB_0050d81f:
  bVar16 = true;
LAB_0050d73e:
  if ((bVar2) || (bVar2 = false, bVar16)) {
    bVar2 = true;
  }
  iVar4 = local_18[3];
  cVar3 = FUN_0050c930();
  if ((cVar3 == '\0') || (cVar3 = FUN_0050c930(), cVar3 == '\0')) {
    puVar14 = local_18;
    if (iVar4 != *(int *)(local_2c + 8)) goto LAB_0050dac1;
    iVar4 = (int)*(short *)(local_18 + 7);
    piVar11 = (int *)local_18[5];
    piVar6 = piVar11;
    if (piVar11 != (int *)0x0) {
      for (; piVar6 < piVar11 + iVar4 * 2; piVar6 = piVar6 + 2) {
        if (*piVar6 == 0x10c98090) {
          if (piVar6 != (int *)0x0) {
            local_20 = piVar6[1];
            goto LAB_0050d946;
          }
          break;
        }
      }
    }
    local_20 = 0;
LAB_0050d946:
    if (DAT_006f88a8 == '\0') {
      piVar6 = piVar11;
      if (piVar11 != (int *)0x0) {
        for (; piVar6 < piVar11 + iVar4 * 2; piVar6 = piVar6 + 2) {
          if (*piVar6 == -0x14fefe1e) {
            if (piVar6 != (int *)0x0) {
              cVar3 = (char)piVar6[1];
              goto LAB_0050d9e4;
            }
            break;
          }
        }
      }
      cVar3 = '\0';
LAB_0050d9e4:
      if (local_30 == (int *)(int)cVar3) {
        piVar6 = piVar11 + iVar4 * 2;
        if (piVar11 != (int *)0x0) {
          for (; piVar11 < piVar6; piVar11 = piVar11 + 2) {
            if (*piVar11 == -0x3182724b) {
              if (piVar11 != (int *)0x0) {
                cVar3 = (char)piVar11[1];
                goto LAB_0050da11;
              }
              break;
            }
          }
        }
        cVar3 = '\0';
LAB_0050da11:
        bVar16 = local_1c == cVar3;
        goto LAB_0050da17;
      }
LAB_0050da2f:
      bVar16 = false;
    }
    else {
      piVar6 = piVar11;
      if (piVar11 != (int *)0x0) {
        for (; piVar6 < piVar11 + iVar4 * 2; piVar6 = piVar6 + 2) {
          if (*piVar6 == -0x14fefe1e) {
            if (piVar6 != (int *)0x0) {
              cVar3 = (char)piVar6[1];
              goto LAB_0050d971;
            }
            break;
          }
        }
      }
      cVar3 = '\0';
LAB_0050d971:
      if (local_24 != cVar3) goto LAB_0050da2f;
      piVar6 = piVar11 + iVar4 * 2;
      if (piVar11 != (int *)0x0) {
        for (; piVar11 < piVar6; piVar11 = piVar11 + 2) {
          if (*piVar11 == -0x3182724b) {
            if (piVar11 != (int *)0x0) {
              bVar16 = local_1c == (char)piVar11[1];
              goto LAB_0050da17;
            }
            break;
          }
        }
      }
      bVar16 = local_1c == 0;
LAB_0050da17:
      if (!bVar16) goto LAB_0050da2f;
      bVar16 = true;
    }
    for (puVar5 = (undefined4 *)param_1[0x11]; puVar5 != param_1 + 0x11;
        puVar5 = (undefined4 *)*puVar5) {
      if (puVar5[2] == local_20) goto LAB_0050dac1;
    }
    if ((!bVar16) || (!bVar2)) goto LAB_0050dac1;
    pcVar10 = (char *)*local_18;
    uVar8 = 0;
    pcVar15 = local_54;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar15[0] = '\0';
      pcVar15[1] = '\0';
      pcVar15[2] = '\0';
      pcVar15[3] = '\0';
      pcVar15 = pcVar15 + 4;
    }
    if (pcVar10 != (char *)0x0) {
      cVar3 = *pcVar10;
      while (cVar3 != '\0') {
        iVar4 = uVar8 + 1;
        uVar8 = uVar8 + 1;
        cVar3 = pcVar10[iVar4];
      }
    }
    uVar7 = 0xffffffff;
    do {
      uVar8 = uVar8 - 1;
      if ((int)uVar8 < 0) break;
      if (pcVar10[uVar8] == ' ') {
        uVar7 = uVar8;
      }
    } while ((int)uVar7 < 0);
    if (0 < (int)uVar7) {
      pcVar15 = local_54;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar15 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar15 = pcVar15 + 1;
      }
    }
  }
  else {
    iVar4 = (int)*(short *)(local_18 + 7);
    piVar11 = (int *)local_18[5];
    piVar6 = piVar11;
    if (piVar11 != (int *)0x0) {
      for (; piVar6 < piVar11 + iVar4 * 2; piVar6 = piVar6 + 2) {
        if (*piVar6 == 0x10c98090) {
          if (piVar6 != (int *)0x0) {
            local_20 = piVar6[1];
            goto LAB_0050d7ad;
          }
          break;
        }
      }
    }
    local_20 = 0;
LAB_0050d7ad:
    if (DAT_006f88a8 == '\0') {
      piVar6 = piVar11;
      if (piVar11 != (int *)0x0) {
        for (; piVar6 < piVar11 + iVar4 * 2; piVar6 = piVar6 + 2) {
          if (*piVar6 == -0x14fefe1e) {
            if (piVar6 != (int *)0x0) {
              cVar3 = (char)piVar6[1];
              goto LAB_0050d871;
            }
            break;
          }
        }
      }
      cVar3 = '\0';
LAB_0050d871:
      if (local_30 == (int *)(int)cVar3) {
        piVar6 = piVar11 + iVar4 * 2;
        if (piVar11 != (int *)0x0) {
          for (; piVar11 < piVar6; piVar11 = piVar11 + 2) {
            if (*piVar11 == -0x3182724b) {
              if (piVar11 != (int *)0x0) {
                cVar3 = (char)piVar11[1];
                goto LAB_0050d895;
              }
              break;
            }
          }
        }
        cVar3 = '\0';
LAB_0050d895:
        bVar16 = local_1c == cVar3;
        goto LAB_0050d89b;
      }
LAB_0050d8b3:
      bVar16 = false;
    }
    else {
      piVar6 = piVar11;
      if (piVar11 != (int *)0x0) {
        for (; piVar6 < piVar11 + iVar4 * 2; piVar6 = piVar6 + 2) {
          if (*piVar6 == -0x14fefe1e) {
            if (piVar6 != (int *)0x0) {
              cVar3 = (char)piVar6[1];
              goto LAB_0050d7d9;
            }
            break;
          }
        }
      }
      cVar3 = '\0';
LAB_0050d7d9:
      if (local_24 != cVar3) goto LAB_0050d8b3;
      piVar6 = piVar11 + iVar4 * 2;
      if (piVar11 != (int *)0x0) {
        for (; piVar11 < piVar6; piVar11 = piVar11 + 2) {
          if (*piVar11 == -0x3182724b) {
            if (piVar11 != (int *)0x0) {
              bVar16 = local_1c == (char)piVar11[1];
              goto LAB_0050d89b;
            }
            break;
          }
        }
      }
      bVar16 = local_1c == 0;
LAB_0050d89b:
      if (!bVar16) goto LAB_0050d8b3;
      bVar16 = true;
    }
    for (puVar14 = (undefined4 *)param_1[0x11]; puVar14 != param_1 + 0x11;
        puVar14 = (undefined4 *)*puVar14) {
      if (puVar14[2] == local_20) goto LAB_0050dac1;
    }
    if ((!bVar16) || (puVar14 = local_18, !bVar2)) goto LAB_0050dac1;
  }
  FUN_0050dd40(puVar14,"MU_GarageRimsBrowser.fng",local_20,local_28);
LAB_0050dac1:
  pcVar10 = "WHEELS";
  iVar4 = -1;
  uVar8 = 0x57;
  do {
    iVar4 = iVar4 * 0x21 + uVar8;
    pbVar1 = (byte *)(pcVar10 + 1);
    uVar8 = (uint)*pbVar1;
    pcVar10 = pcVar10 + 1;
  } while (*pbVar1 != 0);
  puVar5 = (undefined4 *)FUN_0057ce10(iVar4,0xffffffff,0,local_18,0xffffffff);
  iVar4 = DAT_00745e40;
  goto joined_r0x0050d5bb;
}
