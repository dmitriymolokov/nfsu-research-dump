/* Decompiled from Speed.exe @ 00652150 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fn_00652150(undefined4 param_1,int param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iStack_c;
  float fStack_8;
  int iStack_4;
  
  if (DAT_00713ee4 == '\0') {
    return -10;
  }
  iVar3 = FUN_00652720(param_1);
  if (-1 < iVar3) {
    fStack_8 = (float)param_2 * _DAT_006ccbec;
    iStack_c = -1;
    iStack_4 = iVar3;
    iVar4 = FUN_006584e0(iVar3,&iStack_c);
    while (iVar4 != 0) {
      iVar7 = iStack_c * 0x8c + DAT_00713f48;
      iVar4 = 0;
      bVar2 = false;
      if (*(char *)(iStack_c * 0x8c + 0x23 + DAT_00713f48) != '\0') {
        psVar5 = (short *)(iVar7 + 4);
        do {
          iVar6 = (int)*psVar5;
          fVar1 = *(float *)(iVar6 * 0x8c + 0x38 + DAT_00713f48);
          iVar3 = iVar6 * 0x8c + DAT_00713f48;
          *(undefined4 *)(iVar3 + 0x30) = 0;
          if (fVar1 != fStack_8) {
            bVar2 = true;
            *(float *)(iVar3 + 0x38) = fStack_8;
            FUN_00652b60(iVar6);
            FUN_006512f0(iVar6);
          }
          iVar4 = iVar4 + 1;
          psVar5 = psVar5 + 1;
        } while (iVar4 < (int)(uint)*(byte *)(iVar7 + 0x23));
        iVar3 = iStack_4;
        if ((bVar2) && (0 < *(short *)(iVar7 + 0x62))) {
          FUN_00651450(iStack_c,0);
          iVar3 = iStack_4;
        }
      }
      iVar4 = FUN_006584e0(iVar3,&iStack_c);
    }
  }
  return iVar3;
}

