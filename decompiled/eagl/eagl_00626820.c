/* Decompiled from Speed.exe @ 00626820 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __thiscall FUN_00626820(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *param_1) {
    do {
      piVar1 = *(int **)(param_1[1] + iVar2 * 4);
      switch(piVar1[2]) {
      case 3:
        if (*(int *)(&DAT_0070ab00 + piVar1[3] * 4) != 0) {
          FUN_00621e00(piVar1[1]);
          FUN_00621bc0();
        }
        break;
      case 4:
        FUN_00623780();
        break;
      case 5:
        *(int *)(*piVar1 + param_2) = piVar1[3];
        break;
      case 6:
        iVar3 = piVar1[3];
        goto LAB_006268a1;
      case 7:
        FUN_006227c0(piVar1[3]);
        break;
      case 8:
        iVar3 = piVar1[3];
LAB_006268a1:
        FUN_006226d0(iVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *param_1);
  }
  return;
}

