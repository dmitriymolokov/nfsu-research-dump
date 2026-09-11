/* Decompiled from Speed.exe @ 00551280 */
/* Module: FEng_FE */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00551280(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_768;
  undefined4 local_764;
  undefined4 local_75c;
  undefined4 local_758;
  undefined4 local_754;
  undefined4 local_750;
  undefined4 local_74c;
  undefined4 local_744;
  undefined4 local_740;
  undefined4 local_73c;
  undefined4 local_738;
  undefined1 local_730 [1836];
  
  if ((*(int *)(param_1 + 0x7a4) != 0) &&
     (cVar1 = FUN_00553b30(param_3,param_4,DAT_00734f68), cVar1 != '\0')) {
    DAT_007301c8 = 1;
    DAT_00734f68 = 0;
    return;
  }
  iVar2 = *(int *)(param_1 + 0x7a4);
  DAT_007301c8 = 0;
  if (((iVar2 != 0) && (*(char *)(iVar2 + 0x1c9) == '\x01')) &&
     ((param_2 == 0x406415e3 || ((0xdbb06160 < param_2 && (param_2 < 0xdbb06169)))))) {
    DAT_00734f68 = 1;
    return;
  }
  if (param_2 < 0xc519bfc0) {
    if (param_2 == 0xc519bfbf) {
      if (*(int *)(param_1 + 0x6c) != 1) {
        DAT_007301c8 = 0;
        return;
      }
      DAT_00777b58 = 0;
      FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
      return;
    }
    if (param_2 < 0x8d09b828) {
      if (param_2 == 0x8d09b827) {
        FUN_0054ad50(&LAB_00554230);
        return;
      }
      if (0x68c137bd < param_2) {
        if (param_2 == 0x72619778) {
          FUN_00550ba0();
          return;
        }
        if (param_2 != 0x8463b1e0) {
          if (param_2 != 0x88b44b70) {
            DAT_007301c8 = 0;
            return;
          }
          FUN_004ad780();
          local_768 = 0;
          local_764 = 0x8d09b827;
          local_75c = 0xc33fc7d3;
          local_750 = 0x639;
          local_74c = 0;
          local_758 = 0xc3430cd9;
          local_754 = 0;
          FUN_004eb950();
          return;
        }
        FUN_0054ad20();
        _DAT_00777b5c = 2;
        uVar3 = *(undefined4 *)(param_1 + 0xc);
        goto LAB_0055186b;
      }
      if (param_2 == 0x68c137bd) {
        if (iVar2 == 0) {
          DAT_007301c8 = 0;
          return;
        }
        FUN_00553a90(&DAT_00777c90);
        return;
      }
      if (param_2 == 0x14de0507) {
        if (iVar2 == 0) {
          DAT_007301c8 = 0;
          return;
        }
        if (*(char *)(iVar2 + 0x1c9) != '\x01') {
          *(undefined1 *)(iVar2 + 0x1c9) = 1;
          DAT_00734f68 = 1;
          return;
        }
        *(undefined1 *)(iVar2 + 0x1c9) = 0;
        return;
      }
      if (param_2 != 0x3d981880) {
        if (param_2 != 0x5b884e10) {
          DAT_007301c8 = 0;
          return;
        }
        _DAT_00777b5c = 3;
        FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
        return;
      }
      FUN_00417600();
      iVar2 = FUN_00549ea0(local_730);
      if (iVar2 != 0) {
        FUN_004b23b0(local_730,1);
        _DAT_00777b5c = 3;
        FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
        return;
      }
    }
    else {
      if (0x93ea5075 < param_2) {
        if (param_2 == 0xb5971bf1) {
          FUN_00551b90();
          *(undefined4 *)(param_1 + 0x7a8) = 0x9ccc9726;
          FUN_004c96c0(0xb3c3508e);
          return;
        }
        if (param_2 != 0xbde07ebd) {
          DAT_007301c8 = 0;
          return;
        }
        _DAT_00777b5c = 4;
        FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
        return;
      }
      if (param_2 != 0x93ea5075) {
        if (param_2 == 0x911ab364) {
          iVar2 = FUN_004f65d0();
          if (iVar2 != 0) {
            *(undefined4 *)(iVar2 + 0x1c) = 0;
          }
          FUN_0054ac00(&LAB_00554120);
          return;
        }
        if (param_2 != 0x911c0a4b) {
          if (param_2 != 0x9120409e) {
            DAT_007301c8 = 0;
            return;
          }
          FUN_00551b90();
          *(undefined4 *)(param_1 + 0x7a8) = 0x9d5e09c9;
          FUN_004c96c0(0xfc661e67);
          return;
        }
        FUN_00550ba0();
        return;
      }
    }
    FUN_0054bca0(&DAT_0073d868);
    return;
  }
  if (param_2 < 0xdbb06165) {
    if (param_2 == 0xdbb06164) {
      FUN_005519d0(param_1);
      return;
    }
    if (0xc98356ba < param_2) {
      if (param_2 == 0xdbb06161) {
        FUN_005519d0(param_1);
        return;
      }
      if (param_2 != 0xdbb06162) {
        if (param_2 != 0xdbb06163) {
          DAT_007301c8 = 0;
          return;
        }
        FUN_005519d0(param_1);
        return;
      }
      FUN_005519d0(param_1);
      return;
    }
    if (param_2 == 0xc98356ba) {
      if (*(int *)(param_1 + 0x6c) == 0) {
        FUN_00552610(param_1,0);
      }
      else {
        FUN_00552bb0(param_1,0);
      }
      iVar2 = *(int *)(param_1 + 0x7a4);
      if ((iVar2 != 0) && (*(char *)(iVar2 + 5) == '\0')) {
        FUN_005534a0(iVar2);
      }
      FUN_00551890();
      return;
    }
    if (param_2 != 0xc519bfc1) {
      if (param_2 == 0xc519bfc2) {
        FUN_00551b40(param_1);
        return;
      }
      if (param_2 != 0xc519bfc3) {
        DAT_007301c8 = 0;
        return;
      }
      FUN_004b9240();
      local_764 = *(undefined4 *)(param_1 + 0x7a8);
      local_744 = 1;
      local_768 = 0x169268;
      local_73c = 0;
      local_738 = 0;
      local_740 = 0x639;
      FUN_004dcfd0(&local_768,*(undefined4 *)(param_1 + 0xc));
      return;
    }
    FUN_00551b40(param_1);
    return;
  }
  if (param_2 < 0xdbb06169) {
    if (param_2 == 0xdbb06168) {
      FUN_005519d0(param_1);
      return;
    }
    if (param_2 == 0xdbb06165) {
      FUN_005519d0(param_1);
      return;
    }
    if (param_2 == 0xdbb06166) {
      FUN_005519d0(param_1);
      return;
    }
    if (param_2 != 0xdbb06167) {
      DAT_007301c8 = 0;
      return;
    }
    FUN_005519d0(param_1);
    return;
  }
  if (param_2 != 0xdeaddead) {
    if (param_2 != 0xf5058ca7) {
      DAT_007301c8 = 0;
      return;
    }
    _DAT_00777b5c = 1;
    FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
    return;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    DAT_007301c8 = 0;
    return;
  }
  FUN_004abde0();
  DAT_00777b58 = 1;
  uVar3 = *(undefined4 *)(param_1 + 0xc);
LAB_0055186b:
  FUN_004f6360(uVar3);
  return;
}

