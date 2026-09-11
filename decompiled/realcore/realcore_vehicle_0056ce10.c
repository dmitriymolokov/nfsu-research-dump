/* Decompiled from Speed.exe @ 0056ce10 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int FUN_0056ce10(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  int unaff_ESI;
  int iVar7;
  
  iVar7 = 1;
  FUN_00672b40();
  iVar6 = 2;
  if (2 < param_1) {
    do {
      if (0 < iVar7) {
        pfVar1 = *(float **)(unaff_ESI + iVar6 * 4);
        do {
          pfVar2 = *(float **)(unaff_ESI + iVar7 * 4);
          pfVar3 = *(float **)(unaff_ESI + -4 + iVar7 * 4);
          fVar5 = (*pfVar1 - *pfVar2) * (pfVar3[1] - pfVar2[1]) -
                  (*pfVar3 - *pfVar2) * (pfVar1[1] - pfVar2[1]);
          if (fVar5 < DAT_006cc7a4 == (fVar5 == DAT_006cc7a4)) break;
          iVar7 = iVar7 + -1;
        } while (0 < iVar7);
      }
      uVar4 = *(undefined4 *)(unaff_ESI + 4 + iVar7 * 4);
      iVar7 = iVar7 + 1;
      *(undefined4 *)(unaff_ESI + iVar7 * 4) = *(undefined4 *)(unaff_ESI + iVar6 * 4);
      *(undefined4 *)(unaff_ESI + iVar6 * 4) = uVar4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1);
  }
  return iVar7;
}

