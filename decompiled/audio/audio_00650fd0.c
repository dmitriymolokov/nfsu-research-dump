/* Decompiled from Speed.exe @ 00650fd0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


int FUN_00650fd0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = param_1 + 0xfU & 0xfffffff0;
  iVar3 = 0;
  if (DAT_00713f78[5] == 0) {
    iVar5 = DAT_00713f78[3];
    iVar4 = 0;
  }
  else {
    iVar3 = 0;
    if (DAT_00713f78[5] < 0) {
      piVar2 = (int *)DAT_00713f78[1];
      do {
        if (iVar3 == 0) {
          iVar5 = *piVar2;
          iVar4 = 0;
        }
        else {
          iVar4 = piVar2[iVar3 * 2 + 3] + piVar2[iVar3 * 2 + 2];
          iVar5 = piVar2[iVar3 * 2] - iVar4;
        }
        if ((uint)DAT_00713f78[3] < (uint)(iVar5 + iVar4)) {
          iVar5 = DAT_00713f78[3] - iVar4;
        }
        if ((int)uVar6 <= iVar5) {
          for (iVar5 = DAT_00713f78[5]; iVar5 < iVar3; iVar5 = iVar5 + 1) {
            puVar1 = (undefined4 *)(DAT_00713f78[1] + iVar5 * 8);
            *puVar1 = *(undefined4 *)(DAT_00713f78[1] + 8 + iVar5 * 8);
            puVar1[1] = puVar1[3];
          }
          goto LAB_0065108d;
        }
        iVar3 = iVar3 + -1;
      } while (DAT_00713f78[5] < iVar3);
    }
    iVar4 = *(int *)(DAT_00713f78[1] + iVar3 * 8 + 0xc) + *(int *)(DAT_00713f78[1] + 8 + iVar3 * 8);
    iVar5 = DAT_00713f78[3] - iVar4;
  }
  if (iVar5 < (int)uVar6) {
    return 0;
  }
LAB_0065108d:
  piVar2 = (int *)(DAT_00713f78[1] + iVar3 * 8);
  *piVar2 = iVar4;
  piVar2[1] = uVar6;
  DAT_00713f78[5] = DAT_00713f78[5] + -1;
  DAT_00713f78[3] = DAT_00713f78[3] + -8;
  iVar3 = *DAT_00713f78;
  iVar5 = (DAT_00713f78[3] - iVar4) - uVar6;
  if (iVar5 < DAT_00713f78[4]) {
    DAT_00713f78[4] = iVar5;
  }
  return iVar3 + iVar4;
}

