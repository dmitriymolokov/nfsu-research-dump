/* Decompiled from Speed.exe @ 00591c90 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00591c90(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = DAT_0073557c;
  puVar1 = (undefined4 *)param_1[2];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0042ac80();
    iVar2 = *(int *)(iVar3 + 0x18);
    *puVar1 = *(undefined4 *)(iVar3 + 0x10);
    *(int *)(iVar3 + 0x18) = iVar2 + -1;
    *(undefined4 **)(iVar3 + 0x10) = puVar1;
  }
  puVar1 = (undefined4 *)param_1[3];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0042ac80();
    iVar2 = *(int *)(iVar3 + 0x18);
    *puVar1 = *(undefined4 *)(iVar3 + 0x10);
    *(int *)(iVar3 + 0x18) = iVar2 + -1;
    *(undefined4 **)(iVar3 + 0x10) = puVar1;
  }
  if (param_1[0x18] != 0) {
    FUN_00579140();
  }
  iVar3 = *param_1;
  piVar4 = (int *)param_1[1];
  *piVar4 = iVar3;
  *(int **)(iVar3 + 4) = piVar4;
  return;
}

