/* Decompiled from Speed.exe @ 00463b30 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00463b30(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  int unaff_EDI;
  
  *(undefined2 *)(*(int *)(unaff_EDI + 0x18) + 0x2e) = 0;
  *(undefined2 *)(*(int *)(unaff_EDI + 0x18) + 0x2e) = 0;
  *(undefined2 *)(*(int *)(unaff_EDI + 0x18) + 0x2e) = 0;
  iVar3 = *(int *)(*(int *)(unaff_EDI + 8) + 0x30);
  pcVar7 = (char *)(iVar3 + 0x10);
  FUN_00459980(*(int *)(unaff_EDI + 8));
  FUN_0059cb20();
  iVar6 = 0;
  if ('\0' < *pcVar7) {
    puVar5 = (undefined4 *)(iVar3 + 0x28);
    do {
      iVar3 = *(int *)(unaff_EDI + 0x14);
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      puVar4 = (undefined4 *)(*(int *)(iVar3 + 0x24) + (-0x18 - (int)pcVar7) + (int)puVar5);
      *puVar4 = puVar5[-2];
      puVar4[3] = 0;
      puVar4[1] = uVar1;
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 4;
      puVar4[2] = uVar2;
      *(undefined1 *)(iVar3 + 0x18) = 1;
    } while (iVar6 < *pcVar7);
  }
  FUN_00463910(unaff_EDI);
  return;
}

