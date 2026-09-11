/* Decompiled from Speed.exe @ 005baccd */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005baccd(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  
  if ((((param_1 == 0) || (*(int *)(param_1 + 4) != 8)) || (param_2 == 0)) ||
     (*(int *)(param_2 + 4) != 8)) {
LAB_005bae6e:
    uVar5 = 0x80004005;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14);
    iVar2 = *(int *)(param_2 + 0x14);
    if (iVar1 == iVar2) {
      *param_3 = iVar1;
    }
    else {
      uVar7 = *(uint *)(&DAT_0069f0f0 + iVar2 * 8);
      if (*(uint *)(&DAT_0069f0f0 + iVar2 * 8) < *(uint *)(&DAT_0069f0f0 + iVar1 * 8)) {
        uVar7 = *(uint *)(&DAT_0069f0f0 + iVar1 * 8);
      }
      uVar3 = *(uint *)(&DAT_0069f0f4 + iVar1 * 8) & *(uint *)(&DAT_0069f0f4 + iVar2 * 8);
      if ((uVar3 & 1) == 0) {
        if ((uVar3 & 4) == 0) {
          if ((uVar3 & 2) == 0) {
            if ((uVar3 & 8) == 0) {
              if ((uVar3 & 0x10) != 0) {
                uVar7 = 0;
                do {
                  iVar4 = iVar2;
                  iVar6 = iVar1;
                  if (uVar7 == 0) {
                    iVar4 = iVar1;
                    iVar6 = iVar2;
                  }
                  if (iVar6 == 0xd) {
LAB_005bae79:
                    *param_3 = iVar4;
                    goto LAB_005bae7e;
                  }
                  if (iVar6 == 0xf) {
                    if (0xe < iVar4) {
                      bVar9 = SBORROW4(iVar4,0x13);
                      iVar6 = -0x13;
                      bVar8 = iVar4 == 0x13;
LAB_005bae66:
                      if (bVar8 || bVar9 != iVar4 + iVar6 < 0) goto LAB_005bae79;
                    }
                  }
                  else if ((iVar6 == 0x14) && (0x13 < iVar4)) {
                    bVar9 = SBORROW4(iVar4,0x18);
                    iVar6 = -0x18;
                    bVar8 = iVar4 == 0x18;
                    goto LAB_005bae66;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 < 2);
              }
              goto LAB_005bae6e;
            }
            if (uVar7 == 0) {
              *param_3 = 9;
            }
            else if ((uVar7 == 8) || (uVar7 == 0x10)) {
              *param_3 = 10;
            }
            else if (uVar7 == 0x20) {
              *param_3 = 0xb;
            }
            else if (uVar7 == 0x40) {
              *param_3 = 0xc;
            }
          }
          else if (uVar7 == 0) {
            *param_3 = 1;
          }
          else if (uVar7 == 8) {
            *param_3 = 2;
          }
          else if (uVar7 == 0x10) {
            *param_3 = 3;
          }
          else if ((uVar7 == 0x20) || (uVar7 == 0x40)) {
            *param_3 = 4;
          }
        }
        else if (uVar7 == 0) {
          *param_3 = 5;
        }
        else if (uVar7 == 8) {
          *param_3 = 6;
        }
        else if (uVar7 == 0x10) {
          *param_3 = 7;
        }
        else if ((uVar7 == 0x20) || (uVar7 == 0x40)) {
          *param_3 = 8;
        }
      }
      else {
        *param_3 = 0;
      }
    }
LAB_005bae7e:
    uVar5 = 0;
  }
  return uVar5;
}

