/* Decompiled from Speed.exe @ 005133d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int FUN_005133d0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 8);
  switch(iVar2) {
  case 0:
    DAT_00735714 = 10;
    DAT_00735724 = 10;
    break;
  case 1:
    DAT_00735714 = 5;
    DAT_00735724 = 5;
    break;
  case 2:
    DAT_00735714 = 6;
    DAT_00735724 = 6;
    break;
  case 3:
    DAT_00735714 = 0xb;
    DAT_00735724 = 0xb;
    break;
  case 4:
    DAT_00735714 = 9;
    DAT_00735724 = 9;
  }
  iVar4 = DAT_00735714;
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x10);
  DAT_00735764 = iVar2;
  if (iVar1 != 0) {
    iVar2 = FUN_00506eb0(param_1);
    if (0 < iVar2) {
      iVar2 = *(int *)(param_1 + 0x88);
      DAT_00735720 = iVar2;
      DAT_00735724 = iVar4;
    }
    if (iVar1 != 0) {
      piVar3 = &DAT_00706530;
      do {
        if (*piVar3 == iVar4) break;
        piVar3 = piVar3 + 7;
      } while ((int)piVar3 < 0x70669c);
      iVar2 = FUN_004b2330();
      if (iVar2 != 0) {
        FUN_004b0150();
      }
      FUN_00504320(*(undefined4 *)(param_1 + 0xc));
      iVar1 = DAT_0073578c;
      iVar2 = *(int *)(param_1 + 0xc);
      if (DAT_0073578c != 0) {
        iVar4 = FUN_004f3f90(&DAT_00746104);
        iVar2 = 0;
        if (iVar4 != 0) {
          iVar2 = 0;
          if (*(int *)(iVar4 + 0x18) != 0) {
            iVar2 = FUN_004f0800(*(undefined4 *)(iVar1 + 8),*(int *)(iVar4 + 0x18));
          }
        }
      }
    }
  }
  return iVar2;
}

