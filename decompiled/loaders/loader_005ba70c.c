/* Decompiled from Speed.exe @ 005ba70c */
/* Module: Loader */
/* Ghidra DecompileAll */


uint __thiscall FUN_005ba70c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          if (param_2 == 0) {
            return 0;
          }
          iVar1 = *(int *)(param_2 + 4);
          if (iVar1 != 1) break;
          iVar1 = FUN_005ba70c(*(undefined4 *)(param_2 + 8));
          if (iVar1 != 0) {
            return 1;
          }
          param_2 = *(int *)(param_2 + 0xc);
        }
        if (iVar1 != 5) break;
        param_2 = *(int *)(param_2 + 0x18);
      }
      if (iVar1 != 7) break;
      param_2 = *(int *)(param_2 + 0x10);
    }
    if (iVar1 == 8) {
      return *(uint *)(param_2 + 0x20) & 0x200;
    }
    if (iVar1 != 10) break;
    param_2 = *(int *)(param_2 + 0x20);
  }
  FUN_005ba278(param_1,0,0,"internal error: unknown node");
  return 0;
}

