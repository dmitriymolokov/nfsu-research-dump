/* Decompiled from Speed.exe @ 005ba894 */
/* Module: Loader */
/* Ghidra DecompileAll */


bool FUN_005ba894(int param_1,int param_2)

{
  int iVar1;
  
LAB_005ba8a1:
  while( true ) {
    if (param_1 == 0) {
      return param_2 == 0;
    }
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 != 1) break;
    if (param_2 == 0) {
      return false;
    }
    if (*(int *)(param_2 + 4) != 1) break;
    iVar1 = FUN_005ba894(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8));
    if (iVar1 == 0) {
      return false;
    }
    param_1 = *(int *)(param_1 + 0xc);
    param_2 = *(int *)(param_2 + 0xc);
  }
  if ((param_2 != 0) && (iVar1 == *(int *)(param_2 + 4))) {
    if (iVar1 == 5) {
      param_2 = *(int *)(param_2 + 0x18);
      param_1 = *(int *)(param_1 + 0x18);
      goto LAB_005ba8a1;
    }
    if (iVar1 == 7) {
      if (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14)) {
        param_2 = *(int *)(param_2 + 0x10);
        param_1 = *(int *)(param_1 + 0x10);
        goto LAB_005ba8a1;
      }
    }
    else {
      if (iVar1 == 8) {
        if (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10)) {
          return false;
        }
        if (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14)) {
          return false;
        }
        if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
          return false;
        }
        if (*(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x1c)) {
          return false;
        }
        return true;
      }
      if (iVar1 == 10) {
        param_2 = *(int *)(param_2 + 0x20);
        param_1 = *(int *)(param_1 + 0x20);
        goto LAB_005ba8a1;
      }
    }
  }
  return false;
}

