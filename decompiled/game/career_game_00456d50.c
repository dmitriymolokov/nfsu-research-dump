/* Decompiled from Speed.exe @ 00456d50 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00456d50(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EDI;
  float10 fVar4;
  
  if (*(int *)(*(int *)(*(int *)(unaff_EDI + 0x1d4) + 0x1c) + 0xe4) != 0) {
    FUN_005791c0();
  }
  if (*(int *)(*(int *)(*(int *)(unaff_EDI + 0x1d4) + 0x1c) + 0xe4) != 0) {
    FUN_005791c0();
  }
  puVar1 = (undefined4 *)FUN_00578730();
  iVar2 = FUN_00578730();
  uVar3 = FUN_00564db0(*puVar1,*(undefined4 *)(iVar2 + 4));
  fVar4 = (float10)FUN_0057a820(uVar3);
  FUN_00456de0((float)fVar4);
  return;
}

