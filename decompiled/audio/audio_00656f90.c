/* Decompiled from Speed.exe @ 00656f90 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00656f90(float param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)param_1 + 0x44);
  if (piVar1 != (int *)0x0) {
    param_1 = (float)param_2 * _DAT_006aa9b8;
    (**(code **)(*piVar1 + 0x10))(piVar1,&DAT_006aab48,1,0,0,&param_1,4);
  }
  return;
}

