/* Decompiled from Speed.exe @ 00593620 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00593620(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  
  piVar7 = DAT_007377e8;
  piVar9 = (int *)FUN_0040a880();
  iVar8 = DAT_0072cc04;
  iVar4 = DAT_0072cc08;
  while (piVar7 != piVar9) {
    piVar1 = (int *)*piVar7;
    piVar6 = (int *)piVar7[7];
    while (piVar6 != piVar7 + 7) {
      piVar2 = (int *)*piVar6;
      puVar3 = (undefined4 *)piVar6[1];
      *puVar3 = piVar2;
      piVar2[1] = (int)puVar3;
      *(undefined4 *)(piVar6[2] + 0x270) = 0;
      iVar4 = *(int *)(iVar8 + 0x18);
      *piVar6 = *(int *)(iVar8 + 0x10);
      *(int **)(iVar8 + 0x10) = piVar6;
      *(int *)(iVar8 + 0x18) = iVar4 + -1;
      piVar6 = piVar2;
      iVar4 = DAT_0072cc08;
    }
    iVar5 = *piVar7;
    piVar6 = (int *)piVar7[1];
    *piVar6 = iVar5;
    *(int **)(iVar5 + 4) = piVar6;
    FUN_00592b20();
    iVar5 = *(int *)(iVar4 + 0x18);
    *piVar7 = *(int *)(iVar4 + 0x10);
    *(int *)(iVar4 + 0x18) = iVar5 + -1;
    *(int **)(iVar4 + 0x10) = piVar7;
    piVar7 = piVar1;
  }
  FUN_004682c0();
  return;
}

