/* Decompiled from Speed.exe @ 004f9240 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f9240(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = (int *)*param_1;
  if ((piVar1 != param_1) && ((int *)param_1[2] != param_1 + 2)) {
    piVar2 = (int *)param_1[5];
    piVar5 = (int *)FUN_0040a880();
    for (; piVar1 != piVar5; piVar1 = (int *)*piVar1) {
      piVar3 = (int *)piVar2[2];
      FUN_004f8fb0(piVar1);
      for (piVar4 = (int *)piVar1[2]; piVar4 != piVar1 + 2; piVar4 = (int *)*piVar4) {
        FUN_004f68a0(&DAT_006cc568,piVar3 + 2);
        piVar3 = (int *)*piVar3;
        if ((piVar3 == piVar2 + 2) && ((int *)*piVar4 != piVar1 + 2)) break;
      }
      piVar2 = (int *)*piVar2;
      if (piVar2 == param_1 + 2) break;
    }
    if (piVar1 != param_1) {
      for (piVar1 = (int *)*piVar1; piVar1 != piVar5; piVar1 = (int *)*piVar1) {
        piVar2 = (int *)piVar1[2];
        if (piVar2 != piVar1 + 2) {
          for (; piVar2 != piVar1 + 2; piVar2 = (int *)*piVar2) {
            FUN_004f6910(piVar2[2]);
          }
          FUN_004f6910(piVar1[4]);
        }
      }
    }
  }
  return;
}

