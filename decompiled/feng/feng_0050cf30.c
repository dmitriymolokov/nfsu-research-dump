/* Decompiled from Speed.exe @ 0050cf30 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_0050cf30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_00735740 = 0;
  DAT_00745e44 = 0;
  FUN_00504390();
  iVar1 = DAT_0073578c;
  uVar3 = *(undefined4 *)(param_1 + 0xc);
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

