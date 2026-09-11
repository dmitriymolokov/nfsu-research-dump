/* Decompiled from Speed.exe @ 0050c530 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_0050c530(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_00504390();
  iVar1 = DAT_0073578c;
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  DAT_00735738 = 0;
  if (DAT_0073578c != 0) {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = 0;
      if (*(int *)(iVar2 + 0x18) != 0) {
        uVar3 = FUN_004f0800(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
      }
    }
  }
  return uVar3;
}

