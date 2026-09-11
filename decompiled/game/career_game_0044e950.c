/* Decompiled from Speed.exe @ 0044e950 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044e950(int param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar3 = *(int *)(param_1 + 0x20);
  fVar4 = (*(float *)(iVar3 + 0x268) + *(float *)(iVar3 + 0x264)) * ABS(*(float *)(param_1 + 0x3d4))
          * _DAT_006cc7dc;
  fVar6 = _DAT_007000ac * *(float *)(iVar3 + 0x110);
  fVar5 = (*(float *)(iVar3 + 0xfc) + *(float *)(iVar3 + 0xdc)) * _DAT_006cc7dc;
  fVar1 = *(float *)(iVar3 + 0x110);
  fVar2 = *(float *)(param_1 + 0x3d4);
  *(float *)(param_2 + 0x1e8) = param_3;
  *(float *)(param_2 + 0x1e4) = -((fVar5 * (fVar6 + fVar4)) / fVar1) * param_3 + fVar2;
  return;
}

