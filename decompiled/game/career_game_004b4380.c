/* Decompiled from Speed.exe @ 004b4380 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b4380(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  int local_4;
  
  iVar5 = 0;
  iVar6 = 0;
  local_8 = 0;
  iVar4 = DAT_0078a418;
  if (0 < DAT_0078a41c) {
    do {
      iVar3 = iVar6;
      if ((*(int *)(iVar5 + 4 + iVar4) == 1) &&
         (iVar1 = iVar5 + 0x10 + iVar4, iVar3 = iVar1, iVar6 != 0)) {
        iVar7 = iVar6;
        if (DAT_0078a320 < 2) break;
        if (*(char *)(iVar6 + 0x424) == -1) {
          FUN_0057f2b0(1);
          iVar4 = DAT_0078a418;
        }
        fVar2 = *(float *)(iVar6 + 0x428);
        if (*(char *)(iVar1 + 0x424) == -1) {
          FUN_0057f2b0(1);
          iVar4 = DAT_0078a418;
        }
        iVar7 = iVar1;
        iVar3 = iVar6;
        if (fVar2 < *(float *)(iVar1 + 0x428)) break;
      }
      iVar7 = iVar3;
      local_8 = local_8 + 1;
      iVar5 = iVar5 + 0x750;
      iVar6 = iVar7;
    } while (local_8 < DAT_0078a41c);
    if (iVar7 != 0) {
      iVar6 = 1;
      local_8 = 0;
      if (0 < DAT_0078a41c) {
        local_4 = 0;
        do {
          if (*(int *)(local_4 + 4 + iVar4) == 2) {
            iVar4 = local_4 + 0x10 + iVar4;
            if (DAT_006f1dc8 <= _DAT_006cc8a8) {
              if ((DAT_006f1dcc <= _DAT_006cc8a8) || (iVar6 != 1)) {
                if ((DAT_006f1dd0 <= _DAT_006cc8a8) || (iVar6 != 2)) {
                  if ((DAT_006f1dd4 <= _DAT_006cc8a8) || (iVar6 != 3)) {
                    if (*(char *)(iVar7 + 0x424) == -1) {
                      FUN_0057f2b0(1);
                    }
                    FUN_0057f700(iVar4,iVar7,*(undefined4 *)(iVar7 + 0x18),
                                 (int)*(char *)(iVar7 + 0x424),1,0x40a00000);
                  }
                  else {
                    FUN_0057f970(DAT_006f1dd4,0xffffffff,0,0x40a00000);
                  }
                }
                else {
                  FUN_0057f970(DAT_006f1dd0,0xffffffff,0,0x40a00000);
                }
              }
              else {
                FUN_0057f970(DAT_006f1dcc,0xffffffff,0,0x40a00000);
              }
            }
            else {
              FUN_0057f970(DAT_006f1dc8,0xffffffff,0,0x40a00000);
            }
            FUN_0057d860(iVar4);
            iVar6 = iVar6 + 1;
            iVar4 = DAT_0078a418;
          }
          local_8 = local_8 + 1;
          local_4 = local_4 + 0x750;
        } while (local_8 < DAT_0078a41c);
      }
    }
  }
  return;
}

