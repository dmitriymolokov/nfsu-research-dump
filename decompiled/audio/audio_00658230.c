/* Decompiled from Speed.exe @ 00658230 */
/* Module: Audio */
/* Ghidra DecompileVAs */


int fn_00658230(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  int aiStack_fc [12];
  short asStack_cc [4];
  char cStack_c4;
  char cStack_c3;
  char cStack_c2;
  char cStack_c1;
  
  iVar6 = param_5;
  iVar7 = 0;
  iStack_110 = 0;
  bVar1 = false;
  uStack_10c = 0;
  iStack_114 = -9;
  if (param_2 == 0) {
    return -8;
  }
  if (param_1 == 0) {
    param_1 = param_2;
  }
  iVar4 = (int)*(char *)(param_5 + 3);
  param_2 = param_2 + 4;
  iVar5 = (int)*(char *)(param_5 + 2);
  uVar2 = fn_00657D70();
  do {
    iVar3 = FUN_006586b0(&param_2,asStack_cc);
    if (!bVar1) {
      if (asStack_cc[0] != 0) {
        uStack_10c = func_0x0065c070((int)asStack_cc[0]);
      }
      bVar1 = true;
    }
    if ((((cStack_c4 <= iVar4) && (iVar4 <= cStack_c3)) && (cStack_c2 <= iVar5)) &&
       (iVar5 <= cStack_c1)) {
      iStack_114 = fn_00657DD0(param_3,param_4,param_1,iVar6,asStack_cc,iVar5,iVar4,uStack_10c);
      if (iStack_114 < 0) goto code_r0x00658389;
      aiStack_fc[iVar7] = iStack_114;
      iVar7 = iVar7 + 1;
      FUN_00652a30(asStack_cc,1);
    }
  } while (iVar3 != 0);
  iVar4 = 0;
  iVar6 = 0;
  if (0 < iVar7) {
    do {
      iVar5 = aiStack_fc[iVar6];
      iVar3 = func_0x0065c0b0(iVar5);
      if (iVar3 == 0) {
        aiStack_fc[iVar4] = iVar5;
        iVar4 = iVar4 + 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7);
    if (iVar4 != 0) {
      if (iVar4 != 1) {
        iVar6 = 0;
        if (0 < iVar4) {
          do {
            iVar7 = FUN_00652720(aiStack_fc[iVar6]);
            if (-1 < iVar7) {
              iStack_110 = iVar7 * 0x8c + DAT_00713f48;
              *(undefined1 *)(iStack_110 + 0x26) = uVar2;
              *(undefined1 *)(iStack_110 + 0x27) = 0;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar4);
        }
        *(undefined1 *)(iStack_110 + 0x27) = 1;
        return iStack_114;
      }
      iVar6 = FUN_00652720(aiStack_fc[0]);
      if (iVar6 < 0) {
        return iStack_114;
      }
      iVar6 = iVar6 * 0x8c + DAT_00713f48;
      *(undefined1 *)(iVar6 + 0x26) = 0;
      *(undefined1 *)(iVar6 + 0x27) = 0;
      return iStack_114;
    }
  }
  iVar7 = 0;
code_r0x00658389:
  iVar6 = 0;
  if (iVar7 < 1) {
    return iStack_114;
  }
  do {
    FUN_00652030(aiStack_fc[iVar6]);
    iVar6 = iVar6 + 1;
  } while (iVar6 < iVar7);
  return iStack_114;
}

