/* Decompiled from Speed.exe @ 00650d90 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00650d90(undefined4 param_1,int param_2,float param_3)

{
  float fVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  
  if (DAT_00713ee4 == '\0') {
    return 0xfffffff6;
  }
  iVar4 = FUN_00650020(param_1);
  if (iVar4 != 0) {
    if (param_2 == -1) {
      iVar7 = 6;
      do {
        FUN_00650d40(param_3);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    else {
      FUN_00650d40(param_3);
    }
    iVar4 = FUN_00652720(*(undefined4 *)(iVar4 + 4));
    if (-1 < iVar4) {
      iVar7 = iVar4 * 0x8c;
      if (param_2 == -1) {
        iVar8 = iVar7 + DAT_00713f48;
        bVar3 = false;
        iVar6 = 0;
        if (*(char *)(iVar7 + 0x23 + DAT_00713f48) != '\0') {
          psVar9 = (short *)(iVar8 + 4);
          do {
            sVar2 = *psVar9;
            iVar7 = sVar2 * 0x8c;
            iVar5 = iVar7 + DAT_00713f48;
            if (*(float *)(iVar7 + 0x38 + DAT_00713f48) != param_3) {
              *(float *)(iVar5 + 0x38) = param_3;
              bVar3 = true;
              *(float *)(iVar5 + 0x48) = _DAT_006e9bc8 * param_3;
              FUN_006512f0((int)sVar2);
            }
            iVar6 = iVar6 + 1;
            psVar9 = psVar9 + 1;
          } while (iVar6 < (int)(uint)*(byte *)(iVar8 + 0x23));
          if ((bVar3) && (0 < *(short *)(iVar8 + 0x62))) {
            FUN_00651450(iVar4,0);
            return 0;
          }
        }
      }
      else {
        iVar6 = iVar7 + DAT_00713f48;
        if ((char)(&DAT_006aa9e2)[(uint)*(byte *)(iVar7 + 0x23 + DAT_00713f48) * 6 + param_2] !=
            -0x80) {
          iVar8 = (int)*(short *)(iVar6 + 4 +
                                 (char)(&DAT_006aa9e2)
                                       [(uint)*(byte *)(iVar7 + 0x23 + DAT_00713f48) * 6 + param_2]
                                 * 2);
          iVar7 = iVar8 * 0x8c;
          fVar1 = *(float *)(iVar7 + 0x38 + DAT_00713f48);
          iVar7 = iVar7 + DAT_00713f48;
          *(undefined4 *)(iVar7 + 0x30) = 0;
          if (fVar1 != param_3) {
            *(float *)(iVar7 + 0x38) = param_3;
            *(float *)(iVar7 + 0x48) = _DAT_006e9bc8 * param_3;
            FUN_006512f0(iVar8);
            if (0 < *(short *)(iVar6 + 0x62)) {
              FUN_00651450(iVar4,0);
            }
          }
        }
      }
    }
    return 0;
  }
  return 0xfffffff8;
}

