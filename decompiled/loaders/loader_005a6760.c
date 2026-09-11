/* Decompiled from Speed.exe @ 005a6760 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005a6760(int param_1,int param_2,undefined4 *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EDI;
  float10 fVar3;
  
  iVar1 = param_1;
  iVar2 = *(int *)(*(int *)(param_2 + 0x1d4) + 0x1c);
  param_2 = 0;
  if (*(int *)(iVar2 + 0xe4) != 0) {
    FUN_005791c0();
  }
  iVar2 = FUN_005a65b0(iVar2 + 0x40,&param_2,&param_1,unaff_EDI);
  fVar3 = (float10)FUN_005a74f0(*(undefined4 *)(iVar1 + 8 + iVar2 * 4),param_2,unaff_EDI);
  *param_3 = param_2;
  *param_4 = (float)fVar3;
  return iVar2;
}

