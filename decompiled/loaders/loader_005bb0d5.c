/* Decompiled from Speed.exe @ 005bb0d5 */
/* Module: Loader */
/* Ghidra DecompileAll */


bool FUN_005bb0d5(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  while( true ) {
    while( true ) {
      if (param_1 == 0) {
        return true;
      }
      iVar1 = *(int *)(param_1 + 4);
      if (iVar1 != 1) break;
      iVar1 = FUN_005bb0d5(*(undefined4 *)(param_1 + 8));
      if (iVar1 == 0) {
        return false;
      }
      param_1 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 == 0xd) {
      return *(int *)(param_1 + 0x10) != 6;
    }
    if (iVar1 != 0xc) {
      return true;
    }
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 < 0x14) break;
    if (iVar1 < 0x16) {
      return false;
    }
    if (iVar1 == 0x19) {
      return false;
    }
    if (iVar1 == 0x1a) {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 0x18);
      if (iVar1 < 0x47) {
        if (0x43 < iVar1) {
          return false;
        }
        if (iVar1 == 9) {
          return false;
        }
        if (iVar1 == 0x1a) {
          return false;
        }
        if (iVar1 == 0x28) {
          return false;
        }
        if (iVar1 == 0x3d) {
          return false;
        }
      }
      else if (0x47 < iVar1) {
        if (iVar1 < 0x4b) {
          return false;
        }
        if (0x4b < iVar1) {
          if (iVar1 < 0x4f) {
            return false;
          }
          if ((0x4f < iVar1) && (iVar1 < 0x53)) {
            return false;
          }
        }
      }
      iVar1 = *(int *)(param_1 + 0x24);
      iVar2 = FUN_005bb0d5(*(undefined4 *)(iVar1 + 8));
      if (iVar2 == 0) {
        return false;
      }
      uVar3 = *(undefined4 *)(iVar1 + 0xc);
      goto LAB_005bb1d4;
    }
    if (iVar1 != 0x1b) break;
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 == 0) {
      return false;
    }
    if (*(int *)(iVar1 + 4) != 0xc) {
      return false;
    }
    param_1 = *(int *)(iVar1 + 0x24);
  }
  iVar1 = FUN_005bb0d5(*(undefined4 *)(param_1 + 0x20));
  if (iVar1 == 0) {
    return false;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x24);
LAB_005bb1d4:
  iVar1 = FUN_005bb0d5(uVar3);
  if (iVar1 != 0) {
    return true;
  }
  return false;
}

