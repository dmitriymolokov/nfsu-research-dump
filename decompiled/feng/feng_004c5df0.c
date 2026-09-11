/* Decompiled from Speed.exe @ 004c5df0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_004c5df0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x10);
  DAT_0075f240 = 0;
  if (iVar2 == 0x14dd31) {
    DAT_0075f240 = 0;
  }
  else if (iVar2 == 0x16821e) {
    DAT_0075f240 = 2;
  }
  else if (iVar2 == 0x6baa2200) {
    DAT_0075f240 = 1;
  }
  piVar1 = *(int **)(*(int *)(param_2 + 0x40) + 8);
  iVar2 = *piVar1;
  FUN_005a0ce0();
  FUN_004dfa10();
  if (((((char)piVar1[0x2b] == '\0') || (iVar2 == 7)) || (iVar2 == 0xf)) || (iVar2 == 0x5c)) {
    uVar4 = FUN_004b5df0();
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    if (DAT_0073578c != 0) {
      iVar2 = FUN_004f3f90(&DAT_00746104);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) {
        FUN_004f09b0(*(int *)(iVar2 + 0x18));
      }
      iVar2 = DAT_0073578c;
      uVar4 = 0;
      if (DAT_0073578c != 0) {
        iVar3 = FUN_004f3f90(&DAT_00746104);
        uVar4 = 0;
        if ((iVar3 != 0) && (uVar4 = 0, *(int *)(iVar3 + 0x18) != 0)) {
          uVar4 = FUN_004f0800(*(undefined4 *)(iVar2 + 8),*(int *)(iVar3 + 0x18));
          return uVar4;
        }
      }
    }
  }
  return uVar4;
}

