/* Decompiled from Speed.exe @ 005a5ef0 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005a5ef0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *param_2;
  iVar2 = -1;
  if (iVar1 != 0) {
    if (0 < *(int *)(param_1 + 4)) {
      piVar3 = (int *)(param_1 + 8);
      iVar2 = 0;
      while (((short)*(char *)(*piVar3 + 0x5c) != *(short *)(iVar1 + 10) ||
             ((int)*(short *)(*piVar3 + 0x5e) != ((param_2[1] - iVar1) + -0x27c) / 0x88))) {
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
        if (*(int *)(param_1 + 4) <= iVar2) {
          return -1;
        }
      }
    }
  }
  return iVar2;
}

