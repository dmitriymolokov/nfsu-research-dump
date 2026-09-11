/* Decompiled from Speed.exe @ 005ca273 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005ca273(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  piVar4 = param_3;
  iVar2 = *param_2;
  piVar1 = (int *)(iVar2 + param_1);
  iVar8 = piVar1[4];
  iVar3 = piVar1[1];
  if (iVar8 == 0) {
    iVar8 = 1;
  }
  if (iVar3 < 0) {
LAB_005ca358:
    iVar6 = 0;
  }
  else {
    if (iVar3 < 4) {
      iVar3 = piVar1[5];
      iVar5 = piVar1[6];
      iVar6 = *piVar1;
      if (((iVar6 == 1) || (iVar6 == 2)) || (iVar6 == 3)) {
        iVar6 = 4;
        iVar7 = 4;
      }
      else {
        iVar6 = 0;
        iVar7 = 0;
      }
      *param_2 = iVar2 + 0x1c;
      *param_3 = *param_3 + iVar7 * iVar5 * iVar3 * iVar8;
      iVar6 = iVar5 * iVar3 * iVar6;
    }
    else if (iVar3 == 4) {
      if ((*piVar1 < 10) || (0xe < *piVar1)) {
        iVar6 = 4;
      }
      else {
        iVar6 = 0;
      }
      *param_2 = iVar2 + 0x14;
      *param_3 = *param_3 + iVar8 * 4;
    }
    else {
      if (iVar3 != 5) goto LAB_005ca358;
      iVar3 = piVar1[5];
      param_3 = (int *)0x0;
      *param_2 = iVar2 + 0x18;
      iVar2 = *piVar4;
      iVar6 = (int)param_3;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        iVar5 = FUN_005ca273(param_1,param_2,piVar4);
        iVar6 = iVar6 + iVar5;
      }
      *piVar4 = (*piVar4 - iVar2) * (iVar8 + -1) + *piVar4;
    }
    iVar6 = iVar6 * iVar8;
  }
  return iVar6;
}

