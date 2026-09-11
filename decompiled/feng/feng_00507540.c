/* spd-match: far pct=6.64 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_004acce0();
int __cdecl FUN_004ad7b0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f6a10();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8960();
int __cdecl FUN_00504450();
int __cdecl FUN_00506160();
int __cdecl FUN_00507280();
int __cdecl FUN_005074d0();
int __cdecl FUN_00507e10();
int __cdecl FUN_00507ec0();
int __cdecl FUN_0053e400();
int __cdecl FUN_0057ce10();
int __cdecl FUN_0059e5c0();
int __cdecl FUN_005a03d0();
int __cdecl FUN_005a1550();
int __cdecl FUN_005a3570();
int __cdecl FUN_005a4420();
extern unsigned char *DAT_00706530;
extern int DAT_00735720;
extern int DAT_00735724;
extern int DAT_00735ec1;
extern unsigned char *DAT_00737668;
extern int DAT_0073766c;
extern int DAT_0073ad40;
extern int DAT_00745b6c;
extern int DAT_00745b80;
extern int DAT_00745e40;
extern int DAT_00746104;
extern int DAT_0075eef8;
extern int DAT_0075f344;
extern int DAT_007677ac;
extern unsigned char *PTR_FUN_006c0234;
extern void LAB_0050768a(void);
extern void LAB_00507727(void);
extern void LAB_005077db(void);
extern void LAB_005077f6(void);
extern void LAB_00507ab1(void);
extern void LAB_00507af1(void);
extern void LAB_00507bff(void);
extern void LAB_00507c6f(void);
extern void LAB_00507c75(void);
extern void LAB_00507cd5(void);
extern void LAB_00507d80(void);
extern void LAB_0068906e(void);
void *ExceptionList;

void FUN_00507540(undefined4 *param_1,undefined4 param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 extraout_ECX;
  char extraout_DL;
  char *pcVar16;
  uint uVar17;
  uint *puVar18;
  bool bVar19;
  undefined4 *local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0068906e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(param_1,param_2);
  puVar14 = param_1 + 0x11;
  *param_1 = &PTR_FUN_006c0234;
  *puVar14 = puVar14;
  param_1[0x12] = puVar14;
  (*(unsigned char *)&(local_8)) = 1;
  (local_8 = ((unsigned int)(local_8) & 0xff));
  FUN_004f8370(param_1 + 0x13,"master_thumb","thumb");
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),2);
  *(undefined1 *)(param_1 + 0x27) = 0;
  FUN_004f6a10("MU_HorizontalBrowserBack.fng",1);
  iVar9 = FUN_004f3f90(&DAT_00746104);
  if (((iVar9 != 0) && (*(int *)(iVar9 + 0x18) != 0)) && (*(int **)(iVar9 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar9 + 0x14) + 8))(0xe8e61aab,0,0,*(int *)(iVar9 + 0x18));
  }
  iVar9 = DAT_00735724;
  switch(DAT_00735724) {
  case 0:
    param_1[0xf] = 0xa913299a;
    break;
  case 1:
    param_1[0xf] = 0xada5e21b;
    break;
  case 2:
    param_1[0xf] = 0xc83af60b;
    break;
  case 3:
    param_1[0xf] = 0x6301c2c5;
    break;
  case 4:
    param_1[0xf] = 0x87a4111;
    break;
  case 5:
    param_1[0xf] = 0xe0283464;
    break;
  case 6:
    param_1[0xf] = 0x895cafc;
    break;
  case 8:
    param_1[0xf] = 0x48014c20;
    break;
  case 9:
    param_1[0xf] = 0xb96901dd;
    break;
  case 10:
    param_1[0xf] = 0x87d60d7;
    break;
  case 0xb:
    param_1[0xf] = 0xba209b97;
    break;
  case 0xc:
    param_1[0xf] = 0x78b16b24;
  }
  puVar14 = DAT_0073ad40;
  iVar15 = 0;
  piVar10 = &DAT_00706530;
  do {
    if (*piVar10 == iVar9) {
      local_1c = &DAT_00706530 + iVar15 * 7;
      goto LAB_0050768a;
    }
    piVar10 = piVar10 + 7;
    iVar15 = iVar15 + 1;
  } while ((int)piVar10 < 0x70669c);
  local_1c = (undefined4 *)0x0;
LAB_0050768a:
  uVar3 = local_1c[4];
  if (iVar9 == 0xc) {
    cVar6 = FUN_00506160();
    puVar14 = DAT_0073ad40;
    if (cVar6 == '\0') {
LAB_005077db:
      local_18 = FUN_0057ce10(DAT_00735720,uVar3,0,0,0xffffffff);
    }
    else {
      puVar11 = (undefined4 *)FUN_0040a880();
      for (; puVar14 != puVar11; puVar14 = (undefined4 *)*puVar14) {
        local_18 = puVar14[3];
        uVar17 = puVar14[4] * 0x30 + local_18;
        if ((DAT_00735720 != 0) && (local_18 = FUN_0053e400(DAT_00735720,local_18,4), local_18 == 0)
           ) break;
        for (; local_18 < uVar17; local_18 = local_18 + 0x30) {
          if ((DAT_00735720 != 0) && (*(int *)(local_18 + 4) != DAT_00735720)) goto LAB_00507727;
          if (*(char *)(local_18 + 0x10) == '\x05') goto LAB_005077f6;
        }
      }
LAB_00507727:
      local_18 = 0;
    }
  }
  else if (iVar9 == 10) {
    puVar11 = (undefined4 *)FUN_0040a880();
    for (; puVar14 != puVar11; puVar14 = (undefined4 *)*puVar14) {
      local_18 = puVar14[3];
      uVar17 = puVar14[4] * 0x30 + local_18;
      for (; local_18 < uVar17; local_18 = local_18 + 0x30) {
        if (*(char *)(local_18 + 0x10) == 't') goto LAB_005077f6;
      }
    }
    local_18 = 0;
  }
  else {
    if (iVar9 != 9) goto LAB_005077db;
    puVar11 = (undefined4 *)FUN_0040a880();
    for (; puVar14 != puVar11; puVar14 = (undefined4 *)*puVar14) {
      local_18 = puVar14[3];
      uVar17 = puVar14[4] * 0x30 + local_18;
      for (; local_18 < uVar17; local_18 = local_18 + 0x30) {
        if (*(char *)(local_18 + 0x10) == 's') goto LAB_005077f6;
      }
    }
    local_18 = 0;
  }
LAB_005077f6:
  bVar19 = DAT_007677ac != 0;
  uVar12 = FUN_005a03d0();
  bVar4 = false;
  switch(extraout_ECX) {
  case 1:
  case 2:
  case 10:
    bVar5 = false;
    break;
  case 0xd:
  case 0xe:
    bVar4 = true;
  default:
    bVar5 = true;
  }
  if ((((DAT_00735ec1 == '\0') && (extraout_DL == '\0')) && (cVar6 = FUN_0059e5c0(), cVar6 == '\0'))
     && (cVar6 = FUN_005a1550(&DAT_0075eef8,uVar12), cVar6 == '\0')) {
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
  }
  param_1[0x22] = uVar13;
  if (((DAT_00735ec1 != '\0') || (bVar19)) ||
     ((cVar6 = FUN_0059e5c0(), cVar6 != '\0' ||
      ((cVar6 = FUN_005a1550(&DAT_0075eef8,uVar12), cVar6 != '\0' || (bVar5)))))) {
    uVar13 = 1;
  }
  else {
    uVar13 = 0;
  }
  param_1[0x23] = uVar13;
  if ((((DAT_00735ec1 != '\0') || (bVar19)) || (cVar6 = FUN_0059e5c0(), cVar6 != '\0')) ||
     ((cVar6 = FUN_005a1550(&DAT_0075eef8,uVar12), cVar6 != '\0' || (bVar4)))) {
    uVar13 = 1;
  }
  else {
    uVar13 = 0;
  }
  param_1[0x24] = uVar13;
  if (((DAT_00735ec1 != '\0') || (bVar19)) ||
     ((cVar6 = FUN_0059e5c0(), cVar6 != '\0' ||
      (cVar6 = FUN_005a1550(&DAT_0075eef8,uVar12), cVar6 != '\0')))) {
    uVar13 = 1;
  }
  else {
    uVar13 = 0;
  }
  param_1[0x25] = uVar13;
  if ((((DAT_00735ec1 != '\0') || (bVar19)) || (cVar6 = FUN_0059e5c0(), cVar6 != '\0')) ||
     (cVar6 = FUN_005a1550(&DAT_0075eef8,uVar12), cVar6 != '\0')) {
    uVar13 = 1;
  }
  else {
    uVar13 = 0;
  }
  param_1[0x26] = uVar13;
  if ((DAT_00735724 != 10) && (DAT_00735724 != 9)) {
    do {
      bVar2 = *(byte *)(local_18 + 0x11);
      cVar6 = '\x01';
      if ((bVar2 == 4) &&
         ((cVar7 = FUN_005a1550(&DAT_0075eef8,uVar12), cVar7 == '\0' ||
          (cVar7 = FUN_005a3570(&DAT_0075f344), cVar7 == '\0')))) {
        cVar6 = '\0';
      }
      cVar7 = *(char *)(local_18 + 0x10);
      if (((cVar7 == '\v') && (iVar9 = FUN_004acce0(), -1 < iVar9)) && ((iVar9 < 2 || (iVar9 == 5)))
         ) {
        pcVar16 = "NOHATCHBACK";
        iVar9 = -1;
        uVar17 = 0x4e;
        do {
          iVar9 = iVar9 * 0x21 + uVar17;
          pbVar1 = (byte *)(pcVar16 + 1);
          uVar17 = (uint)*pbVar1;
          pcVar16 = pcVar16 + 1;
        } while (*pbVar1 != 0);
        if (*(int *)(local_18 + 0xc) == iVar9) {
          cVar6 = '\0';
        }
      }
      if ((DAT_00745e40 == 2) && (uVar17 = 0, DAT_0073766c != 0)) {
        puVar18 = (uint *)(DAT_00737668 + 0x24);
        do {
          if ((puVar18[-1] == 1) && (*puVar18 == (uint)bVar2)) {
            if (*(char *)(uVar17 * 0x34 + 0x30 + DAT_00737668) != '\0') goto LAB_00507ab1;
            break;
          }
          uVar17 = uVar17 + 1;
          puVar18 = puVar18 + 0xd;
        } while (uVar17 < DAT_0073766c);
      }
      if (((bVar2 == 0) || (cVar8 = FUN_005a3570(&DAT_0075f344), cVar8 != '\0')) ||
         ((bVar19 && (bVar2 < 4)))) {
LAB_00507ab1:
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      iVar9 = DAT_00745e40;
      if (((DAT_00745e40 != 1) && (!bVar4)) && (1 < bVar2)) {
        cVar6 = '\0';
      }
      if (cVar7 == '\v') {
        if (cVar6 != '\0') {
          if (bVar2 == 4) {
            cVar6 = FUN_005074d0(local_18);
            cVar6 = '\x01' - (cVar6 != '\0');
          }
          goto LAB_00507af1;
        }
      }
      else {
LAB_00507af1:
        if (cVar6 != '\0') {
          if (iVar9 == 1) {
            FUN_005a4420();
          }
          FUN_00507280(local_18,local_1c[1],param_1[bVar2 + 0x22]);
        }
      }
      local_18 = FUN_0057ce10(DAT_00735720,local_1c[4],0,local_18,0xffffffff);
    } while (local_18 != 0);
  }
  if (local_1c[6] != 0) {
    for (iVar9 = FUN_0057ce10(local_1c[6],uVar3,0,0,0xffffffff); iVar9 != 0;
        iVar9 = FUN_0057ce10(local_1c[6],uVar3,0,iVar9,0xffffffff)) {
      if (DAT_00745e40 == 2) {
        uVar17 = 0;
        if (DAT_0073766c != 0) {
          puVar18 = (uint *)(DAT_00737668 + 0x24);
          do {
            if ((puVar18[-1] == 1) && (*puVar18 == (uint)*(byte *)(iVar9 + 0x11))) {
              if (*(char *)(uVar17 * 0x34 + 0x30 + DAT_00737668) != '\0') goto LAB_00507bff;
              break;
            }
            uVar17 = uVar17 + 1;
            puVar18 = puVar18 + 0xd;
          } while (uVar17 < DAT_0073766c);
        }
LAB_00507cd5:
        if ((*(byte *)(iVar9 + 0x11) < 2) ||
           ((cVar6 = FUN_00507e10(param_1), cVar6 == '\0' &&
            (((DAT_00735ec1 != '\0' || (DAT_007677ac != 0)) ||
             (cVar6 = FUN_005a3570(&DAT_0075f344), cVar6 != '\0')))))) goto LAB_00507bff;
      }
      else {
        if (DAT_00745e40 != 1) goto LAB_00507cd5;
        FUN_005a4420();
LAB_00507bff:
        FUN_00507280(iVar9,local_1c[1],param_1[*(byte *)(iVar9 + 0x11) + 0x22]);
      }
    }
  }
  if (DAT_00735724 == 0xc) {
    for (puVar14 = (undefined4 *)param_1[0x11]; puVar14 != param_1 + 0x11;
        puVar14 = (undefined4 *)*puVar14) {
      if (puVar14[3] == DAT_00745b80) goto LAB_00507d80;
    }
  }
  else {
    for (puVar14 = (undefined4 *)param_1[0x11]; puVar14 != param_1 + 0x11;
        puVar14 = (undefined4 *)*puVar14) {
      if (puVar14[3] == (&DAT_00745b6c)[local_1c[4]]) goto LAB_00507d80;
    }
  }
LAB_00507c6f:
  param_1[0x10] = param_1[0x11];
LAB_00507c75:
  FUN_004f8960();
  FUN_00507ec0(param_1);
  FUN_00504450();
  FUN_004ad7b0(local_1c[1]);
  *(undefined1 *)(param_1 + 8) = 1;
  ExceptionList = local_10;
  return;
LAB_00507d80:
  if (puVar14 != (undefined4 *)0x0) {
    for (puVar11 = (undefined4 *)param_1[0x11]; puVar11 != param_1 + 0x11;
        puVar11 = (undefined4 *)*puVar11) {
      if ((undefined4 *)puVar11[2] == puVar14) {
        param_1[0x10] = puVar11;
        goto LAB_00507c75;
      }
    }
    param_1[0x10] = (undefined4 *)param_1[0x11];
    goto LAB_00507c75;
  }
  goto LAB_00507c6f;
}
