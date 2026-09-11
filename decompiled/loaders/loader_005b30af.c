/* Decompiled from Speed.exe @ 005b30af */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005b30af(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  piVar3 = param_3;
  iVar5 = *param_2;
  piVar4 = (int *)(param_1 + iVar5);
  iVar7 = piVar4[4];
  iVar1 = piVar4[1];
  if (iVar7 == 0) {
    iVar7 = 1;
  }
  if (iVar1 < 0) {
LAB_005b317e:
    iVar6 = 0;
  }
  else {
    if (iVar1 < 4) {
      iVar1 = piVar4[6];
      iVar2 = piVar4[5];
      iVar6 = *piVar4;
      if (((iVar6 == 1) || (iVar6 == 2)) || (iVar6 == 3)) {
        iVar6 = 4;
      }
      else {
        iVar6 = 0;
        iVar7 = 0;
      }
      *param_2 = iVar5 + 0x1c;
      iVar6 = iVar1 * iVar2 * iVar6;
      *param_3 = iVar1 * iVar2 * iVar7;
    }
    else if (iVar1 == 4) {
      if ((*piVar4 < 10) || (0xe < *piVar4)) {
        iVar6 = 4;
      }
      else {
        iVar6 = 0;
      }
      *param_2 = iVar5 + 0x14;
      *param_3 = iVar7;
    }
    else {
      if (iVar1 != 5) goto LAB_005b317e;
      iVar1 = piVar4[5];
      param_3 = (int *)0x0;
      *param_2 = iVar5 + 0x18;
      *piVar3 = 0;
      iVar6 = (int)param_3;
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        iVar5 = FUN_005b30af(param_1,param_2,&local_8);
        iVar6 = iVar6 + iVar5;
        *piVar3 = *piVar3 + local_8;
      }
      *piVar3 = *piVar3 * iVar7;
    }
    iVar6 = iVar6 * iVar7;
  }
  return iVar6;
}

