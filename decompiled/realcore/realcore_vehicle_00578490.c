/* Decompiled from Speed.exe @ 00578490 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00578490(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x40) != 0) {
    piVar1 = *(int **)(unaff_EDI + 0x1c);
    puVar2 = (undefined4 *)piVar1[0x38];
    if (puVar2 != (undefined4 *)0x0) {
      iVar3 = *piVar1;
      piVar4 = (int *)piVar1[1];
      *piVar4 = iVar3;
      *(int **)(iVar3 + 4) = piVar4;
      piVar1[0x38] = 0;
      piVar1 = puVar2 + 0x36;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00579090();
        *DAT_0073b0e0 = puVar2;
        puVar5 = puVar2;
        puVar2[1] = DAT_0073b0e0;
        DAT_0073b0e0 = puVar5;
        *puVar2 = &DAT_0073b0dc;
      }
    }
  }
  *(int *)(unaff_EDI + 0x40) = param_1;
  if (param_1 != 0) {
    FUN_00579010(*(undefined4 *)(param_1 + 0x1c));
  }
  return;
}

