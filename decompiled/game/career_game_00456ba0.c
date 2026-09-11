/* Decompiled from Speed.exe @ 00456ba0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00456ba0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = DAT_007361f8;
  if ((DAT_007361f8 != 0) && (DAT_0073619c != 0)) {
    if (DAT_0078a320 == 2) {
      iVar6 = (int)*(char *)(*(int *)(*(int *)(DAT_007361b4 + 4) + 0x1c) + 10);
      iVar7 = (int)*(char *)(*(int *)(*(int *)(DAT_007361b8 + 4) + 0x1c) + 10);
      iVar4 = (int)*(char *)(DAT_007361b8 + 0x22);
      iVar5 = (int)*(char *)(DAT_007361b4 + 0x22);
      if (iVar7 < iVar6) {
        iVar4 = (int)*(char *)(DAT_007361b4 + 0x22);
        iVar5 = (int)*(char *)(DAT_007361b8 + 0x22);
      }
      iVar3 = DAT_0078a324 / 2;
      if (iVar6 <= iVar3) {
        iVar3 = iVar3 + 1;
      }
      if (iVar7 <= iVar3) {
        iVar3 = iVar3 + 1;
      }
      iVar6 = *(int *)(DAT_007361f8 + 0x1c);
      iVar7 = 0;
      if (*(int *)(DAT_007361f8 + 0x20) != iVar6 && -1 < *(int *)(DAT_007361f8 + 0x20) - iVar6) {
        do {
          iVar6 = *(int *)(iVar2 + 0x28 + (iVar6 + iVar7) * 4);
          if (iVar3 < *(char *)(*(int *)(iVar6 + 0x1c) + 10)) {
            *(int *)(iVar6 + 0x400) = iVar4;
          }
          else {
            *(int *)(iVar6 + 0x400) = iVar5;
          }
          iVar6 = *(int *)(iVar2 + 0x1c);
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar2 + 0x20) - iVar6);
        return;
      }
    }
    else {
      cVar1 = *(char *)(DAT_007361bc + 0x22);
      iVar4 = *(int *)(DAT_007361f8 + 0x1c);
      iVar5 = 0;
      if (*(int *)(DAT_007361f8 + 0x20) != iVar4 && -1 < *(int *)(DAT_007361f8 + 0x20) - iVar4) {
        do {
          *(int *)(*(int *)(iVar2 + 0x28 + (iVar4 + iVar5) * 4) + 0x400) = (int)cVar1;
          iVar4 = *(int *)(iVar2 + 0x1c);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar2 + 0x20) - iVar4);
      }
    }
  }
  return;
}

