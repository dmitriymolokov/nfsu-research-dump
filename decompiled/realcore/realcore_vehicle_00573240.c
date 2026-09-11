/* Decompiled from Speed.exe @ 00573240 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00573240(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (*(char *)(param_1 + 2) != '\0') {
    piVar4 = (int *)FUN_0040a880();
    while (piVar5 = DAT_0077a928, DAT_0077a928 != piVar4) {
      while (piVar5[2] != 8) {
        piVar2 = piVar5 + 1;
        piVar5 = (int *)*piVar2;
        if ((int *)*piVar2 == piVar4) goto LAB_0057327c;
      }
      iVar1 = piVar5[0x24];
      while (iVar1 == 0) {
        FUN_004483c0();
        iVar1 = piVar5[0x24];
      }
      iVar1 = *piVar5;
      piVar2 = (int *)piVar5[1];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
      FUN_004481d0();
      iVar3 = DAT_007360f8;
      iVar1 = *(int *)(DAT_007360f8 + 0x18);
      *piVar5 = *(int *)(DAT_007360f8 + 0x10);
      *(int *)(iVar3 + 0x18) = iVar1 + -1;
      *(int **)(iVar3 + 0x10) = piVar5;
    }
LAB_0057327c:
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}

