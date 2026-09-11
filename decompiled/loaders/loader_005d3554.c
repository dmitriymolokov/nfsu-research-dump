/* Decompiled from Speed.exe @ 005d3554 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d3554(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = 0;
  if (param_4 != 0) {
    if (param_3 == 0) {
      uVar2 = 0x8876086c;
    }
    else {
      iVar3 = FUN_005d1d40(param_2,1,0);
      if (iVar3 != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar3 + 4) * 4);
        iVar5 = *(int *)(iVar1 + 0x38);
        if (iVar5 == 0) {
          iVar4 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        iVar4 = *(int *)(iVar1 + 0x24) + *(int *)(iVar3 + 8) + iVar4;
        if (((*(uint *)(iVar4 + 0x10) != 0) && (*(int *)(iVar3 + 0x18) == -1)) &&
           (param_4 <= *(uint *)(iVar4 + 0x10))) {
          if (*(int *)(iVar4 + 4) == 2) {
            if (iVar5 == 0) {
              iVar5 = *(int *)(param_1 + 0x2c);
            }
            else {
              iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 8);
            }
            uVar2 = FUN_005cc9cf(iVar4,*(int *)(iVar1 + 0x28) + *(int *)(iVar3 + 0xc) + iVar5,
                                 param_3,param_4);
            return uVar2;
          }
          if (*(int *)(iVar4 + 4) == 3) {
            if (iVar5 == 0) {
              iVar5 = *(int *)(param_1 + 0x2c);
            }
            else {
              iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 8);
            }
            uVar2 = FUN_005cc807(iVar4,*(int *)(iVar1 + 0x28) + *(int *)(iVar3 + 0xc) + iVar5,
                                 param_3,param_4);
            return uVar2;
          }
        }
      }
      uVar2 = 0x8876086c;
    }
  }
  return uVar2;
}

