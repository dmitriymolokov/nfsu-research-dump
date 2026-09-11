/* Decompiled from Speed.exe @ 0050b2d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0050b2d0(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
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
  
  iVar3 = DAT_0073578c;
  if (0xb5971bf1 < param_2) {
    if (param_2 == 0xc519bfc0) {
      if (((DAT_0073578c != 0) && (iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 != 0)) &&
         (*(int *)(iVar2 + 0x18) != 0)) {
        FUN_004eebf0(*(undefined4 *)(iVar3 + 8),*(int *)(iVar2 + 0x18));
      }
      iVar3 = FUN_004f3f90(&DAT_00746104);
      if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int **)(iVar3 + 0x14) != (int *)0x0)
         ) {
        (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0x2401cd38,0,0,*(int *)(iVar3 + 0x18));
      }
      FUN_00504320(*(undefined4 *)(param_1 + 0xc));
      iVar3 = DAT_0073578c;
      DAT_00745e4c = 0;
      if (((DAT_0073578c != 0) && (iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 != 0)) &&
         (*(int *)(iVar2 + 0x18) != 0)) {
        FUN_004f0800(*(undefined4 *)(iVar3 + 8),*(int *)(iVar2 + 0x18));
      }
    }
    else {
      if (param_2 == 0xc98356ba) {
        if (((*(int *)(param_1 + 0x88) != 0) && (*(int *)(param_1 + 0x88) != 0x7fffffff)) &&
           (_DAT_006cc7bc < (float)(DAT_0073ad3c - *(int *)(param_1 + 0x88)) * _DAT_006cca38)) {
          *(undefined4 *)(param_1 + 0x88) = 0;
          FUN_0050ada0(param_1);
        }
        FUN_004f89d0();
        FUN_004f7d30();
        return;
      }
      if (param_2 == 0xf0aadebb) {
        FUN_005047d0();
        FUN_0050ada0(param_1);
        return;
      }
    }
    return;
  }
  if (param_2 != 0xb5971bf1) {
    if (param_2 == 0xc407210) {
      FUN_004af5d0();
      iVar2 = DAT_006f889c;
      iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 8);
      *(int *)(param_1 + 0x94) = iVar3;
      if ((iVar3 == 0) && (*(int *)(&DAT_00745728 + iVar2 * 4) != 0)) {
        local_1c = 0;
        local_18 = 0;
        local_38 = 0x76d94941;
        local_30 = 0xf0aadebb;
        local_34 = 0x639;
        local_28 = 0;
        local_2c = 0x541389e5;
        local_24 = 0;
        local_20 = 0xb8a7c6cc;
        FUN_004dc6e0(&local_38,"GenericDialog.fng",*(undefined4 *)(param_1 + 0xc));
        return;
      }
      DAT_006f88a0 = iVar3;
      if ((((DAT_00745e40 != 1) || (iVar3 == 0)) ||
          (cVar1 = FUN_0050ab00(param_1,iVar2), cVar1 == '\0')) ||
         (*(int *)(&DAT_00745728 + iVar2 * 4) == iVar3)) {
        cVar1 = FUN_0050aa90(param_1,iVar2,iVar3);
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(&DAT_00745728 + iVar2 * 4) == iVar3) {
          local_10 = 0x639;
          local_14 = 0x368294c0;
          local_c = 0;
          FUN_004dcbe0(&local_14,"GenericOKDialog.fng",*(undefined4 *)(param_1 + 0xc));
          return;
        }
        cVar1 = FUN_0050ab90();
        if (cVar1 == '\0') {
          local_10 = 0x639;
          local_14 = 0x2c0344a3;
          local_c = 0;
          FUN_004dcbe0(&local_14,"GenericOKDialog.fng",*(undefined4 *)(param_1 + 0xc));
          return;
        }
        cVar1 = FUN_0050aac0(param_1,iVar2,iVar3);
        if (cVar1 == '\0') {
          local_14 = 0xe82e5ffb;
          if ((iVar3 != 2) && (iVar3 == 3)) {
            local_14 = 0xe82e5ffc;
          }
          local_10 = 0x639;
          local_c = 0;
          FUN_004dcbe0(&local_14,"GenericOKDialog.fng",*(undefined4 *)(param_1 + 0xc));
          return;
        }
      }
      FUN_0050b280();
      return;
    }
    if (param_2 == 0x911ab364) {
      FUN_00504890(0);
      FUN_0050b200(param_1);
      return;
    }
    if (param_2 != 0x9120409e) {
      return;
    }
  }
  FUN_0050ac50(param_2);
  return;
}

