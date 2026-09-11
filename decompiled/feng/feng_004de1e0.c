/* Decompiled from Speed.exe @ 004de1e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004de1e0(undefined4 *param_1)

{
  int *piVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined **ppuVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0068683b;
  local_c = ExceptionList;
  piVar1 = param_1 + 1;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c37f8;
  *piVar1 = (int)piVar1;
  param_1[2] = piVar1;
  local_4 = 0;
  if ((DAT_00734998 == 5) || (DAT_00734998 == 0)) {
    ppuVar11 = &PTR_s_DiscErrorPC_fng_006fa1a4;
    do {
      puVar5 = _malloc(0x10);
      if (puVar5 == (undefined4 *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        puVar2 = *ppuVar11;
        *puVar5 = &PTR_FUN_006c3744;
        puVar5[3] = puVar2;
        piVar6 = puVar5 + 1;
      }
      puVar5 = (undefined4 *)param_1[2];
      *puVar5 = piVar6;
      ppuVar11 = ppuVar11 + 1;
      param_1[2] = piVar6;
      piVar6[1] = (int)puVar5;
      *piVar6 = (int)piVar1;
    } while ((int)ppuVar11 < 0x6fa1bc);
  }
  else {
    ppuVar11 = &PTR_s_DiscErrorPC_fng_006fa1bc;
    do {
      puVar5 = _malloc(0x10);
      if (puVar5 == (undefined4 *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        puVar2 = *ppuVar11;
        *puVar5 = &PTR_FUN_006c3744;
        puVar5[3] = puVar2;
        piVar6 = puVar5 + 1;
      }
      puVar5 = (undefined4 *)param_1[2];
      *puVar5 = piVar6;
      ppuVar11 = ppuVar11 + 1;
      param_1[2] = piVar6;
      piVar6[1] = (int)puVar5;
      *piVar6 = (int)piVar1;
    } while ((int)ppuVar11 < 0x6fa1d8);
  }
  if (*piVar1 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *piVar1 + -4;
  }
  param_1[3] = iVar7;
  pbVar9 = *(byte **)(iVar7 + 0xc);
  pcVar10 = "DiscErrorPC.fng";
  do {
    bVar8 = *pcVar10;
    if (('`' < (char)bVar8) && ((char)bVar8 < '{')) {
      bVar8 = bVar8 & 0x5f;
    }
    bVar3 = *pbVar9;
    pcVar10 = pcVar10 + 1;
    if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
      bVar3 = bVar3 & 0x5f;
    }
    pbVar9 = pbVar9 + 1;
  } while (((bVar8 != 0) && (bVar3 != 0)) && (bVar8 == bVar3));
  if (bVar8 == bVar3) {
    if (DAT_007070bc == 0) {
      cVar4 = FUN_00411910(DAT_0070108f);
      if (cVar4 == '\0') {
        DAT_007070bc = 1;
      }
      else {
        DAT_007070bc = 0;
      }
    }
    else {
      cVar4 = FUN_004119d0();
      DAT_007070bc = 1;
    }
    iVar7 = FUN_00594c60("foobar",0,1);
    if (((iVar7 != 0) && (iVar7 = *(int *)(iVar7 + 4), FUN_00594d40(), iVar7 != -1)) ||
       (cVar4 != '\0')) {
      if (*(int *)(param_1[3] + 4) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(param_1[3] + 4) + -4;
      }
      param_1[3] = iVar7;
    }
  }
  DAT_00735790 = *(undefined4 *)(param_1[3] + 0xc);
  ExceptionList = local_c;
  return param_1;
}

