/* Decompiled from Speed.exe @ 0057a5f0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_0057a5f0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int unaff_EDI;
  
  iVar4 = *(int *)(*(int *)(unaff_EDI + 0x1d4) + 0x1c);
  if (*(int *)(iVar4 + 0xe4) != 0) {
    FUN_005791c0();
  }
  fVar1 = *(float *)(iVar4 + 0x98);
  fVar2 = *(float *)(iVar4 + 0x94);
  fVar3 = *(float *)(iVar4 + 0x90);
  if (*(int *)(*(int *)(*(int *)(unaff_EDI + 0x1d4) + 0x1c) + 0xe4) != 0) {
    FUN_005791c0();
  }
  FUN_00429c50(SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3));
  return;
}

