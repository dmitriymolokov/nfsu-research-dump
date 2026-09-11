/* Decompiled from Speed.exe @ 004ec550 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004ec550(undefined4 param_1,char param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((*(char *)(param_3 + 0x50) != '\0') || (param_2 != '\0')) {
    puVar3 = *(undefined4 **)(param_3 + 0x1fc);
    for (iVar2 = 0x27; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  FUN_004f6570();
  uVar1 = *(undefined4 *)(param_3 + 0xc);
  if (DAT_0073578c != 0) {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = 0;
      if (*(int *)(iVar2 + 0x18) != 0) {
        uVar1 = FUN_004f09b0(*(int *)(iVar2 + 0x18));
      }
    }
  }
  DAT_007363a8 = 0;
  DAT_0070108d = 1;
  _DAT_00735ba4 = 0;
  return uVar1;
}

