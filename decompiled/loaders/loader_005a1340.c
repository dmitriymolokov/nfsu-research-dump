/* Decompiled from Speed.exe @ 005a1340 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005a1340(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  char *pcVar5;
  int unaff_EBX;
  short sVar6;
  uint uVar7;
  int *local_8;
  int local_4;
  
  local_4 = 0;
  sVar6 = 100;
  local_8 = &DAT_00733ffc;
  uVar7 = 2;
  do {
    uVar1 = uVar7 - 2;
    if ((((uVar1 < 0x100) && (iVar2 = local_8[-1], iVar2 != 0)) && (*(int *)(iVar2 + 4) == 6)) &&
       (*(short *)(iVar2 + 0x34) == param_1)) {
      if ((iVar2 == 0) &&
         (((*(int *)(unaff_EBX + 0x88b0) == 0 ||
           (piVar3 = (int *)(*(int *)(unaff_EBX + 0x88b0) + 0x58a0), piVar3 == (int *)0x0)) ||
          (uVar7 - 2 != *piVar3)))) {
        pcVar5 = (char *)0x0;
      }
      else {
        pcVar5 = (char *)(uVar7 + 0x34a + unaff_EBX);
      }
      if (*pcVar5 == '\x02') {
        if (*(short *)(iVar2 + 0x36) < sVar6) {
          sVar6 = *(short *)(iVar2 + 0x36);
          local_4 = iVar2;
        }
      }
    }
    if (((uVar7 - 1 < 0x100) && (iVar2 = *local_8, iVar2 != 0)) &&
       ((*(int *)(iVar2 + 4) == 6 && (*(short *)(iVar2 + 0x34) == param_1)))) {
      if ((iVar2 == 0) &&
         (((*(int *)(unaff_EBX + 0x88b0) == 0 ||
           (piVar3 = (int *)(*(int *)(unaff_EBX + 0x88b0) + 0x58a0), piVar3 == (int *)0x0)) ||
          (uVar7 - 1 != *piVar3)))) {
        pcVar5 = (char *)0x0;
      }
      else {
        pcVar5 = (char *)(unaff_EBX + 0x34d + uVar1);
      }
      if (*pcVar5 == '\x02') {
        if (*(short *)(iVar2 + 0x36) < sVar6) {
          sVar6 = *(short *)(iVar2 + 0x36);
          local_4 = iVar2;
        }
      }
    }
    if (((uVar7 < 0x100) && (iVar2 = local_8[1], iVar2 != 0)) &&
       ((*(int *)(iVar2 + 4) == 6 && (*(short *)(iVar2 + 0x34) == param_1)))) {
      if ((iVar2 == 0) &&
         (((*(int *)(unaff_EBX + 0x88b0) == 0 ||
           (puVar4 = (uint *)(*(int *)(unaff_EBX + 0x88b0) + 0x58a0), puVar4 == (uint *)0x0)) ||
          (uVar7 != *puVar4)))) {
        pcVar5 = (char *)0x0;
      }
      else {
        pcVar5 = (char *)(unaff_EBX + 0x34e + uVar1);
      }
      if (*pcVar5 == '\x02') {
        if (*(short *)(iVar2 + 0x36) < sVar6) {
          sVar6 = *(short *)(iVar2 + 0x36);
          local_4 = iVar2;
        }
      }
    }
    if ((((uVar7 + 1 < 0x100) && (iVar2 = local_8[2], iVar2 != 0)) && (*(int *)(iVar2 + 4) == 6)) &&
       (*(short *)(iVar2 + 0x34) == param_1)) {
      if ((iVar2 == 0) &&
         (((*(int *)(unaff_EBX + 0x88b0) == 0 ||
           (puVar4 = (uint *)(*(int *)(unaff_EBX + 0x88b0) + 0x58a0), puVar4 == (uint *)0x0)) ||
          (uVar7 + 1 != *puVar4)))) {
        pcVar5 = (char *)0x0;
      }
      else {
        pcVar5 = (char *)(unaff_EBX + 0x34f + uVar1);
      }
      if (*pcVar5 == '\x02') {
        if (*(short *)(iVar2 + 0x36) < sVar6) {
          sVar6 = *(short *)(iVar2 + 0x36);
          local_4 = iVar2;
        }
      }
    }
    local_8 = local_8 + 4;
    uVar1 = uVar7 + 2;
    uVar7 = uVar7 + 4;
  } while (uVar1 < 0x100);
  if (local_4 != 0) {
    return (int)*(short *)(local_4 + 0x36);
  }
  return -1;
}

