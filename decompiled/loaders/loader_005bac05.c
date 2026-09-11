/* Decompiled from Speed.exe @ 005bac05 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005bac05(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          if (param_2 == 0) {
            return 0x80004005;
          }
          iVar1 = *(int *)(param_2 + 4);
          if (iVar1 != 1) break;
          uVar2 = FUN_005ba80b(*(undefined4 *)(param_2 + 8));
          if (param_3 < uVar2) {
            param_2 = *(int *)(param_2 + 8);
          }
          else {
            param_2 = *(int *)(param_2 + 0xc);
            param_3 = param_3 - uVar2;
          }
        }
        if (iVar1 != 5) break;
        param_2 = *(int *)(param_2 + 0x18);
      }
      if (iVar1 != 7) break;
      param_2 = *(int *)(param_2 + 0x10);
      uVar2 = FUN_005ba80b(param_2);
      if (uVar2 == 0) {
        return 0x80004005;
      }
      param_3 = param_3 % uVar2;
    }
    if (iVar1 == 8) {
      iVar1 = *(int *)(param_2 + 0x10);
      if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
        *(undefined4 *)(param_4 + 0x10) = 0;
      }
      else if (iVar1 == 3) {
        *(undefined4 *)(param_4 + 0x10) = 3;
      }
      *(undefined4 *)(param_4 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(param_4 + 0x18) = 1;
      *(undefined4 *)(param_4 + 0x1c) = 1;
      *(uint *)(param_4 + 0x20) = *(uint *)(param_2 + 0x20) & 0x200;
      return 0;
    }
    if (iVar1 != 10) break;
    param_2 = *(int *)(param_2 + 0x20);
  }
  FUN_005ba278(param_1,0,0,"internal error: unknown node");
  return 0;
}

