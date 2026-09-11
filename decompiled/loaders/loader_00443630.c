/* Decompiled from Speed.exe @ 00443630 */
/* Module: Loader */
/* Ghidra DecompileVAs */


float * FUN_00443630(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  short *psVar5;
  float *pfVar6;
  float *unaff_EDI;
  float local_8;
  int local_4;
  
  local_4 = *(int *)(param_1 + 8);
  pfVar6 = (float *)0x0;
  local_8 = 0.0;
  if (0 < local_4) {
    psVar5 = (short *)(*(int *)(param_1 + 0xc) + 4);
    do {
      iVar2 = (int)psVar5[-1];
      if (iVar2 < *psVar5) {
        iVar4 = iVar2 * 0x14;
        iVar2 = *psVar5 - iVar2;
        do {
          if (iVar4 < 0) {
            pfVar3 = (float *)0x0;
          }
          else {
            pfVar3 = (float *)(*(int *)(param_1 + 0x14) + iVar4);
          }
          fVar1 = SQRT((*pfVar3 - *unaff_EDI) * (*pfVar3 - *unaff_EDI) +
                       (pfVar3[1] - unaff_EDI[1]) * (pfVar3[1] - unaff_EDI[1]));
          if ((pfVar6 == (float *)0x0) || (fVar1 < local_8)) {
            pfVar6 = pfVar3;
            local_8 = fVar1;
          }
          iVar4 = iVar4 + 0x14;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      psVar5 = psVar5 + 0x14;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return pfVar6;
}

