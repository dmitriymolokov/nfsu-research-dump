/* Decompiled from Speed.exe @ 00514bf0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00514bf0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = DAT_00735708;
  piVar1 = (int *)(param_1 + 0x18);
  piVar2 = *(int **)(param_1 + 0x18);
  while (piVar2 != piVar1) {
    piVar2 = (int *)*piVar1;
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    piVar4 = (int *)piVar2[0x28];
    if (piVar4 != (int *)0x0) {
      iVar3 = *piVar4;
      piVar5 = (int *)piVar4[1];
      *piVar5 = iVar3;
      *(int **)(iVar3 + 4) = piVar5;
      *DAT_00743c7c = (int)piVar4;
      piVar5 = piVar4;
      piVar4[1] = (int)DAT_00743c7c;
      DAT_00743c7c = piVar5;
      *piVar4 = (int)&DAT_00743c78;
      piVar2[0x28] = 0;
    }
    iVar3 = *(int *)(iVar6 + 0x18);
    *piVar2 = *(int *)(iVar6 + 0x10);
    *(int *)(iVar6 + 0x18) = iVar3 + -1;
    *(int **)(iVar6 + 0x10) = piVar2;
    piVar2 = (int *)*piVar1;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

