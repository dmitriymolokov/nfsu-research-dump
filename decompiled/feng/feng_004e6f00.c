/* Decompiled from Speed.exe @ 004e6f00 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004e6f00(int param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = param_1;
  cVar1 = DAT_007363b1;
  bVar8 = DAT_007363b1 == 't';
  DAT_007363b1 = 0;
  if ((((bVar8) || (cVar1 == 'T')) && (iVar4 = FUN_004f3f90(&DAT_00746104), iVar4 != 0)) &&
     ((*(int *)(iVar4 + 0x18) != 0 && (*(int **)(iVar4 + 0x14) != (int *)0x0)))) {
    (**(code **)(**(int **)(iVar4 + 0x14) + 8))(0xc519bfc8,0,0,*(int *)(iVar4 + 0x18));
  }
  if (cVar1 == '\t') {
    iVar4 = FUN_004f3f90(&DAT_00746104);
    if (((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) && (*(int **)(iVar4 + 0x14) != (int *)0x0))
    {
      (**(code **)(**(int **)(iVar4 + 0x14) + 8))(0x14de0507,0,0,*(int *)(iVar4 + 0x18));
    }
  }
  else if (cVar1 == '\0') goto LAB_004e6f9f;
  FUN_0059e3b0(cVar1);
LAB_004e6f9f:
  piVar6 = (int *)(param_1 + 0x40);
  param_1 = 0;
  if (0 < *piVar6) {
    piVar6 = (int *)(iVar2 + 0x44);
    do {
      if ((*piVar6 != 0) && (*(char *)(param_1 + 0x144 + iVar2) == '\x01')) {
        uVar5 = *(uint *)(*piVar6 + 0x10);
        if (uVar5 == 0xf17e2c46) {
          uVar5 = *(uint *)(piVar6[0x30] + 0x10);
        }
        if (uVar5 < 0xb04475b3) {
          if (uVar5 == 0xb04475b2) {
            if ((((cVar1 == 'z') || (cVar1 == 'Z')) &&
                (iVar4 = FUN_004f3f90(&DAT_00746104), iVar4 != 0)) &&
               ((*(int *)(iVar4 + 0x18) != 0 && (*(int **)(iVar4 + 0x14) != (int *)0x0)))) {
              (**(code **)(**(int **)(iVar4 + 0x14) + 8))(0xc519bfc0,0,0,*(int *)(iVar4 + 0x18));
            }
          }
          else if (uVar5 < 0x7614183f) {
            if (uVar5 == 0x7614183e) {
              if (((cVar1 == 'z') || (cVar1 == 'Z')) && (cVar3 = FUN_004e6ed0(iVar2), cVar3 == '\0')
                 ) {
                uVar9 = 0xc519bfc0;
                goto LAB_004e71ae;
              }
            }
            else if (uVar5 == 0x46fce6dd) {
              if ((cVar1 == 'q') || (cVar1 == 'Q')) {
                uStack_8 = 0;
                uStack_4 = 0;
                uStack_24 = 0xfd61c7e0;
                uStack_1c = 0x3b4ff2d;
                uStack_20 = 0x639;
                uStack_14 = 0xcfadb8b4;
                uStack_18 = 0x541389e5;
                uStack_10 = 0xcfadb8b4;
                uStack_c = 0xb8a7c6cd;
                iVar7 = 0;
                iVar4 = FUN_004f6630();
                if (iVar4 != 0) {
                  do {
                    if (*(int *)(iVar4 + 0x1c) != 0) {
                      iVar7 = iVar4;
                    }
                    iVar4 = *(int *)(iVar4 + 4);
                  } while (iVar4 != 0);
                  if (iVar7 != 0) {
                    cVar3 = FUN_004f6650();
                    iVar4 = DAT_00735e0c;
                    if (cVar3 == '\0') {
                      FUN_004dc6e0(&uStack_24,"GenericDialog.fng",*(undefined4 *)(iVar7 + 0xc));
                      *(undefined1 *)(iVar2 + 0x154) = 0;
                    }
                    else if ((DAT_00735e0c != 0) && (iVar7 = FUN_004f4070(), iVar7 != 0)) {
                      FUN_004dc6e0(&uStack_24,"GenericDialog.fng",*(undefined4 *)(iVar4 + 0xc));
                      *(int *)(iVar2 + 0x158) = iVar4;
                      *(undefined1 *)(iVar2 + 0x154) = 1;
                    }
                  }
                }
              }
            }
            else if (uVar5 == 0x4848c0fd) {
              if (((cVar1 == 'c') || (cVar1 == 'C')) && (cVar3 = FUN_004e6ed0(iVar2), cVar3 == '\0')
                 ) {
                uVar9 = 0xc519bfc0;
                goto LAB_004e71ae;
              }
            }
            else if ((uVar5 == 0x608b3c7f) && ((cVar1 == 'z' || (cVar1 == 'Z')))) {
              cVar3 = FUN_004e6ed0(iVar2);
              bVar8 = cVar3 == '\0';
              goto LAB_004e71a7;
            }
          }
          else if (uVar5 == 0x99cf2125) {
            if (((cVar1 == 'd') || (cVar1 == 'D')) && (cVar3 = FUN_004e6ed0(iVar2), cVar3 == '\0'))
            {
              FUN_004e7720(iVar2,0xc519bfc0,param_1);
            }
          }
          else if (uVar5 == 0x9fe0ca88) goto LAB_004e7185;
        }
        else if (uVar5 < 0xc87eef53) {
          if (uVar5 == 0xc87eef52) {
            if (((cVar1 == 'a') || (cVar1 == 'A')) && (cVar3 = FUN_004e6ed0(iVar2), cVar3 == '\0'))
            {
              FUN_004c96c0(0xc519bfc0);
              FUN_004c96c0(0xc519bfbf);
            }
          }
          else if (uVar5 == 0xbae3166c) {
            if (((cVar1 == 'p') || (cVar1 == 'P')) && (cVar3 = FUN_004e6ed0(iVar2), cVar3 == '\0'))
            {
              uVar9 = 0xc519bfc0;
              goto LAB_004e71ae;
            }
          }
          else if (((uVar5 == 0xc50f61e1) && ((cVar1 == 'r' || (cVar1 == 'R')))) &&
                  (cVar3 = FUN_004e6ed0(iVar2), cVar3 == '\0')) {
            uVar9 = 0xc519bfc0;
LAB_004e71ae:
            FUN_004c96c0(uVar9);
          }
        }
        else if (uVar5 == 0xde780d2b) {
LAB_004e7185:
          if ((cVar1 == 'z') || (cVar1 == 'Z')) {
            iVar4 = FUN_004f3f90(&DAT_00746104);
            if (iVar4 != 0) {
              bVar8 = *(int *)(iVar4 + 0x18) == 0;
LAB_004e71a7:
              if (!bVar8) goto LAB_004e71bb;
            }
            uVar9 = 0xc519bfbf;
            goto LAB_004e71ae;
          }
        }
        else if ((uVar5 == 0xf8e25afe) && ((cVar1 == 'd' || (cVar1 == 'D')))) {
          uVar9 = 0x1234ddd0;
          goto LAB_004e71ae;
        }
      }
LAB_004e71bb:
      param_1 = param_1 + 1;
      piVar6 = piVar6 + 1;
    } while (param_1 < *(int *)(iVar2 + 0x40));
  }
  return;
}

