/* spd-match: far pct=6.16 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_no_code */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f0800();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f5ed0();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f68a0();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ff030();
int __cdecl FUN_004ffb70();
extern int DAT_006b9172;
extern unsigned char *DAT_007070b0;
extern unsigned char *DAT_0071b7cc;
extern unsigned char *DAT_0071b7e4;
extern int DAT_0071b800;
extern int DAT_0071b808;
extern int DAT_00735710;
extern unsigned char *DAT_0073578c;
extern int DAT_00736344;
extern int DAT_00736504;
extern int DAT_00736508;
extern int DAT_00746104;
extern int DAT_0078dbdc;
extern unsigned char *DAT_0078dce4;
extern void LAB_00413baa(void);
extern void LAB_00413c8d(void);
extern void LAB_00413d37(void);
extern void LAB_00413d4e(void);
extern void LAB_00413d61(void);
extern void LAB_00413d6d(void);
extern void LAB_00413ec1(void);
extern void LAB_00413ed2(void);
int _param_2;

void FUN_00413a70(int param_1,char param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int *piVar9;
  uint uVar10;
  byte *pbVar11;
  undefined4 uVar12;
  int iVar13;
  bool bVar14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  undefined1 *local_4;
  
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(char *)(param_1 + 0x80) != '\0') {
    *(undefined4 *)(&DAT_0078dce4 + (&DAT_0071b808)[DAT_00736344 * 3] * 0x270) = 0;
    DAT_00736508 = 0;
    iVar3 = FUN_004f65d0();
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x1c) = 0xff;
    }
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  iVar3 = 0;
  puVar7 = &DAT_0071b800;
  local_10 = 0;
  local_8 = 0;
  local_c = &DAT_0071b800;
  local_4 = &DAT_0078dbdc;
  do {
    if (*(int *)(local_4 + -4) != -1) {
      switch(*local_4) {
      case 0x13:
        iVar4 = 1;
        break;
      case 0x14:
      case 0x15:
        iVar4 = 3;
        break;
      case 0x16:
        iVar4 = 2;
        break;
      default:
        iVar4 = 0;
      }
      if (iVar4 == 2) {
        uVar12 = 0x697d0d66;
        uVar5 = 2;
      }
      else if (iVar4 == 3) {
        uVar12 = 0x7b557ab8;
        uVar5 = 1;
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
      }
      else {
        uVar12 = 0x9024d262;
        uVar5 = 0;
      }
      *puVar7 = uVar5;
      uVar5 = (&DAT_0071b7cc)[iVar3];
      puVar7[2] = local_8;
      puVar7[1] = uVar5;
      uVar5 = *(undefined4 *)((&DAT_0071b7e4)[iVar3] + 0x10);
      if (((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
         (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
        if (DAT_0073578c != 0) {
          iVar3 = FUN_004ef050(uVar5);
          goto LAB_00413baa;
        }
      }
      else {
LAB_00413baa:
        if ((iVar3 != 0) && (*(int *)(iVar3 + 0x18) == 2)) {
          *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x400000;
          puVar7 = DAT_00735710;
          bVar14 = DAT_00735710 != (undefined4 *)0x0;
          *(undefined4 *)(iVar3 + 0x5c) = uVar12;
          if (bVar14) {
            (**(code **)*puVar7)(iVar3);
          }
          *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffd | 0x400000;
        }
      }
      iVar3 = local_10 + 1;
      puVar7 = local_c + 3;
      local_10 = iVar3;
      local_c = puVar7;
    }
    local_4 = local_4 + 0x270;
    local_8 = local_8 + 1;
  } while ((int)local_4 < 0x78ea7c);
  *(int *)(param_1 + 0x9c) = iVar3;
  iVar4 = DAT_0073578c;
  if (((param_2 == '\0') && (DAT_00736344 < iVar3)) ||
     (DAT_00736344 = -1, *(char *)(param_1 + 0x80) != '\0')) {
LAB_00413c8d:
    if (DAT_0073578c != 0) {
      FUN_004f5ed0(DAT_0073578c);
    }
  }
  else {
    DAT_00736344 = 0;
    if (DAT_0073578c != 0) {
      iVar3 = FUN_004f3f90(&DAT_00746104);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) {
        FUN_004f0800(*(undefined4 *)(iVar4 + 8),*(int *)(iVar3 + 0x18));
      }
      goto LAB_00413c8d;
    }
  }
  pcVar8 = "keyboard_config_title";
  iVar3 = -1;
  bVar2 = 0x6b;
  do {
    if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
      bVar2 = bVar2 - 0x20;
    }
    uVar10 = (uint)bVar2;
    bVar2 = pcVar8[1];
    iVar3 = iVar3 * 0x21 + uVar10;
    pcVar8 = pcVar8 + 1;
  } while (bVar2 != 0);
  iVar4 = DAT_0073578c;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_00413d4e:
    if ((iVar4 != 0) && (iVar6 = FUN_004ef050(iVar3), iVar6 != 0)) {
LAB_00413d61:
      if (*(int *)(iVar6 + 0x18) == 2) goto LAB_00413d6d;
    }
  }
  else {
    iVar6 = FUN_004f3f90(&DAT_00746104);
    iVar4 = DAT_0073578c;
    if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_00413d37:
      if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar6 == 0))
      goto LAB_00413d4e;
      goto LAB_00413d61;
    }
    if (DAT_0073578c != 0) {
      iVar13 = *(int *)(DAT_0073578c + 8);
      if ((iVar13 == 0) ||
         ((iVar6 = FUN_004fd1e0(iVar13 + 0xdc), iVar6 == 0 &&
          (iVar6 = FUN_004fd1e0(iVar13 + 0xec), iVar6 == 0)))) goto LAB_00413d4e;
      goto LAB_00413d37;
    }
  }
  iVar6 = 0;
LAB_00413d6d:
  uVar5 = *(undefined4 *)(&DAT_007070b0 + (&DAT_0071b800)[DAT_00736344 * 3] * 4);
  if (iVar6 != 0) {
    *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x400000;
    puVar7 = DAT_00735710;
    bVar14 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(iVar6 + 0x5c) = uVar5;
    if (bVar14) {
      (**(code **)*puVar7)(iVar6);
    }
    *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xfffffffd | 0x400000;
  }
  if (DAT_00736504 < 6) {
    _param_2 = DAT_00736504 * 4;
    do {
      pbVar11 = *(byte **)(*(int *)((int)&DAT_0071b7cc + _param_2) + 0x14);
      iVar3 = -1;
      if (pbVar11 != (byte *)0x0) {
        bVar2 = *pbVar11;
        while (bVar2 != 0) {
          if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
            bVar2 = bVar2 - 0x20;
          }
          iVar3 = iVar3 * 0x21 + (uint)bVar2;
          pbVar1 = pbVar11 + 1;
          pbVar11 = pbVar11 + 1;
          bVar2 = *pbVar1;
        }
      }
      if (((DAT_0073578c != 0) && (iVar4 = FUN_004f3f90(&DAT_00746104), iVar4 != 0)) &&
         (iVar4 = *(int *)(iVar4 + 0x18), iVar4 != 0)) {
        iVar6 = *(int *)(iVar4 + 0x88);
        iVar13 = 0;
        if (iVar6 != 0) {
          piVar9 = *(int **)(iVar4 + 0x84);
          do {
            if (*(int *)(*piVar9 + 0x10) == iVar3) {
              iVar13 = *piVar9;
            }
            piVar9 = piVar9 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          if (iVar13 != 0) {
            *(uint *)(iVar13 + 0x1c) = *(uint *)(iVar13 + 0x1c) | 0x4000000;
          }
        }
      }
      uVar5 = *(undefined4 *)(*(int *)((int)&DAT_0071b7e4 + _param_2) + 0x10);
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_00413ed2:
        if (DAT_0073578c != 0) {
          FUN_004ef050(uVar5);
        }
      }
      else {
        iVar3 = FUN_004f3f90(&DAT_00746104);
        if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x18), iVar3 == 0)) {
          if (DAT_0073578c != 0) {
            iVar4 = *(int *)(DAT_0073578c + 8);
            if ((iVar4 == 0) ||
               ((iVar3 = FUN_004fd1e0(iVar4 + 0xdc), iVar3 == 0 &&
                (iVar3 = FUN_004fd1e0(iVar4 + 0xec), iVar3 == 0)))) goto LAB_00413ed2;
            goto LAB_00413ec1;
          }
        }
        else {
LAB_00413ec1:
          if ((iVar3 == 0) || (iVar3 = FUN_004ffb70(), iVar3 == 0)) goto LAB_00413ed2;
        }
      }
      FUN_004f68a0(&DAT_006b9172);
      pcVar8 = "disabled";
      iVar3 = -1;
      bVar2 = 100;
      do {
        if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
          bVar2 = bVar2 - 0x20;
        }
        iVar3 = iVar3 * 0x21 + (uint)bVar2;
        bVar2 = pcVar8[1];
        pcVar8 = pcVar8 + 1;
      } while (bVar2 != 0);
      iVar4 = *(int *)((int)&DAT_0071b7cc + _param_2);
      for (iVar6 = *(int *)(iVar4 + 0x4c); (iVar6 != 0 && (*(int *)(iVar6 + 0x30) != iVar3));
          iVar6 = *(int *)(iVar6 + 4)) {
      }
      *(int *)(iVar4 + 0x54) = iVar6;
      if (iVar6 != 0) {
        FUN_004ff030(iVar4);
      }
      *(undefined4 *)(*(int *)(iVar4 + 0x54) + 0x10) = 0;
      pcVar8 = "disabled";
      iVar3 = -1;
      bVar2 = 100;
      do {
        if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
          bVar2 = bVar2 - 0x20;
        }
        iVar3 = iVar3 * 0x21 + (uint)bVar2;
        bVar2 = pcVar8[1];
        pcVar8 = pcVar8 + 1;
      } while (bVar2 != 0);
      iVar4 = *(int *)((int)&DAT_0071b7e4 + _param_2);
      for (iVar6 = *(int *)(iVar4 + 0x4c); (iVar6 != 0 && (*(int *)(iVar6 + 0x30) != iVar3));
          iVar6 = *(int *)(iVar6 + 4)) {
      }
      *(int *)(iVar4 + 0x54) = iVar6;
      if (iVar6 != 0) {
        FUN_004ff030(iVar4);
      }
      _param_2 = _param_2 + 4;
      *(undefined4 *)(*(int *)(iVar4 + 0x54) + 0x10) = 0;
    } while (_param_2 < 0x18);
  }
  return;
}
