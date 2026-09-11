/* Decompiled from Speed.exe @ 00545210 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00545210(float *param_1,float *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x40);
  if (((*param_2 + *param_1) * _DAT_006cc7dc - *(float *)(iVar1 + 0x40)) * *(float *)(iVar1 + 0x50)
      + ((param_2[1] + param_1[1]) * _DAT_006cc7dc - *(float *)(iVar1 + 0x44)) *
        *(float *)(iVar1 + 0x54) +
        ((param_2[2] + param_1[2]) * _DAT_006cc7dc - *(float *)(iVar1 + 0x48)) *
        *(float *)(iVar1 + 0x58) <
      -(SQRT((*param_2 - *param_1) * (*param_2 - *param_1) +
             (param_2[1] - param_1[1]) * (param_2[1] - param_1[1]) +
             (param_2[2] - param_1[2]) * (param_2[2] - param_1[2])) * _DAT_006cc7dc)) {
    return 0;
  }
  uVar2 = FUN_00674898();
  return uVar2;
}

