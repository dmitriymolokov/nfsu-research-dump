/* Decompiled from Speed.exe @ 004f4790 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f4790(int param_1,float param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int unaff_EDI;
  
  fVar1 = (float)(int)*(short *)(*(int *)(unaff_EDI + 8) + 0x44);
  fVar2 = (float)(int)*(short *)(*(int *)(unaff_EDI + 8) + 0x46);
  fVar3 = (float)*(byte *)(param_1 + 2);
  if (fVar3 < _DAT_006cc908) {
    fVar3 = _DAT_006cc908;
  }
  param_2 = (float)(int)*(char *)(param_1 + 9) + param_2;
  param_3 = (float)(int)*(char *)(param_1 + 10) + *(float *)(unaff_EDI + 0x28) + param_3;
  FUN_00514530(param_2,param_3,param_2 + fVar3,(float)*(byte *)(param_1 + 3) + param_3,0x3f800000,
               (float)(int)(*(ushort *)(param_1 + 4) - 1) / fVar1,
               (float)(int)(*(ushort *)(param_1 + 6) - 1) / fVar2,
               (float)(*(byte *)(param_1 + 2) + 1 + (uint)*(ushort *)(param_1 + 4)) / fVar1,
               (float)(*(byte *)(param_1 + 3) + 1 + (uint)*(ushort *)(param_1 + 6)) / fVar2,param_4)
  ;
  return;
}

