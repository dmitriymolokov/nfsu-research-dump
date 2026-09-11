/* Decompiled from Speed.exe @ 0052f650 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


byte FUN_0052f650(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int unaff_EDI;
  byte bVar7;
  
  cVar3 = FUN_004664b0();
  bVar7 = cVar3 != '\0';
  iVar1 = *(int *)(unaff_EDI + 100);
  iVar2 = *(int *)(iVar1 + 600);
  cVar3 = *(char *)(iVar2 + 0x15);
  if ((cVar3 == '\x01') || (*(char *)(*(int *)(iVar1 + 0x25c) + 0x15) == '\x01')) {
    bVar7 = bVar7 | 2;
  }
  cVar4 = FUN_00466500();
  if (cVar4 != '\0') {
    bVar7 = bVar7 | 4;
  }
  if ((cVar3 == '\0') && (*(char *)(*(int *)(iVar1 + 0x25c) + 0x15) == '\0')) {
    bVar7 = bVar7 | 8;
  }
  iVar5 = 0;
  iVar6 = 0;
  if (cVar3 == '\0') {
    iVar5 = *(int *)(iVar2 + 0x140);
  }
  if (*(char *)(*(int *)(iVar1 + 0x25c) + 0x15) == '\0') {
    iVar6 = *(int *)(*(int *)(iVar1 + 0x25c) + 0x140);
  }
  if ((iVar5 != 0) || (iVar6 != 0)) {
    bVar7 = bVar7 | 0x10;
  }
  return bVar7;
}

