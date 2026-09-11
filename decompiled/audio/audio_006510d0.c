/* Decompiled from Speed.exe @ 006510d0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_006510d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = DAT_00713f78[5];
  iVar3 = 0;
  if (iVar2 < 0) {
    piVar4 = (int *)DAT_00713f78[1];
    while (*piVar4 != param_1 - *DAT_00713f78) {
      iVar3 = iVar3 + -1;
      piVar4 = piVar4 + -2;
      if (iVar3 <= iVar2) {
        return;
      }
    }
    DAT_00713f78[5] = iVar2 + 1;
    DAT_00713f78[3] = DAT_00713f78[3] + 8;
    if (DAT_00713f78[5] < iVar3) {
      do {
        puVar1 = (undefined4 *)(DAT_00713f78[1] + iVar3 * 8);
        *puVar1 = *(undefined4 *)(DAT_00713f78[1] + -8 + iVar3 * 8);
        puVar1[1] = puVar1[-1];
        iVar3 = iVar3 + -1;
      } while (DAT_00713f78[5] < iVar3);
    }
  }
  return;
}

