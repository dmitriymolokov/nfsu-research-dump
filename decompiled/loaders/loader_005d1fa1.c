/* Decompiled from Speed.exe @ 005d1fa1 */
/* Module: Loader */
/* Ghidra DecompileAll */


uint FUN_005d1fa1(int param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  
  if (param_2 == 0) {
    param_2 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      piVar8 = (int *)(*(int *)(param_1 + 0x14) + 4);
      do {
        iVar3 = *(int *)(*(int *)(param_1 + 0x8c) + *piVar8 * 4);
        iVar5 = *(int *)(iVar3 + 0x38);
        if (iVar5 == 0) {
          iVar4 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        if (iVar5 == 0) {
          iVar7 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        iVar3 = *(int *)(*(int *)(iVar3 + 0x24) + piVar8[1] + iVar4 + 0xc);
        pbVar9 = param_3;
        if (*(int *)(iVar3 + iVar7) == 0) {
LAB_005d2053:
          if (pbVar9 == (byte *)0x0) break;
        }
        else {
          if (iVar5 == 0) {
            iVar5 = *(int *)(param_1 + 0x2c);
          }
          else {
            iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 8);
          }
          pbVar6 = (byte *)(iVar3 + 4 + iVar5);
          if (pbVar6 == (byte *)0x0) goto LAB_005d2053;
          if (param_3 != (byte *)0x0) {
            do {
              bVar1 = *pbVar6;
              bVar11 = bVar1 < *pbVar9;
              if (bVar1 != *pbVar9) {
LAB_005d2046:
                pbVar9 = (byte *)((1 - (uint)bVar11) - (uint)(bVar11 != 0));
                goto LAB_005d2053;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar11 = bVar1 < pbVar9[1];
              if (bVar1 != pbVar9[1]) goto LAB_005d2046;
              pbVar6 = pbVar6 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar1 != 0);
            pbVar9 = (byte *)0x0;
            goto LAB_005d2053;
          }
        }
        param_2 = param_2 + 1;
        piVar8 = piVar8 + 0x11;
      } while (param_2 < *(uint *)(param_1 + 0x10));
    }
    if (param_2 != *(uint *)(param_1 + 0x10)) {
      uVar2 = param_2 * 0x44 + *(int *)(param_1 + 0x14);
LAB_005d21d0:
      return ~uVar2;
    }
  }
  else {
    iVar3 = FUN_005d1d40(param_2,2,0);
    if (iVar3 != 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar3 + 4) * 4);
      if (*(int *)(iVar5 + 0x38) == 0) {
        iVar4 = *(int *)(param_1 + 0x2c);
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
      }
      iVar4 = *(int *)(iVar5 + 0x24) + *(int *)(iVar3 + 8) + iVar4;
      if (((*(int *)(iVar4 + 4) == 5) &&
          ((*(int *)(iVar3 + 0x18) != -1 || (*(int *)(iVar4 + 0x10) == 0)))) &&
         ((uVar2 = *(uint *)(iVar4 + 0x14), *(int *)(iVar3 + 0x10) != 0 ||
          (iVar5 = FUN_005cb568(iVar3,uVar2), -1 < iVar5)))) {
        param_2 = 0;
        if (uVar2 != 0) {
          iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar3 + 4) * 4) + 0x38);
          piVar8 = (int *)(*(int *)(iVar3 + 0x10) + 4);
          do {
            iVar4 = *(int *)(*(int *)(param_1 + 0x8c) + *piVar8 * 4);
            if (*(int *)(iVar4 + 0x38) == 0) {
              iVar7 = *(int *)(param_1 + 0x2c);
            }
            else {
              iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 8);
            }
            if (iVar5 == 0) {
              iVar10 = *(int *)(param_1 + 0x2c);
            }
            else {
              iVar10 = *(int *)(*(int *)(param_1 + 0xc) + 8);
            }
            iVar4 = *(int *)(*(int *)(iVar4 + 0x24) + piVar8[1] + iVar7 + 0xc);
            pbVar9 = param_3;
            if (*(int *)(iVar4 + iVar10) == 0) {
LAB_005d21aa:
              if (pbVar9 == (byte *)0x0) break;
            }
            else {
              if (iVar5 == 0) {
                iVar7 = *(int *)(param_1 + 0x2c);
              }
              else {
                iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 8);
              }
              pbVar6 = (byte *)(iVar4 + 4 + iVar7);
              if (pbVar6 == (byte *)0x0) goto LAB_005d21aa;
              if (param_3 != (byte *)0x0) {
                do {
                  bVar1 = *pbVar6;
                  bVar11 = bVar1 < *pbVar9;
                  if (bVar1 != *pbVar9) {
LAB_005d219b:
                    pbVar9 = (byte *)((1 - (uint)bVar11) - (uint)(bVar11 != 0));
                    goto LAB_005d21aa;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar6[1];
                  bVar11 = bVar1 < pbVar9[1];
                  if (bVar1 != pbVar9[1]) goto LAB_005d219b;
                  pbVar6 = pbVar6 + 2;
                  pbVar9 = pbVar9 + 2;
                } while (bVar1 != 0);
                pbVar9 = (byte *)0x0;
                goto LAB_005d21aa;
              }
            }
            param_2 = param_2 + 1;
            piVar8 = piVar8 + 8;
          } while (param_2 < uVar2);
        }
        if (param_2 != uVar2) {
          uVar2 = param_2 * 0x20 + *(int *)(iVar3 + 0x10);
          goto LAB_005d21d0;
        }
      }
    }
  }
  return 0;
}

