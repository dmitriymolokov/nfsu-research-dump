/* spd-match: far pct=7.09 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2446 */
#include "ghidra_compat.h"

int __cdecl FUN_004c96c0(...);
int __cdecl FUN_004dc6e0(...);
int __cdecl FUN_004dcbe0(...);
int __cdecl FUN_004f7d30(...);
int __cdecl FUN_004f89d0(...);
int __cdecl FUN_005044b0(...);
int __cdecl FUN_00507020(...);
int __cdecl FUN_00511d40(...);
int __cdecl FUN_00512500(...);
int __cdecl FUN_00512550(...);
int __cdecl FUN_005125f0(...);
int __cdecl FUN_00512690(...);
extern int DAT_006fb02c;
extern int DAT_00735750;
extern int DAT_00735754;
extern int DAT_0073575c;
extern int DAT_00735e84;
extern int DAT_0073ad3c;
extern int DAT_00744b88;
extern int DAT_00745b6c;
extern int DAT_0074810c;
extern void LAB_00512aeb(...);

struct ThisCallBox {
  void FUN_00512900(uint param_2);
};
void ThisCallBox::FUN_00512900(uint param_2) {
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((unsigned int)(param_2) < 0x9120409f) {
    if (param_2 == 0x9120409e) {
LAB_00512aeb:
      FUN_005125f0();
      return;
    }
    if ((unsigned int)(param_2) < 0x7a45b5c6) {
      if (param_2 == 0x7a45b5c5) {
        *(undefined1 *)(((int)this) + 0x90) = 1;
        *(undefined1 *)(((int)this) + 0x92) = 1;
        return;
      }
      if (param_2 == 0xc407210) {
        iVar3 = *(int *)(((int)this) + 0x40);
        if (*(char *)(*(int *)(((int)this) + 0x58) + 0x18) == '\0') {
          iVar1 = *(int *)(iVar3 + 8);
          if (iVar1 == DAT_00744b88) {
            uVar4 = *(undefined4 *)(((int)this) + 0xc);
            local_38 = 0x7a45b5c5;
            local_30 = 0x7a45b5c5;
          }
          else {
            iVar2 = FUN_00511d40();
            iVar3 = *(int *)(iVar3 + 0x10);
            if (*(char *)(iVar3 + 0xc) == '\0') {
              iVar3 = *(int *)(iVar3 + 0x18);
            }
            else {
              iVar3 = *(int *)(iVar3 + 0x14);
            }
            uVar4 = *(undefined4 *)(((int)this) + 0xc);
            if ((&DAT_00745b6c)[*(int *)(iVar2 + 0xc) + (int)DAT_00735750] == iVar3) {
              local_10 = 0x639;
              local_14 = 0x368294c0;
              local_c = 0;
              FUN_004dcbe0(&local_14,"GenericOKDialog.fng",uVar4);
              return;
            }
            local_38 = 0x76d94941;
            local_30 = 0x5583d1ce;
            DAT_00735754 = iVar1;
          }
          local_1c = 0;
          local_18 = 0;
          local_34 = 0x639;
          local_28 = 0;
          local_2c = 0x541389e5;
          local_24 = 0;
          local_20 = 0xb8a7c6cc;
          FUN_004dc6e0(&local_38,"GenericDialog.fng",uVar4);
          return;
        }
      }
      else if (param_2 == 0x5583d1ce) {
        FUN_00512500(((int)this));
        *(undefined1 *)(((int)this) + 0x91) = 1;
        *(undefined1 *)(((int)this) + 0x92) = 1;
        return;
      }
    }
    else if (param_2 == 0x911ab364) {
      FUN_00507020(((int)this));
      return;
    }
  }
  else if ((unsigned int)(param_2) < 0xc98356bb) {
    if (param_2 == 0xc98356ba) {
      FUN_004f89d0();
      DAT_00735e84 = 1;
      DAT_006fb02c = 0;
      DAT_0074810c = DAT_0073ad3c;
      FUN_00512690(((int)this));
      FUN_004f7d30();
      if (*(char *)(((int)this) + 0x92) != '\0') {
        FUN_00507020(((int)this));
      }
      DAT_0073575c = ((int)DAT_0073575c) + 1;
      if ((*(char *)(((int)this) + 0x93) != '\0') && (0xf < (int)DAT_0073575c)) {
        if (*(int *)(*(int *)(((int)this) + 0x40) + 0x10) != 0) {
          FUN_00512500(((int)this));
          *(undefined1 *)(((int)this) + 0x93) = 0;
          DAT_0073575c = 0;
          return;
        }
        FUN_00512550(((int)this));
        *(undefined1 *)(((int)this) + 0x93) = 0;
        DAT_0073575c = 0;
        return;
      }
    }
    else {
      if (param_2 == 0xb5971bf1) goto LAB_00512aeb;
      if (param_2 == 0xc519bfc0) {
        iVar3 = *(int *)(((int)this) + 0x40);
        iVar1 = *(int *)(iVar3 + 0x10);
        if (iVar1 != 0) {
          *(bool *)(iVar1 + 0xc) = *(char *)(iVar1 + 0xc) == '\0';
          if (*(char *)(*(int *)(iVar3 + 0x10) + 0xc) == '\0') {
            uVar4 = 0x4c75717a;
          }
          else {
            uVar4 = 0x54c56cbe;
          }
          FUN_004c96c0(uVar4);
          FUN_00512500(((int)this));
          return;
        }
      }
    }
  }
  else if (param_2 == 0xe148eaa6) {
    FUN_005044b0(0,0);
    FUN_005044b0(0,0);
    FUN_005044b0(0,0);
    FUN_005044b0(0,0);
    FUN_005044b0(0,0);
    FUN_005044b0(0,0);
  }
  return;
}
