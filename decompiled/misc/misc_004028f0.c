/* Decompiled from Speed.exe @ 004028f0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 FUN_004028f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *param_1;
  if ((iVar5 == -0x7ffcb000) || (iVar5 == -0x7ffcaff0)) {
    return 1;
  }
  if (iVar5 == 0x35021) {
    uVar4 = (int)param_1 + 0x17U & 0xfffffff0;
    if (*(int *)(uVar4 + 8) == 4) {
      piVar3 = (int *)(uVar4 + 0x10);
      for (iVar5 = *(int *)(uVar4 + 0xc); iVar5 != 0; iVar5 = iVar5 + -1) {
        iVar1 = *piVar3;
        piVar2 = (int *)piVar3[1];
        piVar3 = piVar3 + 0x88;
        *piVar2 = iVar1;
        *(int **)(iVar1 + 4) = piVar2;
      }
    }
    return 1;
  }
  if (iVar5 == 0x35020) {
    uVar4 = (int)param_1 + 0x17U & 0xfffffff0;
    if (*(int *)(uVar4 + 8) == 5) {
      piVar3 = (int *)(uVar4 + 0x10);
      for (iVar5 = *(int *)(uVar4 + 0xc); iVar5 != 0; iVar5 = iVar5 + -1) {
        iVar1 = *piVar3;
        piVar2 = (int *)piVar3[1];
        *piVar2 = iVar1;
        *(int **)(iVar1 + 4) = piVar2;
        DAT_0078ea30 = DAT_0078ea30 + -1;
        piVar3 = piVar3 + 0x30;
      }
    }
    return 1;
  }
  return 0;
}

