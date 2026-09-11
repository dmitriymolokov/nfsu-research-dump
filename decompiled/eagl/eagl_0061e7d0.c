/* Decompiled from Speed.exe @ 0061e7d0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __fastcall FUN_0061e7d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if ((int *)piVar1[1] == (int *)0x0) {
      DAT_007094b8 = *piVar1;
    }
    else {
      *(int *)piVar1[1] = *piVar1;
    }
    if (*piVar1 != 0) {
      *(int *)(*piVar1 + 4) = piVar1[1];
    }
    if (piVar1[0x108] != 0) {
      (*(code *)PTR_FUN_006dfaa0)(piVar1[0x108],piVar1[4] << 2);
    }
    if (piVar1[0x109] != 0) {
      (*(code *)PTR_FUN_006dfaa0)(piVar1[0x109],piVar1[4]);
    }
    (*(code *)PTR_FUN_006dfaa0)(piVar1,0x430);
    *param_1 = 0;
  }
  return;
}

