/* Decompiled from Speed.exe @ 0055e350 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int FUN_0055e350(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  
  iVar1 = FUN_00556770();
  iVar2 = FUN_00556890();
  if (iVar1 != iVar2) {
    do {
      if ((*(short *)(*(int *)(iVar1 + 0xc) + 0x6c) == param_1) &&
         (*(int *)(iVar1 + 0x18) == unaff_EBX)) {
        return iVar1;
      }
      iVar1 = FUN_00556770();
      iVar2 = FUN_00556890();
    } while (iVar1 != iVar2);
  }
  return 0;
}

