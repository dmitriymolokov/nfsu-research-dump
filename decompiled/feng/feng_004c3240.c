/* Decompiled from Speed.exe @ 004c3240 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c3240(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  
  iVar7 = 0;
  do {
    iVar5 = DAT_00734588 + iVar7;
    if ((((iVar5 != 0) && (*(char *)(iVar5 + 0x40) != '\0')) && (*(int *)(iVar5 + 0xc54) == 0)) &&
       ((cVar2 = FUN_005a1630(), cVar2 != '\0' &&
        (iVar3 = FUN_004acce0(), iVar3 != *(int *)(iVar5 + 0xc50))))) {
      pvVar4 = _malloc(0xe70);
      if (pvVar4 != (void *)0x0) {
        FUN_004c2cc0();
      }
      FUN_00564940(param_1 + 0x40,&LAB_004c3230);
    }
    iVar7 = iVar7 + 0xc90;
  } while (iVar7 < 0x1b7b0);
  piVar8 = *(int **)(param_1 + 0x40);
  if (piVar8 != (int *)(param_1 + 0x40)) {
    do {
      iVar7 = *(int *)(piVar8[0x1cc] + 0xc50);
      if (((iVar7 == 0x13) || (iVar7 == 0x11)) || ((iVar7 == 0x12 || (iVar7 == 0x10)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      iVar7 = FUN_004f8730(param_1 + 0x4c,iVar7,0,!bVar1);
      iVar5 = *(int *)(piVar8[0x1cc] + 0xc50) * 0xc90 + DAT_00734588;
      pcVar6 = (char *)(iVar5 + 0xc0);
      if ((DAT_00734998 != 0) && (*(int *)(iVar5 + 0xc50) == 0xe)) {
        pcVar6 = "HONDA";
      }
      iVar5 = FUN_004f42f0("CARSELECT_MANUFACTURER_%s",pcVar6);
      if ((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != iVar5)) {
        *(int *)(iVar7 + 0x24) = iVar5;
        *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)(param_1 + 0x40));
  }
  return;
}

