/* Decompiled from Speed.exe @ 00668b40 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00668b40(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  
  iVar1 = FUN_00668720();
  if (iVar1 != -1) {
    *(char *)((int)param_1 + iVar1 * 0x10 + 0x1f) = (char)param_1[2] + -1;
    FUN_006687c0();
    return;
  }
  iVar1 = param_1[1];
  if (iVar1 == *param_1) {
    iVar1 = FUN_00668740();
  }
  else {
    param_1[1] = iVar1 + 1;
  }
  piVar2 = param_1 + iVar1 * 4 + 6;
  *piVar2 = param_2;
  *(undefined2 *)(piVar2 + 1) = 0x8000;
  cVar3 = (char)param_1[2] + -1;
  *(char *)((int)piVar2 + 7) = cVar3;
  *(char *)((int)piVar2 + 6) = cVar3;
  piVar2[2] = param_3;
  piVar2[3] = param_4;
  FUN_006687c0();
  return;
}

