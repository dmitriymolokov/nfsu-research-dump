/* Decompiled from Speed.exe @ 005bae82 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005bae82(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  while( true ) {
    if (iVar2 == 0) {
      return param_2;
    }
    iVar1 = *(int *)(iVar2 + 0x10);
    if (((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) break;
    iVar2 = *(int *)(iVar2 + 0x1c);
  }
  FUN_005ba1d9(param_1,param_1 + 0x20,0xbf8,"object literals are not allowed inside functions");
  return 0;
}

