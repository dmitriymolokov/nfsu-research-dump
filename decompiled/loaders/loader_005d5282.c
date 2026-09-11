/* Decompiled from Speed.exe @ 005d5282 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d5282(int param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_4 != 0) {
    if (param_3 == (uint *)0x0) {
      local_8 = 0x8876086c;
    }
    else {
      iVar3 = FUN_005d1d40(param_2,1,0);
      if (iVar3 != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar3 + 4) * 4);
        if (*(int *)(iVar1 + 0x38) == 0) {
          iVar6 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        piVar5 = (int *)(*(int *)(iVar1 + 0x24) + *(int *)(iVar3 + 8) + iVar6);
        if ((((piVar5[4] != 0) && (*(int *)(iVar3 + 0x18) == -1)) && (param_4 <= (uint)piVar5[4]))
           && (((-1 < piVar5[1] && (piVar5[1] < 4)) && ((piVar5[5] == 1 && (piVar5[6] == 1)))))) {
          if (*(int *)(iVar1 + 0x38) == 0) {
            iVar6 = *(int *)(param_1 + 0x2c);
          }
          else {
            iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 8);
          }
          iVar2 = *piVar5;
          iVar6 = *(int *)(iVar1 + 0x28) + *(int *)(iVar3 + 0xc) + iVar6;
          if (iVar2 == 1) {
            if (param_4 == 0) {
              return 0;
            }
            iVar6 = iVar6 - (int)param_3;
            do {
              *param_3 = (uint)(*(int *)((int)param_3 + iVar6) != 0);
              param_3 = param_3 + 1;
              param_4 = param_4 - 1;
            } while (param_4 != 0);
            return 0;
          }
          if (iVar2 == 2) {
            if (param_4 == 0) {
              return 0;
            }
            iVar6 = iVar6 - (int)param_3;
            do {
              *param_3 = *(uint *)((int)param_3 + iVar6);
              param_3 = param_3 + 1;
              param_4 = param_4 - 1;
            } while (param_4 != 0);
            return 0;
          }
          if (iVar2 == 3) {
            for (; param_4 != 0; param_4 = param_4 - 1) {
              uVar4 = __ftol();
              *param_3 = uVar4;
              param_3 = param_3 + 1;
            }
            return 0;
          }
        }
      }
      local_8 = 0x8876086c;
    }
  }
  return local_8;
}

