/* Decompiled from Speed.exe @ 00507070 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_00507070(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_8;
  
  local_8 = param_1;
  if (param_2 < 0x9120409f) {
    if (param_2 != 0x9120409e) {
      if (param_2 != 0xc407210) {
        if (param_2 != 0x911ab364) {
          return;
        }
        FUN_00507020(param_1);
        return;
      }
      if (*(char *)(*(int *)(param_1 + 0x40) + 0x15) != '\0') {
        return;
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 8);
      FUN_00505630();
      iVar2 = FUN_00506eb0(param_1);
      if (iVar2 < 1) {
        return;
      }
      cVar1 = FUN_00506160();
      if (((cVar1 != '\0') && (-1 < iVar3)) && (iVar3 < 3)) {
        FUN_004b9240();
        local_14 = 0;
        local_10 = 0;
        local_3c = 0x16a674de;
        local_1c = 1;
        local_40 = 0xdd070611;
        local_18 = 0x639;
        FUN_004dcfd0(&local_40,*(undefined4 *)(param_1 + 0xc));
        FUN_00506f30();
        return;
      }
      iVar3 = FUN_004b2330();
      if (iVar3 != 0) {
        FUN_004b0150();
      }
      FUN_00506f30();
      return;
    }
  }
  else if (param_2 != 0xb5971bf1) {
    if (param_2 != 0xc98356ba) {
      return;
    }
    FUN_004f89d0();
    FUN_004f7d30();
    return;
  }
  FUN_00506e10();
  return;
}

