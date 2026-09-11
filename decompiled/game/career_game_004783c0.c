/* Decompiled from Speed.exe @ 004783c0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004783c0(int param_1)

{
  int iVar1;
  int iVar2;
  int extraout_EDX;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float fStack_2c;
  int local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  DAT_0078eb4c = DAT_0078eb4c + 1;
  local_28 = param_1;
  (**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
  FUN_00462f90(&fStack_2c);
  if (DAT_00735fc4 == 0) {
    fStack_2c = 0.0;
  }
  else {
    fStack_2c = fStack_2c * _DAT_006cc90c;
  }
  piVar3 = (int *)(param_1 + 0x20);
  iVar5 = 4;
  piVar4 = piVar3;
  do {
    fStack_24 = DAT_006cc7a4;
    if (*(int *)(*piVar4 + 0x80) != 0) {
      fStack_24 = fStack_2c;
    }
    fStack_24 = fStack_24 + *(float *)(*piVar4 + 0x24);
    fVar6 = (float10)FUN_00586f10(fStack_24);
    *(float *)(extraout_EDX + 0xb0) = (float)fVar6;
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_00478570();
  iVar5 = DAT_00734540;
  fStack_2c = 5.60519e-45;
  do {
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x80) != 0) {
      iVar2 = *(int *)(iVar1 + 0xa0);
      iVar1 = *(int *)(iVar1 + 0xa4);
      fStack_20 = *(float *)(iVar2 + 0x130) - *(float *)(iVar1 + 0x20);
      fStack_1c = *(float *)(iVar2 + 0x134) - *(float *)(iVar1 + 0x24);
      fStack_18 = *(float *)(iVar2 + 0x138) - *(float *)(iVar1 + 0x28);
      if (iVar5 == 0) {
        FUN_00584cd0();
      }
    }
    piVar3 = piVar3 + 1;
    fStack_2c = (float)((int)fStack_2c + -1);
  } while (fStack_2c != 0.0);
  FUN_00479c30();
  FUN_004791f0();
  if (*(int *)(local_28 + 0x54) != 0) {
    FUN_0042a860();
  }
  iVar5 = DAT_007361a8;
  if ((((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) ||
      ((FUN_00479290(), DAT_0078a344 == '\0' && (iVar5 == 0)))) &&
     (((DAT_00735fa0 != 0 || (DAT_0078a345 != '\0')) || (DAT_007361a4 != 0)))) {
    FUN_00479350();
  }
  if ((DAT_0078a346 != '\0') || (DAT_007361a0 != 0)) {
    FUN_00479510();
  }
  return;
}

