/* spd-match: far pct=9.96 M4.0.2-CE */
/* Decompiled from Speed.exe @ 004e3320 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */
#include "ghidra_compat.h"

extern int DAT_006f1dd8;
extern int DAT_006fa1a0;
extern unsigned char *DAT_007356a8;
extern int DAT_00735ddc;
extern int DAT_00735de8;
extern int DAT_00735dec;
extern int DAT_00745b6c;
extern unsigned char *DAT_00745b70;
extern int DAT_00745b74;
extern unsigned char *DAT_00745b78;

void FUN_004e3320(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  if (param_2 < 0x9120409f) {
    if (param_2 == 0x9120409e) {
      DAT_00735dec = DAT_00735dec + -1;
      if (DAT_00735dec < 0) {
        DAT_00735dec = 0;
      }
      FUN_004e3060();
      FUN_004e3160(param_1);
      return;
    }
    if (param_2 < 0x7b8dd23f) {
      if (param_2 == 0x7b8dd23e) {
        switch((int)DAT_006fa1a0) {
        case 0x1f:
          break;
        case 0x20:
          break;
        case 0x21:
          break;
        case 0x22:
          break;
        }
        FUN_005044b0(0,1);
        FUN_005044b0(0,1);
        FUN_005044b0(0,1);
        FUN_005044b0(0,1);
        FUN_005044b0(0,0);
        return;
      }
      if (param_2 == 0xc407210) {
        switch(DAT_00735dec) {
        case 0:
          DAT_006fa1a0 = 0x22;
          break;
        case 1:
          DAT_006fa1a0 = 0x21;
          break;
        case 2:
          DAT_006fa1a0 = 0x20;
          break;
        case 3:
          DAT_006fa1a0 = 0x1f;
        }
        if ((&DAT_00745b6c)[DAT_006fa1a0] == 0) {
          DAT_00735ddc = 0;
          FUN_00504320(*(undefined4 *)(param_1 + 0xc));
          FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
          return;
        }
        local_34 = 0;
        local_30 = 0;
        local_50 = 0x897dc3d1;
        local_48 = 0x4f022d6c;
        local_4c = 0x62ac06db;
        local_40 = 0x7b8dd23e;
        local_44 = 0x7758f62d;
        local_3c = 0xed716986;
        local_38 = 0xb8a7c6cc;
        FUN_004dc6e0(&local_50,"GenericDialog.fng",*(undefined4 *)(param_1 + 0xc));
        return;
      }
      if (param_2 == 0x4f022d6c) {
        DAT_00735ddc = 0;
        FUN_00504320(*(undefined4 *)(param_1 + 0xc));
        iVar2 = FUN_004f65d0();
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x1c) = 0xff;
        }
        FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
        return;
      }
    }
    else if (param_2 == 0x911ab364) {
      FUN_004f6a10("MU_HorizontalBrowserBack.fng",1);
      FUN_004e2940(param_1);
      return;
    }
  }
  else if (param_2 < 0xc519bfc3) {
    bVar4 = param_2 == 0xc519bfc1;
    if (param_2 < 0xc519bfc1) {
      if (param_2 == 0xb5971bf1) {
        DAT_00735dec = DAT_00735dec + 1;
        if (3 < DAT_00735dec) {
          DAT_00735dec = 3;
        }
        FUN_004e3060();
        FUN_004e3160(param_1);
        return;
      }
      if (param_2 == 0xc519bfc0) {
        switch(DAT_00735dec) {
        case 0:
          DAT_006fa1a0 = 0x22;
          break;
        case 1:
          DAT_006fa1a0 = 0x21;
          break;
        case 2:
          DAT_006fa1a0 = 0x20;
          break;
        case 3:
          DAT_006fa1a0 = 0x1f;
        }
        iVar2 = (&DAT_00745b6c)[DAT_006fa1a0];
        DAT_00735ddc = 3;
        if (iVar2 == 0) {
          if ((DAT_006f1dd8 != 0) && (*(int **)(DAT_007356a8 + 0xc0) != (int *)0x0)) {
            (**(code **)(**(int **)(DAT_007356a8 + 0xc0) + 0x14))(7);
            return;
          }
        }
        else {
          uVar5 = 0;
          FUN_00567c70(0);
          iVar3 = FUN_0057cc70(uVar5);
          if (0 < iVar3) {
            if ((DAT_006f1dd8 != 0) && (*(int **)(DAT_007356a8 + 0xbc) != (int *)0x0)) {
              (**(code **)(**(int **)(DAT_007356a8 + 0xbc) + 0x14))(0x16);
            }
            DAT_00735de8 = iVar2;
            FUN_00504320(*(undefined4 *)(param_1 + 0xc));
            FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
            return;
          }
          if ((DAT_006f1dd8 != 0) && (*(int **)(DAT_007356a8 + 0xc0) != (int *)0x0)) {
            (**(code **)(**(int **)(DAT_007356a8 + 0xc0) + 0x14))(7);
            return;
          }
        }
      }
    }
    else {
      FUN_004f6c30("LayerHighlight",1);
      iVar2 = 0;
      param_2 = 0;
      switch(DAT_00735dec) {
      case 0:
        param_2 = 0x22;
        iVar2 = 0x36;
        break;
      case 1:
        param_2 = 0x21;
        iVar2 = 0x32;
        break;
      case 2:
        param_2 = 0x20;
        iVar2 = 0x2e;
        break;
      case 3:
        param_2 = 0x1f;
        iVar2 = 0x2a;
      }
      if (bVar4) {
        local_8 = param_2 + 1;
        iVar3 = iVar2 + 4;
      }
      else {
        local_8 = param_2 + -1;
        iVar3 = iVar2 + -4;
      }
      if (local_8 < 0x1f) {
        local_8 = 0x22;
      }
      else if (0x22 < local_8) {
        local_8 = 0x1f;
      }
      if (iVar3 < 0x2a) {
        iVar3 = 0x36;
      }
      else if (0x36 < iVar3) {
        iVar3 = 0x2a;
      }
      local_18 = (&DAT_00745b6c)[param_2];
      local_2c = (&DAT_00745b6c)[local_8];
      if ((local_18 != 0) || (local_2c != 0)) {
        local_c = *(undefined4 *)(&DAT_00745b70 + iVar2 * 4);
        local_10 = (&DAT_00745b74)[iVar2];
        local_14 = *(undefined4 *)(&DAT_00745b78 + iVar2 * 4);
        local_1c = (&DAT_00745b6c)[iVar3];
        local_20 = *(undefined4 *)(&DAT_00745b70 + iVar3 * 4);
        local_28 = *(undefined4 *)(&DAT_00745b78 + iVar3 * 4);
        local_24 = (&DAT_00745b74)[iVar3];
        FUN_005044b0((&DAT_00745b6c)[iVar2],1);
        FUN_005044b0(local_c,1);
        FUN_005044b0(local_10,1);
        FUN_005044b0(local_14,1);
        FUN_005044b0(local_18,0);
        FUN_005044b0(local_1c,1);
        FUN_005044b0(local_20,1);
        FUN_005044b0(local_24,1);
        FUN_005044b0(local_28,1);
        FUN_005044b0(local_2c,0);
        return;
      }
    }
  }
  else if (param_2 == 0xc98356ba) {
    FUN_004e3060();
    FUN_004e3160(param_1);
    FUN_004e31c0();
    FUN_004f7d30();
    FUN_004e3960();
    iVar2 = 0;
    while (cVar1 = FUN_004f7f10(param_1), cVar1 == '\0') {
      iVar2 = iVar2 + 1;
      if (3 < iVar2) {
        return;
      }
    }
    if (iVar2 != *(int *)(param_1 + 0x50)) {
      DAT_00735dec = iVar2;
      FUN_004e3060();
      FUN_004e3160(param_1);
      *(int *)(param_1 + 0x50) = iVar2;
    }
  }
  return;
}

