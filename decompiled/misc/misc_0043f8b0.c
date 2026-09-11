/* Decompiled from Speed.exe @ 0043f8b0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043f8b0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(*param_1 + 4);
  if (_DAT_006b72dc <= *(float *)(iVar1 + 0x3d0)) {
    fVar2 = (float10)FUN_00464ed0();
  }
  else {
    fVar2 = (float10)DAT_006cc7a4;
  }
  if ((((_DAT_006b7844 * _DAT_006cca50 < (float)ABS(fVar2)) &&
       (_DAT_006b7848 < *(float *)(iVar1 + 0x3d4))) && (*(int *)(iVar1 + 0x3cc) == 4)) &&
     (*(char *)(*(int *)(param_1[1] + 0x2c) + 0x14) != '\0')) {
    FUN_00436230();
    return;
  }
  return;
}

