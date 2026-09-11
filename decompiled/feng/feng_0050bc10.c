/* Decompiled from Speed.exe @ 0050bc10 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0050bc10(int param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
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
  
  iVar6 = DAT_006f889c;
  local_8 = param_1;
  if (param_2 < 0x9120409f) {
    if (param_2 != 0x9120409e) {
      if (param_2 == 0xc407210) {
        cVar2 = FUN_0050bbc0(param_1,DAT_006f889c);
        cVar3 = FUN_0050bb70(param_1,iVar6);
        if (cVar3 != '\0') {
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
        iVar6 = *(int *)(param_1 + 0x40);
        if (DAT_00745e40 == 1) {
          FUN_005a25a0();
        }
        FUN_005047d0();
        iVar8 = DAT_006f889c;
        iVar5 = *(int *)(iVar6 + 0xc);
        if (*(char *)(iVar5 + 6) != '\0') {
          iVar7 = 0;
          do {
            uVar4 = (uint)*(byte *)(iVar5 + 7 + iVar7);
            uVar1 = *(uint *)(&DAT_00760158 + uVar4 * 4);
            *(uint *)(&DAT_00760158 + uVar4 * 4) = uVar1 | 1;
            *(uint *)(&DAT_00760158 + uVar4 * 4) = uVar1 | 3;
            if (iVar8 == 3) {
              switch(uVar4) {
              case 6:
                *(undefined1 *)(DAT_00744ff8 + 0xc) = 0;
                break;
              default:
                *(undefined1 *)(DAT_00744ff8 + 0xc) = 0xff;
                break;
              case 0x14:
                *(undefined1 *)(DAT_00744ff8 + 0xc) = 1;
                break;
              case 0x16:
                *(undefined1 *)(DAT_00744ff8 + 0xc) = 2;
                break;
              case 0x2e:
                *(undefined1 *)(DAT_00744ff8 + 0xc) = 3;
                break;
              case 0x32:
                *(undefined1 *)(DAT_00744ff8 + 0xc) = 4;
              }
            }
            iVar5 = *(int *)(iVar6 + 0xc);
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)(uint)*(byte *)(iVar5 + 6));
        }
        FUN_00504890(0);
        iVar6 = local_8;
        iVar5 = FUN_004f65d0();
        if (iVar5 != 0) {
          *(undefined4 *)(iVar5 + 0x1c) = 0xff;
        }
        FUN_00507020(iVar6);
        return;
      }
      if (param_2 != 0x911ab364) {
        return;
      }
      FUN_00504890(0);
      FUN_00507020(param_1);
      return;
    }
  }
  else if (param_2 != 0xb5971bf1) {
    if (param_2 == 0xc98356ba) {
      iVar6 = *(int *)(param_1 + 0x88);
      if (((iVar6 != 0) && (iVar6 != 0x7fffffff)) &&
         (_DAT_006cc7bc < (float)(DAT_0073ad3c - iVar6) * _DAT_006cca38)) {
        *(undefined4 *)(param_1 + 0x88) = 0;
        FUN_0050b9e0(param_1);
      }
      FUN_004f89d0();
      FUN_004f7d30();
      return;
    }
    if (param_2 != 0xf0aadebb) {
      return;
    }
    FUN_005047d0();
    if (DAT_006f889c == 3) {
      iVar6 = *(int *)(param_1 + 0x40);
      iVar5 = *(int *)(iVar6 + 0xc);
      iVar8 = 0;
      if (*(char *)(iVar5 + 6) != '\0') {
        do {
          switch(*(undefined1 *)(iVar5 + 7 + iVar8)) {
          case 6:
            *(undefined1 *)(DAT_00744ff8 + 0xc) = 0;
            break;
          default:
            *(undefined1 *)(DAT_00744ff8 + 0xc) = 0xff;
            break;
          case 0x14:
            *(undefined1 *)(DAT_00744ff8 + 0xc) = 1;
            break;
          case 0x16:
            *(undefined1 *)(DAT_00744ff8 + 0xc) = 2;
            break;
          case 0x2e:
            *(undefined1 *)(DAT_00744ff8 + 0xc) = 3;
            break;
          case 0x32:
            *(undefined1 *)(DAT_00744ff8 + 0xc) = 4;
          }
          iVar5 = *(int *)(iVar6 + 0xc);
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)(uint)*(byte *)(iVar5 + 6));
      }
    }
    FUN_00504890(0);
    iVar6 = FUN_004f65d0();
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 0x1c) = 0xff;
    }
    FUN_00507020(param_1);
    return;
  }
  FUN_0050b8f0();
  return;
}

