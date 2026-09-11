/* Decompiled from Speed.exe @ 004596b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004596b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = *(int *)(*(int *)(param_2 + 0x1d4) + 0x1c);
  if (*(int *)(iVar2 + 0xe4) != 0) {
    FUN_005791c0();
  }
  iVar1 = *(int *)(*(int *)(param_2 + 0x1d4) + 0x1c);
  if (*(int *)(iVar1 + 0xe4) != 0) {
    FUN_005791c0();
  }
  iVar2 = iVar2 + 0x90;
  iVar1 = iVar1 + 0x40;
  fVar3 = (float10)FUN_00457520(iVar1,iVar2);
  FUN_00459710((float)fVar3,iVar1,iVar2);
  return;
}

