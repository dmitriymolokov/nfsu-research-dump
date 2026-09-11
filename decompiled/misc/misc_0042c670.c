/* Decompiled from Speed.exe @ 0042c670 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0042c670(int param_1)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = *(int *)(DAT_007361f0 + 0x3c);
  if ((((iVar1 == 0) || (*(int *)(iVar1 + 0x20) == 0)) || (*(int *)(iVar1 + 0x1c) == 0)) &&
     ((*(int *)(DAT_007361f0 + 0x40) == 0 || (*(int *)(*(int *)(DAT_007361f0 + 0x40) + 0x1c) == 0)))
     ) {
    FUN_0042c6d0(unaff_ESI,(-(DAT_00700aa4 != 0) & 0x10U) + 1,0);
    if ((param_1 != 0) && (*(int **)(unaff_ESI + 0x27c) != (int *)0x0)) {
      (**(code **)(**(int **)(unaff_ESI + 0x27c) + 0x34))();
    }
  }
  return;
}

