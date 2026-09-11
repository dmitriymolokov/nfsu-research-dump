/* Decompiled from Speed.exe @ 00486c00 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 __fastcall fn_00486c00(int param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = false;
  if ((*(float *)(param_1 + 0x40) == DAT_006cc7a4) ||
     (fVar1 = (float)(*(int *)(param_1 + 0x7c) + -1),
     fVar1 < *(float *)(param_1 + 400) != (fVar1 == *(float *)(param_1 + 400)))) {
    bVar2 = true;
  }
  bVar3 = false;
  if ((*(float *)(param_1 + 0x44) == DAT_006cc7a4) ||
     (fVar1 = (float)(*(int *)(param_1 + 0x88) + -1),
     fVar1 < *(float *)(param_1 + 0x194) != (fVar1 == *(float *)(param_1 + 0x194)))) {
    bVar3 = true;
  }
  if ((bVar2) && (bVar3)) {
    return 1;
  }
  return 0;
}

