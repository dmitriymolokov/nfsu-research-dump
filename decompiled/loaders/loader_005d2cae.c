/* Decompiled from Speed.exe @ 005d2cae */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d2cae(int param_1,uint param_2,float *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_4 != 0) {
    if (param_3 == (float *)0x0) {
      local_8 = 0x8876086c;
    }
    else {
      iVar3 = FUN_005d1d40(param_2,1,0);
      if (iVar3 != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar3 + 4) * 4);
        if (*(int *)(iVar1 + 0x38) == 0) {
          iVar7 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        piVar5 = (int *)(*(int *)(iVar1 + 0x24) + *(int *)(iVar3 + 8) + iVar7);
        if ((((piVar5[4] != 0) && (*(int *)(iVar3 + 0x18) == -1)) && (param_4 <= (uint)piVar5[4]))
           && (piVar5[1] == 1)) {
          iVar7 = *piVar5;
          uVar2 = piVar5[5];
          if (*(int *)(iVar1 + 0x38) == 0) {
            iVar6 = *(int *)(param_1 + 0x2c);
          }
          else {
            iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 8);
          }
          iVar6 = *(int *)(iVar1 + 0x28) + *(int *)(iVar3 + 0xc) + iVar6;
          param_2 = 4;
          if (uVar2 < 5) {
            param_2 = uVar2;
          }
          pfVar4 = param_3;
          for (iVar3 = (param_4 & 0xfffffff) << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar4 = 0.0;
            pfVar4 = pfVar4 + 1;
          }
          for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined1 *)pfVar4 = 0;
            pfVar4 = (float *)((int)pfVar4 + 1);
          }
          if (iVar7 == 1) {
            do {
              if (param_2 != 0) {
                pfVar4 = param_3;
                uVar8 = param_2;
                do {
                  *pfVar4 = (float)(*(int *)((int)pfVar4 + (iVar6 - (int)param_3)) != 0);
                  pfVar4 = pfVar4 + 1;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              param_3 = param_3 + 4;
              iVar6 = iVar6 + uVar2 * 4;
              param_4 = param_4 - 1;
            } while (param_4 != 0);
            return 0;
          }
          if (iVar7 == 2) {
            do {
              if (param_2 != 0) {
                pfVar4 = param_3;
                uVar8 = param_2;
                do {
                  *pfVar4 = (float)*(int *)((int)pfVar4 + (iVar6 - (int)param_3));
                  pfVar4 = pfVar4 + 1;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              param_3 = param_3 + 4;
              iVar6 = iVar6 + uVar2 * 4;
              param_4 = param_4 - 1;
            } while (param_4 != 0);
            return 0;
          }
          if (iVar7 == 3) {
            do {
              if (param_2 != 0) {
                pfVar4 = param_3;
                uVar8 = param_2;
                do {
                  *pfVar4 = *(float *)((iVar6 - (int)param_3) + (int)pfVar4);
                  pfVar4 = pfVar4 + 1;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              param_3 = param_3 + 4;
              iVar6 = iVar6 + uVar2 * 4;
              param_4 = param_4 - 1;
            } while (param_4 != 0);
            return 0;
          }
        }
      }
      local_8 = 0x8876086c;
    }
  }
  return local_8;
}

