/* Decompiled from Speed.exe @ 0050f780 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_0050f780(int param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
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
  if (param_2 < 0x9120409f) {
    if (param_2 != 0x9120409e) {
      if (param_2 == 0xc407210) {
        cVar1 = FUN_0050ed90(param_1);
        cVar2 = FUN_0050ee10();
        if (cVar1 != '\0') {
          local_10 = 0;
          local_c = 0;
          local_2c = 0x76d94941;
          local_24 = 0xf0aadebb;
          local_28 = 0x639;
          local_1c = 0;
          local_20 = 0x541389e5;
          local_18 = 0;
          local_14 = 0xb8a7c6cc;
          FUN_004dc6e0(&local_2c,"GenericDialog.fng",*(undefined4 *)(param_1 + 0xc));
          return;
        }
        if (cVar2 == '\0') {
          return;
        }
        local_10 = 0;
        local_c = 0;
        local_1c = 0;
        local_18 = 0;
        local_2c = 0x39223856;
        local_24 = 0x2f6484d0;
        local_28 = 0x639;
        local_20 = 0x541389e5;
        local_14 = 0xb8a7c6cc;
        FUN_004dc6e0(&local_2c,"GenericDialog.fng",*(undefined4 *)(param_1 + 0xc));
        return;
      }
      if (param_2 == 0x2f6484d0) {
        FUN_005044b0(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0xc),0);
        if (DAT_00745e40 == 1) {
          FUN_005a2620();
        }
        iVar3 = FUN_0051be80();
        if (iVar3 != -1) {
          *(uint *)(&DAT_00760158 + iVar3 * 4) = *(uint *)(&DAT_00760158 + iVar3 * 4) | 3;
        }
        FUN_0050f200(param_1);
        *(undefined1 *)(param_1 + 0x8c) = 1;
        return;
      }
      if (param_2 != 0x911ab364) {
        return;
      }
      FUN_0050f170(param_1);
      return;
    }
  }
  else if (param_2 != 0xb5971bf1) {
    if (param_2 == 0xc98356ba) {
      FUN_004f89d0();
      iVar3 = local_8;
      FUN_004f7d30();
      if (*(char *)(iVar3 + 0x8c) == '\0') {
        return;
      }
      FUN_004f6360(*(undefined4 *)(iVar3 + 0xc));
      return;
    }
    if (param_2 != 0xf0aadebb) {
      return;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0xc);
    if (*(char *)(iVar3 + 0x10) == '\x05') {
      FUN_005044b0(iVar3,0);
    }
    FUN_005044b0(iVar3,0);
    *(undefined1 *)(param_1 + 0x8c) = 1;
    return;
  }
  FUN_0050eee0(param_2);
  return;
}

