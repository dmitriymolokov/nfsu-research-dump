/* Decompiled from Speed.exe @ 00652b60 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00652b60(int param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x8c + DAT_00713f48;
  fVar1 = (float)(int)*(short *)(iVar2 + 0x42) *
          (float)(int)*(char *)(param_1 * 0x8c + 0x2b + DAT_00713f48) * *(float *)(iVar2 + 0x38) *
          _DAT_006aaa10;
  *(float *)(iVar2 + 0x48) = fVar1;
  if (*(int *)(iVar2 + 0x78) != 0) {
    *(float *)(iVar2 + 0x48) =
         (float)(int)*(char *)((uint)*(byte *)(iVar2 + 0x67) + *(int *)(iVar2 + 0x78)) * fVar1 *
         _DAT_006ccbec;
  }
  if (*(int *)(iVar2 + 0x70) != 0) {
    *(float *)(iVar2 + 0x48) =
         (float)(int)*(char *)(*(int *)(iVar2 + 0x70) +
                              (int)ROUND(*(float *)(iVar2 + 0x48) * _DAT_006ccb34));
  }
  *(float *)(iVar2 + 0x48) = _DAT_006e9bc8 * *(float *)(iVar2 + 0x48);
  return;
}

