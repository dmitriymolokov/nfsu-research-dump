/* Decompiled from Speed.exe @ 005b8c6d */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005b8c6d(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_4 != 0) {
    if ((param_3 != 0) && (iVar4 = FUN_005b7369(param_2,1), iVar4 != 0)) {
      iVar5 = *(int *)(*(int *)(iVar4 + 4) + 0x40) + *(int *)(param_1 + 0x118) +
              *(int *)(iVar4 + 0x18);
      uVar1 = *(uint *)(iVar5 + 0x10);
      if (((uVar1 != 0) &&
          (((*(int *)(iVar4 + 0x10) == -1 && (param_4 <= uVar1)) && (-1 < *(int *)(iVar5 + 4))))) &&
         (((*(int *)(iVar5 + 4) < 4 && (*(int *)(iVar5 + 0x14) == 1)) &&
          (*(int *)(iVar5 + 0x18) == 1)))) {
        iVar4 = *(int *)(iVar4 + 0x1c);
        uVar6 = 0;
        if (uVar1 == 0) {
          return 0;
        }
        do {
          if (iVar4 == 0) {
            return 0;
          }
          iVar5 = *(int *)(iVar4 + 8);
          iVar2 = *(int *)(iVar5 + 0x10);
          if (iVar2 == 0) {
            fVar3 = (float)(*(int *)(iVar5 + 0x18) != 0);
          }
          else if (iVar2 == 1) {
            fVar3 = (float)*(int *)(iVar5 + 0x18);
          }
          else if (iVar2 == 2) {
            fVar3 = (float)*(int *)(iVar5 + 0x18);
            if (*(int *)(iVar5 + 0x18) < 0) {
              fVar3 = fVar3 + _DAT_006cc858;
            }
          }
          else {
            if (iVar2 != 3) break;
            fVar3 = (float)*(double *)(iVar5 + 0x18);
          }
          *(float *)(param_3 + uVar6 * 4) = fVar3;
          iVar4 = *(int *)(iVar4 + 0xc);
          uVar6 = uVar6 + 1;
          if (uVar1 <= uVar6) {
            return 0;
          }
        } while( true );
      }
    }
    local_8 = 0x8876086c;
  }
  return local_8;
}

