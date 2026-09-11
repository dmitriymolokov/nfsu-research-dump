/* Decompiled from Speed.exe @ 00673ccf */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00673ccf(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((*(int *)((int)param_1 + 0x3c) != DAT_00717e60) && (*(int *)((int)param_1 + 0x3c) != 0)) &&
     (**(int **)((int)param_1 + 0x2c) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0x34);
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) && (piVar1 != DAT_00792fac)) {
      _free(piVar1);
      ___free_lconv_mon(*(undefined4 *)((int)param_1 + 0x3c));
    }
    piVar1 = *(int **)((int)param_1 + 0x30);
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) && (piVar1 != DAT_00792fb4)) {
      _free(piVar1);
      ___free_lconv_num(*(undefined4 *)((int)param_1 + 0x3c));
    }
    _free(*(void **)((int)param_1 + 0x2c));
    _free(*(void **)((int)param_1 + 0x3c));
  }
  piVar1 = *(int **)((int)param_1 + 0x40);
  if (((piVar1 != DAT_00792fa8) && (piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
    _free(piVar1);
    _free(*(void **)((int)param_1 + 0x44));
  }
  iVar2 = *(int *)((int)param_1 + 0x50);
  if (((iVar2 != DAT_00717e5c) && (iVar2 != 0)) && (*(int *)(iVar2 + 0xb4) == 0)) {
    ___free_lc_time(iVar2);
    _free(*(void **)((int)param_1 + 0x50));
  }
  _free(param_1);
  return;
}

