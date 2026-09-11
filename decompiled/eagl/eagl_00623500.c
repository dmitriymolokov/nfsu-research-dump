/* Decompiled from Speed.exe @ 00623500 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void FUN_00623500(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    if (*param_1 == DAT_0070a41c) {
      DAT_0070a41c = 0;
    }
    iVar3 = 0;
    if (0 < DAT_006e2a90) {
      piVar1 = (int *)*param_1;
      while (*(int **)(DAT_0070a48c + iVar3 * 4) != piVar1) {
        iVar3 = iVar3 + 1;
        if (DAT_006e2a90 <= iVar3) {
          return;
        }
      }
      if (piVar1 != (int *)0x0) {
        piVar2 = (int *)*piVar1;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        *piVar1 = 0;
        piVar1[4] = 0;
        (*(code *)PTR_FUN_006dfaa0)(piVar1,0x14);
      }
      *param_1 = 0;
      *(undefined4 *)(DAT_0070a48c + iVar3 * 4) = 0;
      DAT_0070a49c = DAT_0070a49c + -1;
    }
  }
  return;
}

