/* Decompiled from Speed.exe @ 005d53ae */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d53ae(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 4) = 0;
  **(undefined4 **)(param_1 + 0x90) = 3;
  *(uint *)(*(int *)(param_1 + 0x90) + 0x10) = param_4;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x14) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x18) = 1;
  if ((param_4 != 0) && (param_3 == 0)) {
    return 0x8876086c;
  }
  iVar2 = FUN_005d1d40(param_2,1,1);
  if ((iVar2 != 0) &&
     (iVar8 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar2 + 4) * 4),
     (*(uint *)(iVar8 + 0x20) & 2) == 0)) {
    if (*(int *)(iVar8 + 0x38) == 0) {
      iVar7 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    piVar3 = (int *)(*(int *)(iVar8 + 0x24) + *(int *)(iVar2 + 8) + iVar7);
    if ((((piVar3[4] != 0) && (*(int *)(iVar2 + 0x18) == -1)) && (param_4 <= (uint)piVar3[4])) &&
       (((-1 < piVar3[1] && (piVar3[1] < 4)) && ((piVar3[5] == 1 && (piVar3[6] == 1)))))) {
      if (*(int *)(iVar8 + 0x38) == 0) {
        iVar7 = *(int *)(param_1 + 0x2c);
      }
      else {
        iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 8);
      }
      iVar1 = *piVar3;
      puVar6 = (uint *)(*(int *)(iVar8 + 0x28) + *(int *)(iVar2 + 0xc) + iVar7);
      if (iVar1 == 1) {
        if (param_4 != 0) {
          param_3 = param_4;
          do {
            iVar8 = __ftol();
            *puVar6 = (uint)(iVar8 != 0);
            puVar6 = puVar6 + 1;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
      }
      else if (iVar1 == 2) {
        if (param_4 != 0) {
          param_3 = param_4;
          do {
            uVar4 = __ftol();
            *puVar6 = uVar4;
            puVar6 = puVar6 + 1;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
      }
      else {
        if (iVar1 != 3) {
          return 0x8876086c;
        }
        if (param_4 != 0) {
          iVar8 = param_3 - (int)puVar6;
          do {
            *puVar6 = *(uint *)(iVar8 + (int)puVar6);
            puVar6 = puVar6 + 1;
            param_4 = param_4 - 1;
          } while (param_4 != 0);
        }
      }
      uVar5 = FUN_005d02d7(iVar2);
      return uVar5;
    }
  }
  return 0x8876086c;
}

