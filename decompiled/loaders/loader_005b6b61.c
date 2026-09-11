/* Decompiled from Speed.exe @ 005b6b61 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005b6b61(uint param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_4 != 0) {
    uVar1 = *(uint *)(param_1 + 0x14);
    param_1 = 4;
    if (uVar1 < 5) {
      param_1 = uVar1;
    }
    do {
      uVar3 = 0;
      if (param_1 != 0) {
        do {
          iVar2 = FUN_005b5dbd(param_2,*(undefined4 *)(param_3 + uVar3 * 4));
          if (iVar2 < 0) {
            return;
          }
          param_2 = *(int *)(param_2 + 0xc);
          uVar3 = uVar3 + 1;
        } while (uVar3 < param_1);
      }
      if (uVar3 < uVar1) {
        iVar2 = uVar1 - uVar3;
        do {
          iVar2 = iVar2 + -1;
          param_2 = *(int *)(param_2 + 0xc);
        } while (iVar2 != 0);
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 0x10;
    } while (param_4 != 0);
  }
  return;
}

