/* Decompiled from Speed.exe @ 005595f0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


uint FUN_005595f0(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  
  iVar2 = *(int *)(param_1 + 0x40);
  pcVar7 = (char *)(iVar2 + 0x33);
  iVar4 = 0;
  if (pcVar7 != (char *)0x0) {
    cVar1 = *pcVar7;
    while (cVar1 != '\0') {
      iVar6 = iVar4 + 1;
      iVar4 = iVar4 + 1;
      cVar1 = pcVar7[iVar6];
    }
  }
  bVar3 = false;
  if ((iVar4 < 6) || (0x32 < iVar4)) goto LAB_00559683;
  iVar6 = 0;
  if (0 < iVar4) {
    pcVar7 = (char *)(iVar2 + 0x34);
    do {
      if ((((pcVar7[-1] == '@') && (iVar6 != 0)) && (iVar6 < iVar4 + -3)) && (*pcVar7 != '.')) {
        if (iVar6 < iVar4) {
          pcVar7 = (char *)(iVar2 + 0x33 + iVar6);
          goto LAB_00559658;
        }
        break;
      }
      iVar6 = iVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (iVar6 < iVar4);
  }
  goto LAB_00559672;
  while( true ) {
    iVar6 = iVar6 + 1;
    pcVar7 = pcVar7 + 1;
    if (iVar4 <= iVar6) break;
LAB_00559658:
    if ((*pcVar7 == '.') && (iVar6 < iVar4 + -1)) {
      bVar3 = true;
      break;
    }
  }
LAB_00559672:
  if (bVar3) {
    return CONCAT31((int3)((uint)iVar4 >> 8),1);
  }
LAB_00559683:
  uVar5 = FUN_004eb950();
  return uVar5 & 0xffffff00;
}

