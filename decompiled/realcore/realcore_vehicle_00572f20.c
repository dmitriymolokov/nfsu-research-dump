/* Decompiled from Speed.exe @ 00572f20 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


int * FUN_00572f20(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x50) < 0) {
    return (int *)0x0;
  }
  puVar1 = (undefined4 *)(unaff_EDI + 0x68);
  if ((undefined4 *)*(int *)(unaff_EDI + 0x68) == puVar1) {
    piVar5 = _malloc(0x9558);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[10] = 0;
      piVar5[0xb] = 0;
    }
    puVar2 = *(undefined4 **)(unaff_EDI + 0x6c);
    *puVar2 = piVar5;
    *(int **)(unaff_EDI + 0x6c) = piVar5;
    piVar5[1] = (int)puVar2;
    *piVar5 = (int)puVar1;
  }
  piVar5 = (int *)*puVar1;
  iVar3 = *piVar5;
  piVar4 = (int *)piVar5[1];
  *piVar4 = iVar3;
  *(int **)(iVar3 + 4) = piVar4;
  puVar2 = *(undefined4 **)(unaff_EDI + 0x74);
  *puVar2 = piVar5;
  *(int **)(unaff_EDI + 0x74) = piVar5;
  piVar5[1] = (int)puVar2;
  *piVar5 = unaff_EDI + 0x70;
  FUN_00571a40();
  if ((DAT_006f08a4 == *(int *)(unaff_EDI + 0x54)) && (*(int *)(unaff_EDI + 0xa8) < 0x1000)) {
    *(int *)(unaff_EDI + 0xb0 + *(int *)(unaff_EDI + 0xa8) * 4) = DAT_006f08a4;
    *(int *)(unaff_EDI + 0xa8) = *(int *)(unaff_EDI + 0xa8) + 1;
  }
  *(int *)(unaff_EDI + 0xa4) = DAT_006f08a4;
  piVar5[0x54] = 0;
  *(undefined1 *)(piVar5 + 0xf) = 1;
  FUN_00572d90(unaff_EDI);
  piVar5[0x55] = piVar5[0x54];
  *(undefined1 *)(piVar5 + 0xf) = 0;
  if (*(char *)((int)piVar5 + 0x41) != '\0') {
    iVar3 = *piVar5;
    piVar4 = (int *)piVar5[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    puVar2 = *(undefined4 **)(unaff_EDI + 0x6c);
    *puVar2 = piVar5;
    *(int **)(unaff_EDI + 0x6c) = piVar5;
    piVar5[1] = (int)puVar2;
    *piVar5 = (int)puVar1;
    return (int *)0x0;
  }
  return piVar5;
}

