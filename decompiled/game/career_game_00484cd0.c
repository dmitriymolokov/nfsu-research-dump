/* Decompiled from Speed.exe @ 00484cd0 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


undefined4 __fastcall fn_00484CD0(int param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = false;
  if ((*(float *)(param_1 + 0x40) == DAT_006cc7a4) ||
     (fVar1 = (float)(*(int *)(param_1 + 0x7c) + -1),
     fVar1 < *(float *)(param_1 + 0x130) != (fVar1 == *(float *)(param_1 + 0x130)))) {
    bVar2 = true;
  }
  bVar3 = false;
  if ((*(float *)(param_1 + 0x44) == DAT_006cc7a4) ||
     (fVar1 = (float)(*(int *)(param_1 + 0x88) + -1),
     fVar1 < *(float *)(param_1 + 0x164) != (fVar1 == *(float *)(param_1 + 0x164)))) {
    bVar3 = true;
  }
  if ((bVar2) && (bVar3)) {
    return 1;
  }
  return 0;
}

