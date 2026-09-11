/* Decompiled from Speed.exe @ 00426450 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00426450(void)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_4;
  
  iVar3 = 0;
  local_4 = 0.0;
  if (0 < *(int *)(DAT_007361f8 + 0x18)) {
    iVar2 = 0x28;
    iVar1 = DAT_007361f8;
    do {
      if (*(int *)(iVar2 + iVar1) != unaff_EBX) {
        fVar4 = (float10)FUN_00426300();
        local_4 = (float)(fVar4 + (float10)local_4);
        iVar1 = DAT_007361f8;
      }
      if (_DAT_006b7b54 <= local_4) goto LAB_004264c1;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(iVar1 + 0x18));
  }
  if (local_4 < _DAT_006b7b54) {
    return (float10)local_4;
  }
LAB_004264c1:
  return (float10)_DAT_006b7b54;
}

