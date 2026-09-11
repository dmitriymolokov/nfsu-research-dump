/* Decompiled from Speed.exe @ 00501340 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_00501340(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  piVar2 = (int *)(iVar1 + 8);
  if (*piVar2 != 0x52676b50) {
    while (piVar2 != (int *)(*(int *)(iVar1 + 4) + 8 + iVar1)) {
      piVar2 = (int *)((int)piVar2 + piVar2[1] + 8);
      if (*piVar2 == 0x52676b50) {
        FUN_005024b0(param_2,piVar2 + 2,1);
        return 1;
      }
    }
    if (*piVar2 != 0x52676b50) {
      return 1;
    }
  }
  FUN_005024b0(param_2,piVar2 + 2,1);
  return 1;
}

