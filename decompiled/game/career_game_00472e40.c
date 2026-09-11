/* Decompiled from Speed.exe @ 00472e40 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_00472e40(float *param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 0x14)) {
    iVar5 = 0;
    do {
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      pfVar1 = (float *)(iVar5 + 0x10 + *(int *)(param_2 + 0x54));
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x30;
      *pfVar1 = *pfVar1 - *param_1;
      pfVar1[1] = pfVar1[1] - fVar2;
      pfVar1[2] = pfVar1[2] - fVar3;
    } while (iVar4 < *(int *)(param_2 + 0x14));
  }
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  *(float *)(param_2 + 0x40) = *param_1;
  *(float *)(param_2 + 0x44) = fVar2;
  *(float *)(param_2 + 0x48) = fVar3;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  return;
}

