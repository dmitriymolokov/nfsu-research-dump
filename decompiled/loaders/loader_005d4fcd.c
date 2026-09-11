/* Decompiled from Speed.exe @ 005d4fcd */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d4fcd(int param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
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
          iVar5 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        piVar4 = (int *)(*(int *)(iVar1 + 0x24) + *(int *)(iVar3 + 8) + iVar5);
        if ((((piVar4[4] != 0) && (*(int *)(iVar3 + 0x18) == -1)) && (param_4 <= (uint)piVar4[4]))
           && (((-1 < piVar4[1] && (piVar4[1] < 4)) && ((piVar4[5] == 1 && (piVar4[6] == 1)))))) {
          if (*(int *)(iVar1 + 0x38) == 0) {
            iVar5 = *(int *)(param_1 + 0x2c);
          }
          else {
            iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 8);
          }
          iVar2 = *piVar4;
          iVar5 = *(int *)(iVar1 + 0x28) + *(int *)(iVar3 + 0xc) + iVar5;
          if (iVar2 == 1) {
            if (param_4 == 0) {
              return 0;
            }
            iVar5 = iVar5 - (int)param_3;
            do {
              *param_3 = (uint)(*(int *)((int)param_3 + iVar5) != 0);
              param_3 = param_3 + 1;
              param_4 = param_4 - 1;
            } while (param_4 != 0);
            return 0;
          }
          if (iVar2 == 2) {
            if (param_4 == 0) {
              return 0;
            }
            iVar5 = iVar5 - (int)param_3;
            do {
              *param_3 = (uint)(*(int *)((int)param_3 + iVar5) != 0);
              param_3 = param_3 + 1;
              param_4 = param_4 - 1;
            } while (param_4 != 0);
            return 0;
          }
          if (iVar2 == 3) {
            for (; param_4 != 0; param_4 = param_4 - 1) {
              iVar3 = __ftol();
              *param_3 = (uint)(iVar3 != 0);
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

