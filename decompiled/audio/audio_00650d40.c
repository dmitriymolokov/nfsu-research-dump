/* Decompiled from Speed.exe @ 00650d40 */
/* Module: Audio */
/* Ghidra DecompileAll */


void __fastcall FUN_00650d40(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  
  bVar2 = *(float *)(param_2 + 0x20) != DAT_006cc7a4;
  *(undefined4 *)(param_2 + 8) = param_3;
  if (bVar2) {
    piVar1 = (int *)(param_2 + 0xc);
    if (piVar1 == DAT_00713ca8) {
      DAT_00713ca8 = (int *)*DAT_00713ca8;
    }
    if (*(int **)(param_2 + 0x10) != (int *)0x0) {
      **(int **)(param_2 + 0x10) = *piVar1;
    }
    if (*piVar1 != 0) {
      *(undefined4 *)(*piVar1 + 4) = *(undefined4 *)(param_2 + 0x10);
    }
    *(undefined4 *)(param_2 + 0x20) = 0;
  }
  return;
}

