/* Decompiled from Speed.exe @ 0049e9d0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0049e9d0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_208;
  int local_204;
  char local_200 [128];
  char local_180 [128];
  char local_100 [256];
  
  iVar7 = DAT_00758ad4;
  iVar2 = 0;
  if (0 < DAT_007787b0) {
    piVar3 = &DAT_00777cd4;
    do {
      if (*piVar3 == DAT_0078a410) {
        puVar6 = &DAT_00777cd0 + iVar2 * 0x57;
        goto LAB_0049ea06;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x57;
    } while (iVar2 < DAT_007787b0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_0049ea06:
  FUN_004387e0(puVar6[0x30]);
  puVar6 = &DAT_00758ad8;
  pcVar4 = local_180;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar4 = *puVar6;
    puVar6 = puVar6 + 1;
    pcVar4 = pcVar4 + 4;
  }
  puVar6 = &DAT_00758ad8;
  pcVar4 = local_200;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar4 = *puVar6;
    puVar6 = puVar6 + 1;
    pcVar4 = pcVar4 + 4;
  }
  FUN_00674898();
  iVar2 = FUN_00674898();
  FUN_004aa970(&DAT_007588c4,iVar2 + iVar7);
  DAT_00760288 = 0;
  DAT_0076028c = 0;
  DAT_00760290 = 0;
  DAT_00760294 = 0;
  DAT_00760298 = 0;
  local_208 = 0;
  local_204 = 0;
  do {
    if (local_180[local_208] != local_200[local_208]) {
      if ((local_204 < 0) || (DAT_007343fc <= local_208)) {
        iVar7 = 0;
      }
      else {
        iVar7 = local_204 + DAT_007343f8;
      }
      iVar2 = FUN_0059fb80();
      if (iVar2 == 0) {
        iVar2 = FUN_0059fb80();
      }
      iVar5 = 0x100;
      pcVar4 = local_100;
      do {
        cVar1 = pcVar4[iVar2 - (int)local_100];
        iVar5 = iVar5 + -1;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        pcVar4 = pcVar4 + 1;
      } while (iVar5 != 0);
      piVar3 = _malloc(0x108);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3[2] = 0x6a765215;
      }
      iVar2 = FUN_0059fb80();
      if (iVar2 == 0) {
        iVar2 = FUN_0059fb80();
      }
      FUN_004f68c0(0xfc,local_100,iVar2);
      puVar6 = *(undefined4 **)(param_1 + 8);
      *puVar6 = piVar3;
      *(int **)(param_1 + 8) = piVar3;
      *piVar3 = param_1 + 4;
      piVar3[1] = (int)puVar6;
      if (*(short *)(iVar7 + 4) == 0) {
        FUN_005a3850(*(undefined1 *)(iVar7 + 7));
      }
      else if (*(short *)(iVar7 + 4) == 2) {
        FUN_005a3780();
      }
    }
    local_204 = local_204 + 0x20;
    local_208 = local_208 + 1;
    if (0xfff < local_204) {
      return;
    }
  } while( true );
}

