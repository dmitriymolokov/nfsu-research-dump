/* Decompiled from Speed.exe @ 00594870 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00594870(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  
  FUN_0063f190(&DAT_007315f8);
  iVar6 = DAT_00734484;
  if ((int **)DAT_007377d0 != &DAT_007377d0) {
    do {
      piVar5 = DAT_007377d0;
      iVar1 = *DAT_007377d0;
      piVar2 = (int *)DAT_007377d0[1];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
      puVar3 = (undefined4 *)piVar5[2];
      iVar1 = puVar3[7];
      DAT_0073448c = DAT_0073448c + -1;
      bVar4 = false;
      puVar3[7] = iVar1 + -1;
      if ((puVar3[5] != 0) && (iVar1 + -1 == 0)) {
        bVar4 = true;
      }
      if (piVar5[3] != 0) {
        FUN_0063f1a0(&DAT_007315f8);
        (*(code *)piVar5[3])(puVar3,piVar5[4]);
        FUN_0063f190(&DAT_007315f8);
        iVar6 = DAT_00734484;
      }
      iVar1 = *(int *)(iVar6 + 0x18);
      *piVar5 = *(int *)(iVar6 + 0x10);
      *(int *)(iVar6 + 0x18) = iVar1 + -1;
      *(int **)(iVar6 + 0x10) = piVar5;
      if (bVar4) {
        if (-1 < (int)puVar3[1]) {
          if (puVar3[4] == 0) {
            FUN_0063c2c0(puVar3[3],100);
            iVar6 = DAT_00734484;
          }
          else {
            piVar2 = (int *)(puVar3[4] + 8);
            *piVar2 = *piVar2 + -1;
          }
          puVar3[1] = 0xffffffff;
        }
        iVar1 = *(int *)(iVar6 + 0x18);
        *puVar3 = *(undefined4 *)(iVar6 + 0x10);
        *(int *)(iVar6 + 0x18) = iVar1 + -1;
        *(undefined4 **)(iVar6 + 0x10) = puVar3;
      }
    } while ((int **)DAT_007377d0 != &DAT_007377d0);
  }
  FUN_0063f1a0(&DAT_007315f8);
  return;
}

