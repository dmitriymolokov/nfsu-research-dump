/* Decompiled from Speed.exe @ 00545180 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00545180(float *param_1,int param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_2 + 0x40);
  fVar2 = *param_1 - *(float *)(iVar1 + 0x40);
  fVar4 = param_1[1] - *(float *)(iVar1 + 0x44);
  fVar3 = param_1[2] - *(float *)(iVar1 + 0x48);
  if (fVar2 * *(float *)(iVar1 + 0x50) +
      fVar4 * *(float *)(iVar1 + 0x54) + fVar3 * *(float *)(iVar1 + 0x58) < -param_3) {
    return 0;
  }
  if (param_3 * _DAT_006cc7dc < SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) - param_3) {
    uVar5 = FUN_00674898();
    return uVar5;
  }
  uVar5 = FUN_00674898();
  return uVar5;
}

