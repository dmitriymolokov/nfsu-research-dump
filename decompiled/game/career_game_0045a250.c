/* Decompiled from Speed.exe @ 0045a250 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_0045a250(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EDI;
  float10 fVar5;
  
  iVar4 = *(int *)(*(int *)(unaff_EDI + 0x1d4) + 0x1c);
  if (*(int *)(iVar4 + 0xe4) != 0) {
    FUN_005791c0(iVar4);
  }
  if (*(int *)(*(int *)(*(int *)(unaff_EDI + 0x1d4) + 0x1c) + 0xe4) != 0) {
    FUN_005791c0();
  }
  puVar1 = (undefined4 *)FUN_00578730();
  iVar2 = FUN_00578730();
  uVar3 = FUN_00564db0(*puVar1,*(undefined4 *)(iVar2 + 4));
  iVar4 = iVar4 + 0x90;
  puVar1 = &DAT_007372a0;
  fVar5 = (float10)FUN_0057a820(iVar4,&DAT_007372a0,uVar3);
  FUN_0045a2f0((float)fVar5,iVar4,puVar1,uVar3);
  return;
}

