/* Decompiled from Speed.exe @ 005a7d60 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005a7d60(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  iVar3 = 1000;
  iVar4 = (&DAT_007316a0)[param_2];
  iVar6 = (&DAT_007316a0)[param_2] + -1;
  do {
    iVar5 = iVar6;
    if (iVar4 < DAT_006ee1e4) {
      iVar6 = iVar4 * 0x14;
      iVar1 = *(int *)(&DAT_00732334 + iVar4 * 0x14) - param_2;
      iVar7 = DAT_006ee1e4;
      if (iVar1 < iVar3) {
        iVar7 = iVar4 + 1;
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        iVar2 = *(int *)(&DAT_00732330 + iVar6) - param_1;
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (iVar1 + iVar2 < iVar3) {
          iVar8 = *(int *)(&DAT_00732338 + iVar6) - param_3;
          if (iVar8 < 0) {
            iVar8 = -iVar8;
          }
          iVar8 = iVar1 + iVar2 + iVar8;
          if (iVar8 < iVar3) {
            iVar6 = *(int *)(&DAT_0073233c + iVar6) - param_4;
            if (iVar6 < 0) {
              iVar6 = -iVar6;
            }
            iVar8 = iVar8 + iVar6;
            if (iVar8 < iVar3) {
              local_4 = (&DAT_00732340)[iVar4 * 5];
              iVar3 = iVar8;
            }
          }
        }
      }
    }
    else {
      iVar7 = iVar4;
      if (iVar5 < 0) {
        return local_4;
      }
    }
    iVar1 = iVar5 * 0x14;
    iVar2 = param_2 - *(int *)(&DAT_00732334 + iVar5 * 0x14);
    iVar4 = iVar7;
    if (iVar2 < iVar3) {
      iVar6 = iVar5 + -1;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      iVar7 = *(int *)(&DAT_00732330 + iVar1) - param_1;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if (iVar2 + iVar7 < iVar3) {
        iVar8 = *(int *)(&DAT_00732338 + iVar1) - param_3;
        if (iVar8 < 0) {
          iVar8 = -iVar8;
        }
        iVar8 = iVar2 + iVar7 + iVar8;
        if (iVar8 < iVar3) {
          iVar7 = *(int *)(&DAT_0073233c + iVar1) - param_4;
          if (iVar7 < 0) {
            iVar7 = -iVar7;
          }
          iVar8 = iVar8 + iVar7;
          if (iVar8 < iVar3) {
            local_4 = (&DAT_00732340)[iVar5 * 5];
            iVar3 = iVar8;
          }
        }
      }
    }
    else {
      iVar6 = -1;
    }
  } while( true );
}

