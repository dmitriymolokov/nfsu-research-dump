/* Decompiled from Speed.exe @ 005ba5ee */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005ba5ee(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 1) {
    do {
      if (*(int *)(param_2 + 4) != 1) break;
      FUN_005ba5ee(*(undefined4 *)(param_2 + 8),param_3);
      param_2 = *(int *)(param_2 + 0xc);
    } while (param_2 != 0);
    if (param_2 == 0) {
      return 0;
    }
  }
  else if (iVar1 == 5) {
    param_2 = *(int *)(param_2 + 0x18);
  }
  else if (iVar1 == 7) {
    param_2 = *(int *)(param_2 + 0x10);
  }
  else {
    if (iVar1 == 8) {
      if (param_3 != 0) {
        *(byte *)(param_2 + 0x21) = *(byte *)(param_2 + 0x21) | 2;
        return 0;
      }
      *(byte *)(param_2 + 0x21) = *(byte *)(param_2 + 0x21) & 0xfd;
      return 0;
    }
    if (iVar1 != 10) {
      FUN_005ba278(param_1,0,0,"internal error: unknown node");
      return 0;
    }
    param_2 = *(int *)(param_2 + 0x20);
  }
  FUN_005ba5ee(param_2,param_3);
  return 0;
}

