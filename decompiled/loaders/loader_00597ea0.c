/* Decompiled from Speed.exe @ 00597ea0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00597ea0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  fVar2 = SQRT(*(float *)(iVar1 + 0xa8) * *(float *)(iVar1 + 0xa8) +
               *(float *)(iVar1 + 0xa4) * *(float *)(iVar1 + 0xa4) +
               *(float *)(iVar1 + 0xa0) * *(float *)(iVar1 + 0xa0));
  fVar3 = SQRT(*(float *)(iVar1 + 200) * *(float *)(iVar1 + 200) +
               *(float *)(iVar1 + 0xc4) * *(float *)(iVar1 + 0xc4) +
               *(float *)(iVar1 + 0xc0) * *(float *)(iVar1 + 0xc0));
  if (((fVar2 <= _DAT_006b5a84) && (fVar3 <= _DAT_006b5a88)) &&
     ((*(char *)(param_1 + 0x1c) != '\0' || (*(int *)(param_1 + 0x4c4) == 2)))) {
    if (((fVar2 <= _DAT_006b5a8c) && (fVar3 <= _DAT_006b5a90)) &&
       (_DAT_006b5a7c <= (float)(DAT_0073ad34 - *(int *)(param_1 + 0x16c)) * _DAT_006cca38)) {
      return 2;
    }
    return 1;
  }
  return 0;
}

