/* Decompiled from Speed.exe @ 00422a70 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void FUN_00422a70(void)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 local_90 [140];
  
  FUN_00422580(4,local_90);
  iVar7 = 1;
  puVar5 = local_90;
  do {
    iVar4 = 0;
    pcVar2 = DAT_0078a418;
    if (0 < DAT_0078a41c) {
      do {
        if ((*pcVar2 < '\x01') && (pcVar2[3] == iVar7)) {
          if (pcVar2[0x734] == '\0') {
            if (*(int *)(pcVar2 + 4) == 1) {
              uVar9 = 1;
            }
            else {
              if (*(int *)(pcVar2 + 4) != 2) break;
              uVar9 = 3;
            }
          }
          else {
            uVar9 = 0;
          }
          FUN_00422410(pcVar2,puVar5,uVar9);
          break;
        }
        iVar4 = iVar4 + 1;
        pcVar2 = pcVar2 + 0x750;
      } while (iVar4 < DAT_0078a41c);
    }
    iVar4 = DAT_007361f8;
    iVar7 = iVar7 + 1;
    puVar5 = puVar5 + 0x20;
    if (4 < iVar7) {
      FUN_0041fe50();
      iVar7 = 0;
      if (0 < DAT_0078a41c) {
        iVar8 = 0;
        do {
          iVar6 = iVar4;
          if ((*(int *)(DAT_0078a418 + iVar8 + 4) == 3) &&
             (piVar3 = (int *)FUN_00598bf0(DAT_0078a418 + iVar8), iVar6 = DAT_007361f8,
             piVar3 != (int *)0x0)) {
            piVar1 = *(int **)(iVar4 + 4);
            *piVar1 = (int)piVar3;
            *(int **)(iVar4 + 4) = piVar3;
            piVar3[1] = (int)piVar1;
            *piVar3 = iVar4;
            iVar6 = DAT_007361f8;
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 0x750;
          iVar4 = iVar6;
        } while (iVar7 < DAT_0078a41c);
      }
      FUN_0041fe50();
      return;
    }
  } while( true );
}

