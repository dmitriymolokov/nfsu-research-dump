/* Decompiled from Speed.exe @ 004f1040 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f1040(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;
  uint uVar10;
  
  iVar4 = param_4;
  uVar3 = *(uint *)(param_2 + 0x10);
  param_4 = 0;
  if (uVar3 != 0) {
    do {
      puVar1 = (uint *)(*(int *)(param_2 + 0x14) + param_4 * 0xc);
      uVar10 = *puVar1;
      if (uVar10 < 0x109) {
        if (uVar10 == 0x108) {
          FUN_004f0a50(0,0xff);
        }
        else if (uVar10 < 0x102) {
          if (uVar10 == 0x101) {
            *(bool *)(param_1 + 1) = puVar1[1] == 1;
          }
          else if (uVar10 < 3) {
            if (uVar10 == 2) {
              uVar10 = 0xffffffff;
LAB_004f1181:
              FUN_004f0700(puVar1[1],param_3,iVar4,uVar10,param_5);
            }
            else if (uVar10 == 0) {
              if ((param_3 != 0) && (iVar6 = FUN_004ff010(), iVar6 != 0)) {
                *(int *)(param_3 + 0x54) = iVar6;
                FUN_004ff030(param_3);
                *(undefined4 *)(iVar6 + 0x10) = 0;
              }
            }
            else if (uVar10 == 1) {
              uVar10 = puVar1[2];
              if ((uVar10 == 0xfffffffc) || (uVar10 == 0xffffffff)) goto LAB_004f1181;
              uVar5 = FUN_004ffbe0();
              FUN_004f0700(puVar1[1],param_3,iVar4,uVar5,param_5);
            }
          }
          else {
            if (uVar10 == 3) {
              uVar10 = 0xfffffffb;
              goto LAB_004f1181;
            }
            if (uVar10 != 0x100) goto switchD_004f11b4_caseD_104;
            if (puVar1[1] == 0) {
              iVar6 = 0;
LAB_004f1157:
              if (puVar1[1] != 0) goto switchD_004f11b4_caseD_104;
            }
            else {
              iVar6 = FUN_004ffbe0();
              if (iVar6 == 0) goto LAB_004f1157;
            }
            FUN_00500350(iVar6);
          }
        }
        else {
          switch(uVar10) {
          case 0x102:
            if (*(int *)(iVar4 + 0x80) == 0) {
              FUN_004f1620(0);
            }
            else {
              FUN_004f1620(*(undefined4 *)(*(int *)(iVar4 + 0x80) + 0xc));
            }
            break;
          case 0x103:
            iVar6 = FUN_004f1680();
            if (iVar6 == 0) {
              iVar6 = 0;
LAB_004f120f:
              if (((puVar1[1] == 0) || (iVar6 = FUN_004ffbe0(), iVar6 == 0)) && (puVar1[1] != 0))
              break;
            }
            else {
              iVar6 = FUN_004ffbe0();
              if (iVar6 == 0) goto LAB_004f120f;
            }
            FUN_00500350(iVar6);
            break;
          case 0x105:
            FUN_004f0a50(1,param_5);
            break;
          case 0x106:
            FUN_004f0a50(1,0xff);
            break;
          case 0x107:
            FUN_004f0a50(0,param_5);
          }
        }
      }
      else if (uVar10 < 0x2c1) {
        if (uVar10 == 0x2c0) {
          iVar6 = *(int *)(param_1 + 0x4148);
          pcVar8 = *(char **)(iVar4 + 0xc);
          if (iVar6 != 0x10) {
            *(int *)(param_1 + 0x4148) = iVar6 + 1;
            iVar6 = (iVar6 * 0x100 + 0x414c + param_1) - (int)pcVar8;
            do {
              cVar2 = *pcVar8;
              pcVar8[iVar6] = cVar2;
              pcVar8 = pcVar8 + 1;
            } while (cVar2 != '\0');
          }
        }
        else {
          switch(uVar10) {
          case 0x200:
            FUN_004f0800(param_1,iVar4);
            break;
          case 0x201:
            FUN_004f08f0(param_1,iVar4,*(undefined4 *)(iVar4 + 0x1c));
            break;
          case 0x202:
            uVar10 = 0;
            do {
              uVar7 = 1 << ((byte)uVar10 & 0x1f);
              if ((param_5 & uVar7) != 0) {
                FUN_004f08f0(param_1,iVar4,uVar7);
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < 8);
            break;
          case 0x203:
            FUN_004f09b0(iVar4);
            break;
          case 0x204:
            FUN_004f08f0(param_1,iVar4,0);
          }
        }
      }
      else if (uVar10 < 0x301) {
        if (uVar10 == 0x300) {
          if (*(uint *)(*(int *)(param_3 + 0x54) + 0x30) != puVar1[1]) goto LAB_004f13d7;
        }
        else if (uVar10 == 0x2c1) {
          if ((*(int *)(param_1 + 0x4148) != 0) &&
             (iVar6 = *(int *)(param_1 + 0x4148) + -1, *(int *)(param_1 + 0x4148) = iVar6,
             iVar6 * 0x100 + 0x414c + param_1 != 0)) {
            FUN_004f0800(param_1,iVar4);
          }
        }
        else if (uVar10 == 0x2c2) {
          FUN_004f16a0();
        }
      }
      else {
        if (uVar10 == 0x301) {
          bVar9 = *(uint *)(*(int *)(param_3 + 0x54) + 0x30) == puVar1[1];
        }
        else {
          bVar9 = uVar10 == 0x500;
        }
        if (bVar9) {
LAB_004f13d7:
          param_4 = FUN_004fe500();
        }
      }
switchD_004f11b4_caseD_104:
      param_4 = param_4 + 1;
    } while (param_4 < uVar3);
  }
  return;
}

