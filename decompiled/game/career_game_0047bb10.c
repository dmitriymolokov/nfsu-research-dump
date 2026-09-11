/* Decompiled from Speed.exe @ 0047bb10 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0047bb10(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_8;
  
  local_8 = DAT_007797f4;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  if ((DAT_00777ccc == 0) || (*(int *)(DAT_00777ccc + 0x58a0) != 0)) {
    cVar4 = FUN_0043a2e0();
    iVar11 = DAT_00735f64;
    if (cVar4 == '\0') {
      if (((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) || (DAT_007361c4 != 2)) {
        if (DAT_00735f64 != 0) {
          if (DAT_007361c4 == 1) {
            iVar6 = *(int *)(*(int *)(DAT_007361b4 + 4) + 0x14);
            iVar7 = *(int *)(DAT_0073619c + 0x24);
            if (iVar7 == 1) {
              iVar8 = 9;
            }
            else {
              iVar8 = 1;
              if (iVar7 == 2) {
                if (*(char *)(iVar6 + 3) == '\x01') {
                  iVar8 = 7;
                }
                else if (*(char *)(iVar6 + 3) == '\x02') {
                  iVar8 = 8;
                }
              }
              else if (iVar7 == 3) {
                cVar4 = *(char *)(iVar6 + 3);
                if (cVar4 == '\x03') {
                  iVar8 = 4;
                }
                else if (cVar4 == '\x01') {
                  iVar8 = 5;
                }
                else if (cVar4 == '\x02') {
                  iVar8 = 6;
                }
              }
              else if (iVar7 == 4) {
                cVar4 = *(char *)(iVar6 + 3);
                if (cVar4 == '\x03') {
                  iVar8 = 0;
                }
                else if (cVar4 == '\x01') {
                  iVar8 = 1;
                }
                else if (cVar4 == '\x02') {
                  iVar8 = 2;
                }
                else if (cVar4 == '\x04') {
                  iVar8 = 3;
                }
              }
            }
            iVar6 = *(int *)(DAT_00735f64 + iVar8 * 4);
            if (0 < iVar6) {
              iVar6 = FUN_004216b0(iVar6);
              local_8 = *(int *)(*(int *)(iVar11 + 0x30 + iVar8 * 4) + iVar6 * 4);
            }
          }
          else if (DAT_007361c4 == 2) {
            iVar6 = *(int *)(*(int *)(DAT_007361b8 + 4) + 0x14);
            iVar7 = *(int *)(DAT_0073619c + 0x24);
            iVar8 = *(int *)(*(int *)(DAT_007361b4 + 4) + 0x14);
            iVar10 = 7;
            iVar9 = 8;
            if (iVar7 != 1) {
              if (iVar7 == 2) {
                if ((*(char *)(iVar8 + 3) != '\x01') && (*(char *)(iVar8 + 3) == '\x02')) {
                  iVar10 = 8;
                }
                if (*(char *)(iVar6 + 3) == '\x01') {
                  iVar9 = 7;
                }
                else if (*(char *)(iVar6 + 3) == '\x02') {
                  iVar9 = 8;
                }
              }
              else if (iVar7 == 3) {
                cVar4 = *(char *)(iVar8 + 3);
                if (cVar4 == '\x03') {
                  iVar10 = 4;
                }
                else if (cVar4 == '\x01') {
                  iVar10 = 5;
                }
                else if (cVar4 == '\x02') {
                  iVar10 = 6;
                }
                cVar4 = *(char *)(iVar6 + 3);
                if (cVar4 == '\x03') {
                  iVar9 = 4;
                }
                else if (cVar4 == '\x01') {
                  iVar9 = 5;
                }
                else if (cVar4 == '\x02') {
                  iVar9 = 6;
                }
              }
              else if (iVar7 == 4) {
                cVar4 = *(char *)(iVar8 + 3);
                if (cVar4 == '\x03') {
                  iVar10 = 0;
                }
                else if (cVar4 == '\x01') {
                  iVar10 = 1;
                }
                else if (cVar4 == '\x02') {
                  iVar10 = 2;
                }
                else if (cVar4 == '\x04') {
                  iVar10 = 3;
                }
                cVar4 = *(char *)(iVar6 + 3);
                if (cVar4 == '\x03') {
                  iVar9 = 0;
                }
                else if (cVar4 == '\x01') {
                  iVar9 = 1;
                }
                else if (cVar4 == '\x02') {
                  iVar9 = 2;
                }
                else if (cVar4 == '\x04') {
                  iVar9 = 3;
                }
              }
            }
            bVar3 = false;
            FUN_0047b730(DAT_00735f64,iVar10);
            FUN_0047b730(iVar11,iVar9);
            piVar1 = (int *)(iVar11 + iVar10 * 4);
            iVar6 = 0;
            do {
              if (*piVar1 <= iVar6) break;
              iVar7 = 0;
              if (!bVar3) {
                piVar2 = (int *)(iVar11 + iVar9 * 4);
                do {
                  if (*piVar2 <= iVar7) break;
                  iVar8 = *(int *)(*(int *)(iVar11 + 0x30 + iVar10 * 4) + iVar6 * 4);
                  if (iVar8 == *(int *)(*(int *)(iVar11 + 0x30 + iVar9 * 4) + iVar7 * 4)) {
                    bVar3 = true;
                    local_8 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                  iVar11 = DAT_00735f64;
                } while (!bVar3);
              }
              iVar6 = iVar6 + 1;
            } while (!bVar3);
          }
        }
      }
      else {
        switch(param_2) {
        case 0x515:
        case 0x516:
        case 0x51b:
          local_8 = DAT_007797f0;
          break;
        case 0x517:
        case 0x518:
        case 0x519:
        case 0x51a:
        case 0x51c:
          local_8 = DAT_007797d4;
        }
      }
    }
    else if (((*(int *)(DAT_007361b4 + 4) != 0) &&
             (iVar11 = *(int *)(*(int *)(DAT_007361b4 + 4) + 0x14), iVar11 != 0)) &&
            ((cVar4 = *(char *)(iVar11 + 3), '\0' < cVar4 && (cVar4 < '\x05')))) {
      cVar5 = FUN_0041f600();
      iVar11 = *(int *)(param_1 + 0x14);
      if (cVar5 == '\0') {
        if ((-1 < iVar11) && (iVar11 < 2)) {
          local_8 = *(int *)(&DAT_007799ac + ((int)cVar4 + iVar11 * 4) * 4);
        }
      }
      else if ((-1 < iVar11) && (iVar11 < 2)) {
        local_8 = *(int *)(&DAT_0077997c + ((int)cVar4 + iVar11 * 4) * 4);
      }
    }
  }
  else {
    local_8 = DAT_00779958;
  }
  FUN_0047ba30(local_8);
  return;
}

