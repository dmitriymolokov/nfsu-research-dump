/* Decompiled from Speed.exe @ 00583c80 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00583c80(float param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float10 fVar5;
  
  iVar2 = *(int *)((int)param_1 + 0x3e4);
  if ((((*(int *)(iVar2 + 4) != 0) &&
       (iVar3 = *(int *)((int)param_1 + 0x3e0), *(int *)(iVar3 + 4) != 0)) &&
      (*(int *)(iVar2 + 0xb8) != -1)) && (*(int *)(iVar2 + 8 + *(int *)(iVar2 + 0xb8) * 4) != 0)) {
    FUN_0044d570();
    fVar5 = (float10)FUN_005a6e10(iVar2,*(char *)(iVar3 + 0x388) * 0x38 + 8 + iVar3);
    fVar4 = *(float *)(*(int *)((int)param_1 + 4) + 0x3d0);
    fVar1 = (float)fVar5;
    if (fVar1 <= DAT_006cc7a4) {
      param_1 = 0.0;
    }
    else if (fVar4 <= _DAT_006cc8bc) {
      param_1 = 99999.0;
    }
    else {
      fVar5 = (float10)FUN_00401c40(fVar1 / fVar4,0);
      param_1 = (float)fVar5;
    }
    FUN_005aadf0(fVar1,param_1);
  }
  return;
}

