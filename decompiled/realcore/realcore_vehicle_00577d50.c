/* Decompiled from Speed.exe @ 00577d50 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int __fastcall FUN_00577d50(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar1 = *(int *)(param_2 + 0x2c);
  while( true ) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + -4;
    }
    if (param_2 == -0x2c) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_2 + 0x28;
    }
    if (iVar1 == iVar2) break;
    if (*(int *)(iVar1 + 0x10) == unaff_ESI) {
      return iVar1;
    }
    iVar1 = *(int *)(iVar1 + 4);
  }
  return 0;
}

