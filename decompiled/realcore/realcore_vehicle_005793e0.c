/* Decompiled from Speed.exe @ 005793e0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_005793e0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  piVar4 = DAT_0073b0dc;
  piVar6 = (int *)FUN_0040a880();
  while (piVar4 != piVar6) {
    piVar1 = (int *)*piVar4;
    piVar2 = (int *)piVar4[1];
    *piVar2 = (int)piVar1;
    piVar1[1] = (int)piVar2;
    FUN_00578f80(piVar4);
    iVar5 = DAT_007345bc;
    iVar3 = *(int *)(DAT_007345bc + 0x18);
    *piVar4 = *(int *)(DAT_007345bc + 0x10);
    *(int **)(iVar5 + 0x10) = piVar4;
    *(int *)(iVar5 + 0x18) = iVar3 + -1;
    piVar4 = piVar1;
  }
  return;
}

