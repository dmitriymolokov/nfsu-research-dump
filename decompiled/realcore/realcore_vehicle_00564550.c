/* Decompiled from Speed.exe @ 00564550 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00564550(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  char local_3f8;
  char local_3f7 [503];
  undefined1 local_200;
  undefined4 local_1ff;
  
  if (DAT_00735da4 != 0) {
    FUN_004ebdf0(DAT_00735da4,0);
  }
  iVar6 = DAT_00734f8c;
  if ((DAT_00734f84 != 0) || (DAT_00734f88 != 0)) {
    local_3f8 = '\0';
    pcVar3 = local_3f7;
    for (iVar4 = 0x7c; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + 4;
    }
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    iVar4 = 0;
    DAT_00734dbc = 1;
    pcVar3[2] = '\0';
    if (DAT_00734f88 == 1) {
      pcVar3 = (char *)FUN_0059fb80();
      if (pcVar3 == (char *)0x0) {
        pcVar3 = (char *)FUN_0059fb80();
      }
      local_3f8 = *pcVar3;
      if (*pcVar3 != '\0') {
        pcVar5 = &local_3f8;
        do {
          cVar1 = pcVar5[(int)(pcVar3 + (1 - (int)&local_3f8))];
          pcVar5 = pcVar5 + 1;
          *pcVar5 = cVar1;
        } while (cVar1 != '\0');
      }
    }
    else if (DAT_00734f88 == 2) {
      if ((DAT_00734f8c == 0) || (iVar4 = FUN_0059fb80(), iVar4 == 0)) {
        iVar6 = 0x451c4ac6;
      }
      pcVar3 = (char *)FUN_0059fb80();
      if (pcVar3 == (char *)0x0) {
        pcVar3 = (char *)FUN_0059fb80();
      }
      local_3f8 = *pcVar3;
      iVar4 = iVar6;
      if (*pcVar3 != '\0') {
        pcVar5 = &local_3f8;
        do {
          cVar1 = pcVar5[(int)(pcVar3 + (1 - (int)&local_3f8))];
          pcVar5 = pcVar5 + 1;
          *pcVar5 = cVar1;
        } while (cVar1 != '\0');
      }
    }
    else {
      pcVar3 = (char *)FUN_0059fb80();
      if (pcVar3 == (char *)0x0) {
        pcVar3 = (char *)FUN_0059fb80();
      }
      local_3f8 = *pcVar3;
      if (*pcVar3 != '\0') {
        pcVar5 = &local_3f8;
        do {
          cVar1 = pcVar5[(int)(pcVar3 + (1 - (int)&local_3f8))];
          pcVar5 = pcVar5 + 1;
          *pcVar5 = cVar1;
        } while (cVar1 != '\0');
      }
    }
    local_200 = 0;
    puVar7 = &local_1ff;
    for (iVar6 = 0x7c; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = 0;
    *(undefined1 *)((int)puVar7 + 2) = 0;
    if (DAT_00734fc4 < 1) {
      iVar6 = FUN_0059fb80();
      if (iVar6 == 0) {
        iVar6 = FUN_0059fb80();
      }
    }
    else {
      iVar6 = FUN_0059fb80();
      if (iVar6 == 0) {
        iVar6 = FUN_0059fb80();
      }
    }
    FUN_00565da0("%s %s.",iVar6,&local_3f8);
    if (iVar4 == -0x70ee3d9f) {
      iVar6 = 0;
      do {
        cVar1 = (&DAT_00734bc8)[iVar6];
        cVar2 = "MU_Online_NetworkLogin.fng"[iVar6];
        iVar6 = iVar6 + 1;
        if ((cVar1 == '\0') || (cVar2 == '\0')) break;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        FUN_004eb950();
        return;
      }
    }
    FUN_004ee3a0(0,&LAB_00557760);
  }
  return;
}

