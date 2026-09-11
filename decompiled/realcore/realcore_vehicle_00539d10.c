/* Decompiled from Speed.exe @ 00539d10 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00539d10(int param_1)

{
  void *pvVar1;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  pvVar1 = _malloc(param_1 * 4);
  *(void **)(unaff_EBX + 0x2b4) = pvVar1;
  if (0 < param_1) {
    do {
      *(int *)(*(int *)(unaff_EBX + 0x2b4) + iVar2 * 4) = iVar3;
      iVar3 = iVar3 + *(int *)(*(int *)(unaff_EBX + 0x2a8) + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  pvVar1 = _malloc(iVar3 * 4);
  *(int *)(unaff_EBX + 0x2a4) = iVar3;
  *(void **)(unaff_EBX + 0x2b0) = pvVar1;
  return;
}

