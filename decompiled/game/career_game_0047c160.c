/* Decompiled from Speed.exe @ 0047c160 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0047c160(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = 0;
  piVar2 = &DAT_00779904;
  do {
    iVar8 = DAT_0073619c;
    if (iVar3 < *(int *)(DAT_0073619c + 0x24)) {
      *piVar2 = iVar3;
    }
    else {
      *piVar2 = -1;
    }
    piVar2 = piVar2 + 6;
    iVar3 = iVar3 + 1;
  } while ((int)piVar2 < 0x779964);
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x60) == 1) {
    iVar3 = *(int *)(iVar8 + 0x24);
    iVar7 = 0;
    if (0 < iVar3) {
      piVar2 = (int *)(DAT_007361f8 + 0x28);
      do {
        iVar4 = 0;
        if (0 < iVar3) {
          piVar6 = (int *)(iVar8 + 0x520);
          do {
            if (*(int *)(*piVar2 + 0x1c) == *piVar6) {
              iVar4 = iVar4 + 1;
              if ((iVar4 < 1) || (4 < iVar4)) goto LAB_0047c1ee;
              goto LAB_0047c1e4;
            }
            iVar4 = iVar4 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar4 < iVar3);
        }
        iVar4 = 1;
LAB_0047c1e4:
        *(int *)(&DAT_007798ec + iVar4 * 0x18) = iVar7;
LAB_0047c1ee:
        iVar3 = *(int *)(iVar8 + 0x24);
        iVar7 = iVar7 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar7 < iVar3);
    }
    if (DAT_007361c4 == 1) {
      iVar3 = *(int *)(DAT_007361b4 + 4);
      iVar7 = *(int *)(iVar8 + 0x24);
      iVar4 = 0;
      if (0 < iVar7) {
        piVar2 = (int *)(iVar8 + 0x520);
        while (*(int *)(iVar3 + 0x1c) != *piVar2) {
          iVar4 = iVar4 + 1;
          piVar2 = piVar2 + 1;
          if (iVar7 <= iVar4) {
            return;
          }
        }
        if (iVar4 + 1 != 1) {
          iVar8 = 0;
          piVar2 = (int *)(DAT_007361f8 + 0x28);
          do {
            iVar5 = iVar8;
            if (*piVar2 != iVar3) {
              iVar5 = 0;
              if (0 < iVar7) {
                piVar6 = (int *)(DAT_0073619c + 0x520);
                do {
                  if (*(int *)(*piVar2 + 0x1c) == *piVar6) {
                    iVar5 = iVar5 + 1;
                    goto LAB_0047c297;
                  }
                  iVar5 = iVar5 + 1;
                  piVar6 = piVar6 + 1;
                } while (iVar5 < iVar7);
              }
              iVar5 = 1;
LAB_0047c297:
              if (iVar5 < iVar4 + 1) {
                (&DAT_00779904)[iVar5 * 6] = iVar8;
                iVar5 = DAT_00779904;
              }
              else {
                *(int *)(&DAT_007798ec + iVar5 * 0x18) = iVar8;
                iVar5 = DAT_00779904;
              }
            }
            DAT_00779904 = iVar5;
            iVar7 = *(int *)(DAT_0073619c + 0x24);
            iVar8 = iVar8 + 1;
            piVar2 = piVar2 + 1;
            if (iVar7 <= iVar8) {
              return;
            }
          } while( true );
        }
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < *(int *)(iVar8 + 0x24)) {
      piVar2 = (int *)(DAT_007361f8 + 0x28);
      do {
        cVar1 = *(char *)(*(int *)(*piVar2 + 0x14) + 3);
        if (('\0' < cVar1) && (cVar1 < '\x05')) {
          *(int *)(&DAT_007798ec + cVar1 * 0x18) = iVar3;
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar3 < *(int *)(iVar8 + 0x24));
    }
  }
  return;
}

