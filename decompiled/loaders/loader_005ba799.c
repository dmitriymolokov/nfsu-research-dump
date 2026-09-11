/* Decompiled from Speed.exe @ 005ba799 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005ba799(undefined4 param_1,int param_2)

{
  int iVar1;
  
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          if (param_2 == 0) {
            return 1;
          }
          iVar1 = *(int *)(param_2 + 4);
          if (iVar1 != 1) break;
          iVar1 = FUN_005ba799(*(undefined4 *)(param_2 + 8));
          if (iVar1 == 0) {
            return 0;
          }
          param_2 = *(int *)(param_2 + 0xc);
        }
        if (iVar1 != 5) break;
        param_2 = *(int *)(param_2 + 0x18);
      }
      if (iVar1 != 7) break;
      param_2 = *(int *)(param_2 + 0x10);
    }
    if (iVar1 == 8) break;
    if (iVar1 != 10) {
      FUN_005ba278(param_1,0,0,"internal error: unknown node");
      return 0;
    }
    param_2 = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x10) < 0) {
    return 0;
  }
  if (2 < *(int *)(param_2 + 0x10)) {
    return 0;
  }
  return 1;
}

