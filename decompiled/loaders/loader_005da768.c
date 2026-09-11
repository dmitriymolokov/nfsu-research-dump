/* Decompiled from Speed.exe @ 005da768 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005da768(undefined4 param_1,int param_2)

{
  int iVar1;
  
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          if (param_2 == 0) {
            return 1;
          }
          iVar1 = *(int *)(param_2 + 4);
          if (iVar1 != 1) break;
          iVar1 = FUN_005da768(*(undefined4 *)(param_2 + 8));
          if (iVar1 == 0) {
            return 0;
          }
          param_2 = *(int *)(param_2 + 0xc);
        }
        if (iVar1 != 5) break;
        param_2 = *(int *)(param_2 + 0x18);
      }
      if (iVar1 != 7) break;
LAB_005da7a3:
      param_2 = *(int *)(param_2 + 0x10);
    }
    if (iVar1 == 8) {
      if ((-1 < *(int *)(param_2 + 0x10)) && (*(int *)(param_2 + 0x10) < 3)) {
        return 1;
      }
      return 0;
    }
    if (iVar1 != 10) {
      if (iVar1 != 0xc) {
        FUN_005d9de1(param_1,0,0,"internal error: unknown node");
        return 0;
      }
      goto LAB_005da7a3;
    }
    param_2 = *(int *)(param_2 + 0x20);
  } while( true );
}

