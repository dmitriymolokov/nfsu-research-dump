/* Decompiled from Speed.exe @ 0051c720 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_0051c720(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if ((DAT_006f1dd8 != 0) && (*(int *)(param_3 + 0x104) != 0)) {
    piVar1 = *(int **)(*(int *)(param_3 + 0x104) + 0x14);
    if (param_2 == -1) {
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x98))(0,0xffffffff);
        return;
      }
    }
    else if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x98))(0,param_2);
    }
  }
  return;
}

