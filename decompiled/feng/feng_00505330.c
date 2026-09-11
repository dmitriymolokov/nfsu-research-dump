/* Decompiled from Speed.exe @ 00505330 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_00505330(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 local_3c;
  int local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = DAT_00744ff8;
  if (*(char *)(param_1 + 0x88) == '\0') {
    if (param_2 < 0xaabbccde) {
      if (param_2 == 0xaabbccdd) {
        FUN_004acce0();
        FUN_004acb90();
        DAT_00744ff8 = uVar1;
        FUN_004ac5a0(uVar1,0,&DAT_00745000);
        FUN_004ac5a0(DAT_00744ff8,0,&DAT_00745720);
        FUN_00504890(0);
        return;
      }
      if (param_2 < 0x12342221) {
        if (param_2 != 0x12342220) {
          if (param_2 == 0xc407210) {
            FUN_00505200();
            return;
          }
          if (param_2 != 0x12341110) {
            return;
          }
        }
      }
      else {
        if (param_2 != 0x911ab364) {
          if (param_2 != 0x9120409e) {
            return;
          }
          goto LAB_005053e5;
        }
        cVar2 = FUN_004c9570();
        if (cVar2 != '\0') {
          FUN_004c96f0(0x12341110,1);
          return;
        }
      }
      *(undefined1 *)(param_1 + 0x88) = 1;
      return;
    }
    if (param_2 < 0xc519bfc4) {
      if (param_2 == 0xc519bfc3) {
        FUN_004f8340(*(undefined4 *)(param_1 + 0xc));
        FUN_004b9240();
        if (DAT_00777b4c == 1) {
          local_38 = -0x45ad421f;
        }
        else {
          iVar3 = FUN_00567da0();
          local_38 = (-(uint)(iVar3 != 0) & 0xe5c4c152) + 0x73a2dbf9;
        }
        local_18 = 1;
        local_3c = 0x169268;
        local_10 = 0;
        local_c = 0;
        local_14 = 0x639;
        FUN_004dcfd0(&local_3c,*(undefined4 *)(param_1 + 0xc));
        return;
      }
      if (param_2 == 0xb5971bf1) {
LAB_005053e5:
        FUN_00505130(param_2,param_3);
        return;
      }
      if ((param_2 == 0xc519bfc0) && (DAT_00745e40 != 1)) {
        local_c = 0;
        local_8 = 0;
        local_28 = 0x76f0458f;
        local_24 = 0xf770;
        local_20 = 0xaabbccdd;
        local_1c = 0x61c;
        local_18 = 0;
        local_14 = 0;
        local_10 = 0xb8a7c6cd;
        FUN_004dc6e0(&local_28,"GenericDialog.fng",*(undefined4 *)(param_1 + 0xc));
        return;
      }
    }
    else if (param_2 == 0xc98356ba) {
      FUN_004f89d0();
      FUN_004f7d30();
      if (DAT_00745e40 == 1) {
        FUN_004c96c0(0xd0687426);
      }
    }
  }
  else if ((param_2 == 0xc98356ba) &&
          ((iVar3 = FUN_004f3f90(&DAT_00746104), iVar3 == 0 || (*(int *)(iVar3 + 0x18) == 0)))) {
    FUN_00505290(param_1);
    *(undefined1 *)(param_1 + 0x88) = 0;
    return;
  }
  return;
}

