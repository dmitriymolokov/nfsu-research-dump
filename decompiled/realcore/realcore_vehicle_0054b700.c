/* Decompiled from Speed.exe @ 0054b700 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 FUN_0054b700(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    return 0;
  }
  iVar7 = 0;
  do {
    if (*(int *)(param_1 + 0x68) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_0064c660(*(undefined4 *)(param_1 + 0x70));
    }
    if (iVar3 <= iVar7) {
      return 0;
    }
    if (*(int *)(param_1 + 0x68) == 0) {
LAB_0054b759:
      puVar6 = &DAT_006b9172;
    }
    else {
      iVar3 = FUN_00666f30(DAT_0073d8d8,iVar7);
      puVar6 = (undefined1 *)(iVar3 + 8);
      if (iVar3 == 0) goto LAB_0054b759;
    }
    pcVar4 = param_2;
    do {
      cVar1 = pcVar4[(int)puVar6 - (int)param_2];
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      if ((cVar1 == '\0') || (cVar2 == '\0')) break;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      uVar5 = FUN_00666f30(DAT_0073d8d8,iVar7);
      return uVar5;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}

