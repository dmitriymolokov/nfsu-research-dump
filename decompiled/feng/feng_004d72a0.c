/* Decompiled from Speed.exe @ 004d72a0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_004d72a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == 0x72619778) || (param_2 == -0x6ee3f5b5)) {
    FUN_004d7090(0x3f800000);
  }
  else if (param_2 == -0x367ca946) {
    if (*(int *)(param_1 + 0x58) != 0) {
      return;
    }
    FUN_004d7090(DAT_0073ad38);
    return;
  }
  iVar1 = DAT_0073578c;
  if ((((param_2 == -0x6ee54c9c) && (DAT_0073578c != 0)) &&
      (iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 != 0)) && (*(int *)(iVar2 + 0x18) != 0)) {
    FUN_004f0800(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
  }
  return;
}

