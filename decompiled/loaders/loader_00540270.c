/* Decompiled from Speed.exe @ 00540270 */
/* Module: Loader */
/* Ghidra DecompileModule */


int * __fastcall FUN_00540270(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (*param_2 == -0x7fecbfff) {
    iVar2 = param_2[1];
    piVar5 = (int *)0x0;
    for (piVar1 = param_2 + 2; piVar1 < (int *)(iVar2 + 8 + (int)param_2);
        piVar1 = (int *)((int)piVar1 + piVar1[1] + 8)) {
      iVar3 = *piVar1;
      if (iVar3 == 0x134002) {
        iVar3 = piVar1[2];
        piVar4 = (int *)piVar1[3];
        piVar5 = piVar1 + 2;
        *piVar4 = iVar3;
        *(int **)(iVar3 + 4) = piVar4;
        DAT_0072fa00 = DAT_0072fa00 + -1;
      }
      else if (((iVar3 != 0x134003) && (iVar3 != 0x134004)) && (iVar3 == -0x7fecbff8)) {
        for (piVar4 = piVar1 + 2; piVar4 < (int *)(piVar1[1] + 8 + (int)piVar1);
            piVar4 = (int *)((int)piVar4 + piVar4[1] + 8)) {
        }
      }
    }
    return piVar5;
  }
  return (int *)0x0;
}

