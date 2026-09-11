/* Decompiled from Speed.exe @ 0045bfb0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __thiscall FUN_0045bfb0(int param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  float *pfVar5;
  int iVar6;
  int *unaff_EDI;
  
  iVar6 = *unaff_EDI;
  if (iVar6 != 1) {
    if (iVar6 < 2) {
      return;
    }
    if (3 < iVar6) {
      return;
    }
    if ((param_3 != '\0') && (*(char *)(param_1 + 0x1b1) == '\0')) {
      bVar3 = true;
      cVar4 = FUN_0057a720();
      if ((cVar4 != '\0') &&
         (pfVar5 = (float *)FUN_00578730(),
         *pfVar5 * *(float *)(param_2 + 0x90) + pfVar5[1] * *(float *)(param_2 + 0x94) <
         DAT_006cc7a4)) {
        iVar6 = FUN_0057a7a0();
        piVar1 = *(int **)(iVar6 + 0x3dc);
        iVar6 = FUN_00457570();
        cVar4 = FUN_0044a060();
        if (((cVar4 != '\0') && (*(int *)(piVar1[1] + 0x1d4) == *(int *)(param_2 + 0x82c))) &&
           (((iVar2 = *piVar1, iVar2 == 2 && (*unaff_EDI == 3)) ||
            ((iVar2 == 3 && (*unaff_EDI == 2)))))) {
          bVar3 = false;
        }
        if ((iVar6 == 9) && (*unaff_EDI == 2)) {
          return;
        }
        if (!bVar3) {
          return;
        }
      }
      cVar4 = FUN_0045b9f0();
      if (cVar4 == '\0') {
        return;
      }
      *(int *)(*(int *)(param_2 + 0x2c) + 1000) = unaff_EDI[1];
      return;
    }
  }
  *(undefined4 *)(*(int *)(param_2 + 0x2c) + 1000) = 0;
  return;
}

