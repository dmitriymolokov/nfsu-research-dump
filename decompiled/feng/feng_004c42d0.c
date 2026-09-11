/* Decompiled from Speed.exe @ 004c42d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c42d0(int param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  int local_4;
  
  local_4 = 0;
  do {
    pcVar9 = (char *)(local_4 + DAT_00734588);
    if (((pcVar9 != (char *)0x0) && (pcVar9[0x40] != '\0')) && (*(int *)(pcVar9 + 0xc54) == 0)) {
      cVar4 = *pcVar9;
      pcVar8 = pcVar9;
      while (cVar4 != '\0') {
        pcVar1 = pcVar8 + 1;
        pcVar8 = pcVar8 + 1;
        cVar4 = *pcVar1;
      }
      cVar4 = FUN_005a1630();
      if (cVar4 != '\0') {
        piVar5 = _malloc(0x740);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          FUN_00417600();
          piVar5[0x1cc] = (int)pcVar9;
          piVar5[0x1cd] = 0;
          piVar5[0x1ce] = 0;
        }
        FUN_004c4230(param_1);
        if ((char)piVar5[0x10d] == -1) {
          FUN_0057f2b0(1);
        }
        piVar5[0x1cd] = piVar5[0x10e];
        puVar2 = *(undefined4 **)(param_1 + 0x44);
        *puVar2 = piVar5;
        *(int **)(param_1 + 0x44) = piVar5;
        piVar5[1] = (int)puVar2;
        *piVar5 = param_1 + 0x40;
      }
    }
    local_4 = local_4 + 0xc90;
  } while (local_4 < 0x1b7b0);
  piVar5 = (int *)(param_1 + 0x40);
  FUN_00564990(piVar5,&LAB_004c2bc0);
  piVar10 = (int *)*piVar5;
  if (piVar10 != piVar5) {
    do {
      iVar6 = *(int *)(piVar10[0x1cc] + 0xc50);
      if (((iVar6 == 0x13) || (iVar6 == 0x11)) || ((iVar6 == 0x12 || (iVar6 == 0x10)))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      iVar6 = FUN_004f8730(param_1 + 0x4c,iVar6,0,!bVar3);
      iVar7 = *(int *)(piVar10[0x1cc] + 0xc50) * 0xc90 + DAT_00734588;
      pcVar9 = (char *)(iVar7 + 0xc0);
      if ((DAT_00734998 != 0) && (*(int *)(iVar7 + 0xc50) == 0xe)) {
        pcVar9 = "HONDA";
      }
      iVar7 = FUN_004f42f0("CARSELECT_MANUFACTURER_%s",pcVar9);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x24) != iVar7)) {
        *(int *)(iVar6 + 0x24) = iVar7;
        *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x400000;
      }
      piVar10 = (int *)*piVar10;
    } while (piVar10 != (int *)(param_1 + 0x40));
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x40);
  FUN_004f8960();
  return;
}

