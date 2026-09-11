/* spd-match: far pct=11.52 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2106 */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_00401bf0(...);
int __cdecl FUN_00495f00(...);
int __cdecl FUN_00495f70(...);
int __cdecl FUN_00495fc0(...);
int __cdecl FUN_004d7a30(...);
int __cdecl FUN_004d7af0(...);
int __cdecl FUN_004d7fe0(...);
int __cdecl FUN_004d8270(...);
int __cdecl FUN_004d82f0(...);
int __cdecl FUN_004d8370(...);
int __cdecl FUN_004d8420(...);
int __cdecl FUN_004d8500(...);
int __cdecl FUN_004d8600(...);
int __cdecl FUN_004daf10(...);
int __cdecl FUN_004db8a0(...);
int __cdecl FUN_004dba50(...);
int __cdecl FUN_004dbad0(...);
int __cdecl FUN_004dbc70(...);
int __cdecl FUN_004dbf90(...);
int __cdecl FUN_004dc280(...);
int __cdecl FUN_004dc3a0(...);
int __cdecl FUN_004dc3f0(...);
int __cdecl FUN_004dc550(...);
int __cdecl FUN_004dc6e0(...);
int __cdecl FUN_004f65d0(...);
int __cdecl FUN_005044b0(...);
int __cdecl FUN_00504890(...);
int __cdecl FUN_0051c770(...);
extern int DAT_00735718;
extern int DAT_00735ddc;
extern int DAT_00735e12;
extern int DAT_00735e14;
extern int DAT_0073ad3c;
extern int DAT_00745e40;
extern int DAT_0074696c;
extern int _DAT_006cc984;
extern int _DAT_006cca38;
extern void LAB_004db2f2(...);
extern void LAB_004db30a(...);
extern void LAB_004db5d2(...);

struct ThisCallBox {
  void FUN_004dafa0(uint param_2, undefined4 param_3);
};
void ThisCallBox::FUN_004dafa0(uint param_2, undefined4 param_3) {
  int param_1 = (int)this;
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_8 = param_1;
  if (0x911ab364 < param_2) {
    if (0xb5971bf1 < param_2) {
      if (param_2 < 0xc519bfc1) {
        return;
      }
      if (0xc519bfc2 < param_2) {
        if (param_2 != 0xc98356ba) {
          return;
        }
        if ((_DAT_006cc984 < (float)(DAT_0073ad3c - *(int *)(param_1 + 0xafc)) * _DAT_006cca38) &&
           (*(char *)(param_1 + 0xb00) == '\0')) {
          FUN_004daf10();
          *(undefined1 *)(local_8 + 0xb00) = 1;
        }
        FUN_004dc3f0();
        iVar10 = local_8;
        if (*(int *)(local_8 + 0xb28) != *(int *)(local_8 + 0x58)) {
          uVar6 = FUN_004d7a30(&DAT_0074696c);
          FUN_00495f00(uVar6);
          iVar7 = *(int *)(iVar10 + 0xb28);
          if (((-1 < iVar7) && (iVar8 = FUN_00401bf0(), iVar7 < iVar8)) &&
             (iVar7 = FUN_004dc550(), iVar10 = local_8, iVar7 != 0)) {
            uVar6 = FUN_004d7af0(&DAT_0074696c);
            FUN_00495f00(uVar6);
            iVar10 = local_8;
          }
          *(undefined4 *)(iVar10 + 0x58) = *(undefined4 *)(iVar10 + 0xb28);
        }
        cVar5 = FUN_004d8270();
        if (cVar5 == '\0') {
          FUN_00495fc0();
        }
        else {
          FUN_00495f70();
        }
        cVar5 = FUN_004d82f0();
        if (cVar5 == '\0') {
          FUN_00495fc0();
        }
        else {
          FUN_00495f70();
        }
        if (*(char *)(iVar10 + 0x54) == '\0') {
          return;
        }
        FUN_004dba50();
        return;
      }
      iVar10 = *(int *)(param_1 + 0xb34);
      if (*(int *)(param_1 + 0xb20) * iVar10 == 1) {
        return;
      }
      if (DAT_00735e14 != '\0') {
        return;
      }
      iVar7 = *(int *)(param_1 + 0xb28);
      DAT_00735e14 = 1;
      if (param_2 == 0xc519bfc1) {
        *(int *)(param_1 + 0xb28) = iVar7 + -1;
        if (iVar7 + -1 < 0) {
          *(int *)(param_1 + 0xb28) = iVar10 + -1;
        }
      }
      else {
        *(int *)(param_1 + 0xb28) = iVar7 + 1;
        if (iVar10 <= iVar7 + 1) {
          *(undefined4 *)(param_1 + 0xb28) = 0;
        }
      }
      puVar9 = *(undefined4 **)(param_1 + 0xb2c);
      iVar10 = 0;
      if (*(int *)(param_1 + 0xb28) != 0) {
        do {
          if (puVar9 == (undefined4 *)(param_1 + 0xb2c)) break;
          puVar9 = (undefined4 *)*puVar9;
          iVar10 = iVar10 + 1;
        } while (iVar10 != *(int *)(param_1 + 0xb28));
      }
      *(undefined4 *)
       (param_1 + 0xb78 + (*(int *)(param_1 + 0xb20) * iVar7 + *(int *)(param_1 + 0xb24)) * 4) =
           *(undefined4 *)(param_1 + 0xb0c);
      *(undefined4 *)
       (param_1 + 0xb38 + (*(int *)(param_1 + 0xb20) * iVar7 + *(int *)(param_1 + 0xb24)) * 4) =
           *(undefined4 *)(param_1 + 0xb10);
      iVar10 = *(int *)(param_1 + 0xb24) + *(int *)(param_1 + 0xb28) * *(int *)(param_1 + 0xb20);
      *(undefined4 *)(param_1 + 0xb0c) = *(undefined4 *)(param_1 + 0xb78 + iVar10 * 4);
      *(undefined4 *)(param_1 + 0xb10) = *(undefined4 *)(param_1 + 0xb38 + iVar10 * 4);
      FUN_004dbc70(param_1,*(undefined4 *)(param_1 + 0xb14),*(undefined4 *)(param_1 + 0xb18));
      FUN_004dbf90();
      *(undefined1 *)(param_1 + 0xb00) = 0;
      *(int *)(param_1 + 0xafc) = DAT_0073ad3c;
      FUN_004db8a0();
      DAT_00735e14 = 0;
      FUN_0051c770();
      return;
    }
    if (((param_2 != 0xb5971bf1) && (param_2 != 0x911c0a4b)) && (param_2 != 0x9120409e)) {
      return;
    }
LAB_004db5d2:
    FUN_004dc280(param_3);
    *(undefined1 *)(local_8 + 0xb00) = 0;
    *(int *)(local_8 + 0xafc) = DAT_0073ad3c;
    FUN_004db8a0();
    return;
  }
  if (param_2 == 0x911ab364) {
    iVar10 = *(int *)(param_1 + 0xb24) + -1;
    if (-1 < iVar10) {
      *(undefined4 *)
       (param_1 + 0xb78 +
       (*(int *)(param_1 + 0xb28) * *(int *)(param_1 + 0xb20) + *(int *)(param_1 + 0xb24)) * 4) =
           *(undefined4 *)(param_1 + 0xb0c);
      *(undefined4 *)
       (param_1 + 0xb38 +
       (*(int *)(param_1 + 0xb28) * *(int *)(param_1 + 0xb20) + *(int *)(param_1 + 0xb24)) * 4) =
           *(undefined4 *)(param_1 + 0xb10);
      iVar10 = *(int *)(param_1 + 0xb28) * *(int *)(param_1 + 0xb20) + iVar10;
      *(undefined4 *)(param_1 + 0xb0c) = *(undefined4 *)(param_1 + 0xb78 + iVar10 * 4);
      *(undefined4 *)(param_1 + 0xb10) = *(undefined4 *)(param_1 + 0xb38 + iVar10 * 4);
      *(int *)(param_1 + 0xb24) = *(int *)(param_1 + 0xb24) + -1;
      FUN_004dbf90();
      *(undefined1 *)(param_1 + 0xb00) = 0;
      *(int *)(param_1 + 0xafc) = DAT_0073ad3c;
      FUN_004db8a0();
      return;
    }
    FUN_00504890(0);
    FUN_004dba50();
    return;
  }
  if (0x565ae191 < param_2) {
    if (param_2 != 0x72619778) {
      if (param_2 != 0x80154340) {
        return;
      }
      if (*(int *)(param_1 + 0xb1c) != 6) {
        return;
      }
      *(int *)(param_1 + 0xb18) = *(int *)(param_1 + 0xb18) + -1;
      return;
    }
    goto LAB_004db5d2;
  }
  if (param_2 == 0x565ae191) {
    if ((*(int *)(param_1 + 0xb1c) == 6) && (DAT_00735ddc == 3)) {
      FUN_005044b0(*(undefined4 *)(param_1 + 0x40),1);
      FUN_005044b0(*(undefined4 *)(param_1 + 0x44),1);
      FUN_005044b0(*(undefined4 *)(param_1 + 0x48),1);
      FUN_005044b0(*(undefined4 *)(param_1 + 0x4c),0);
      iVar10 = *(int *)(param_1 + 0xb24) + 1;
      *(int *)(param_1 + 0xb24) = iVar10;
      if (iVar10 < *(int *)(param_1 + 0xb20)) {
        uVar6 = FUN_004d7a30(&DAT_0074696c);
        FUN_00495f00(uVar6);
        return;
      }
      *(undefined1 *)(param_1 + 0x54) = 1;
      return;
    }
    FUN_004daf10();
    *(undefined1 *)(local_8 + 0x54) = 1;
    return;
  }
  if (param_2 != 0xc407210) {
    if (param_2 == 0x12345678) {
      if ((*(int *)(param_1 + 0xb1c) == 6) && (DAT_00735ddc == 3)) {
        FUN_005044b0(*(undefined4 *)(param_1 + 0x40),1);
        FUN_005044b0(*(undefined4 *)(param_1 + 0x44),1);
        FUN_005044b0(*(undefined4 *)(param_1 + 0x48),1);
        FUN_005044b0(*(undefined4 *)(param_1 + 0x4c),0);
      }
      else {
        FUN_004daf10();
      }
      iVar10 = FUN_004f65d0();
      if (iVar10 != 0) {
        *(undefined4 *)(iVar10 + 0x1c) = 0xff;
      }
      FUN_004dba50();
      return;
    }
    if (param_2 != 0x1c4c008a) {
      return;
    }
    if ((*(int *)(param_1 + 0xb1c) == 6) && (DAT_00735ddc == 3)) {
      FUN_004d8420();
      FUN_004d8420();
      FUN_004d8420();
      FUN_004d8420();
      FUN_005044b0(*(undefined4 *)(param_1 + 0x40),1);
      FUN_005044b0(*(undefined4 *)(param_1 + 0x44),1);
      FUN_005044b0(*(undefined4 *)(param_1 + 0x48),1);
      FUN_005044b0(*(undefined4 *)(param_1 + 0x4c),0);
      iVar10 = *(int *)(param_1 + 0xb24) + 1;
      *(int *)(param_1 + 0xb24) = iVar10;
      if (iVar10 < *(int *)(param_1 + 0xb20)) {
        uVar6 = FUN_004d7a30(&DAT_0074696c);
        FUN_00495f00(uVar6);
      }
    }
    else {
      FUN_004dbad0();
      FUN_004d8420();
      FUN_004daf10();
      param_1 = local_8;
    }
    FUN_004d8500(param_1);
    FUN_004d8600(param_1);
    FUN_004dbf90();
    return;
  }
  iVar10 = *(int *)(param_1 + 0xb24);
  iVar7 = FUN_004dbad0();
  if (iVar10 + 1 < *(int *)(param_1 + 0xb20)) {
    *(undefined4 *)(param_1 + 0x40 + iVar10 * 4) = *(undefined4 *)(iVar7 + 0x10);
    FUN_004daf10();
    iVar8 = local_8;
    *(undefined4 *)
     (local_8 + 0xb78 +
     (*(int *)(local_8 + 0xb28) * *(int *)(local_8 + 0xb20) + *(int *)(local_8 + 0xb24)) * 4) =
         *(undefined4 *)(local_8 + 0xb0c);
    *(undefined4 *)
     (local_8 + 0xb38 +
     (*(int *)(local_8 + 0xb28) * *(int *)(local_8 + 0xb20) + *(int *)(local_8 + 0xb24)) * 4) =
         *(undefined4 *)(local_8 + 0xb10);
    iVar10 = *(int *)(local_8 + 0xb28) * *(int *)(local_8 + 0xb20) + iVar10 + 1;
    *(undefined4 *)(local_8 + 0xb0c) = *(undefined4 *)(local_8 + 0xb78 + iVar10 * 4);
    *(undefined4 *)(local_8 + 0xb10) = *(undefined4 *)(local_8 + 0xb38 + iVar10 * 4);
    FUN_004dbf90();
    *(undefined1 *)(iVar8 + 0xb00) = 0;
    *(int *)(iVar8 + 0xafc) = DAT_0073ad3c;
    FUN_004db8a0();
    if ((DAT_00735718 == 5) && (DAT_00735ddc == 3)) {
      iVar10 = *(int *)(iVar8 + 0xb18) + 1;
      *(int *)(iVar8 + 0xb18) = iVar10;
      FUN_004dbc70(iVar8,*(undefined4 *)(iVar8 + 0xb14),iVar10);
    }
    FUN_004dc3a0();
    FUN_004dbf90();
    param_1 = local_8;
  }
  else {
    *(undefined4 *)(param_1 + 0x40 + iVar10 * 4) = *(undefined4 *)(iVar7 + 0x10);
    if ((DAT_00735718 == 5) && (DAT_00735ddc == 3)) {
      *(int *)(param_1 + 0xb18) = *(int *)(param_1 + 0xb18) + 1;
    }
  }
  cVar4 = DAT_00735e12;
  cVar5 = *(char *)(*(int *)(iVar7 + 0x10) + 0x11);
  if ((DAT_00735e12 == '\0') && (cVar3 = FUN_004d7fe0(), cVar3 == '\0')) {
    bVar2 = false;
LAB_004db2f2:
    cVar4 = FUN_004d8370();
    if ((cVar4 == '\0') && (DAT_00745e40 == 1)) {
      bVar1 = true;
      goto LAB_004db30a;
    }
  }
  else {
    bVar2 = true;
    if (cVar4 == '\0') goto LAB_004db2f2;
  }
  bVar1 = false;
LAB_004db30a:
  if (bVar2) {
    local_10 = 0;
    local_c = 0;
    local_1c = 0x80154340;
    local_18 = 0x80154340;
    local_2c = 0x1a99a17f;
    local_24 = 0x565ae191;
    local_28 = 0x639;
    local_20 = 0x541389e5;
    local_14 = 0xb8a7c6cc;
    FUN_004dc6e0(&local_2c,"GenericDialog.fng",*(undefined4 *)(param_1 + 0xc));
    return;
  }
  if (!bVar1) {
    return;
  }
  local_10 = 0;
  local_c = 0;
  local_2c = 0x39223856;
  if (cVar5 == '\x02') {
    local_2c = 0x8b02a985;
  }
  else if (cVar5 == '\x03') {
    local_2c = 0x77447e66;
  }
  local_1c = 0x80154340;
  local_18 = 0x80154340;
  local_24 = 0x1c4c008a;
  local_28 = 0x639;
  local_20 = 0x541389e5;
  local_14 = 0xb8a7c6cc;
  FUN_004dc6e0(&local_2c,"GenericDialog.fng",*(undefined4 *)(param_1 + 0xc));
  return;
}
