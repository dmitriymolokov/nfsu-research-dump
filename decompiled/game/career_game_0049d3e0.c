/* Decompiled from Speed.exe @ 0049d3e0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0049d3e0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *unaff_EDI;
  char local_20 [32];
  
  iVar1 = *unaff_EDI;
  FUN_004c2a50();
  iVar3 = FUN_0059fb80();
  if (iVar3 == 0) {
    iVar3 = FUN_0059fb80();
  }
  iVar5 = 0x20;
  pcVar4 = local_20;
  do {
    cVar2 = pcVar4[iVar3 - (int)local_20];
    iVar5 = iVar5 + -1;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    pcVar4 = pcVar4 + 1;
  } while (iVar5 != 0);
  if ((*unaff_EDI == 0) || (iVar3 = *(int *)(*unaff_EDI + 0x18), iVar3 == 0)) {
    cVar2 = FUN_0043a2e0();
    if (cVar2 == '\0') {
      iVar3 = *(int *)(iVar1 + 0x14) + 0x73c;
    }
    else {
      iVar3 = FUN_0043b850((int)*(short *)(*unaff_EDI + 10));
      iVar3 = iVar3 + 0x19;
    }
  }
  else {
    cVar2 = FUN_0043a2e0();
    if (cVar2 == '\0') {
      iVar3 = iVar3 + 0x34;
    }
    else {
      iVar3 = DAT_0077b244 + 0x19;
    }
  }
  FUN_004f68a0("%s - %s",iVar3,local_20);
  return;
}

