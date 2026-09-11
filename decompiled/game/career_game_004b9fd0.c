/* Decompiled from Speed.exe @ 004b9fd0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004b9fd0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_8;
  
  iVar4 = FUN_0040cb70();
  do {
    local_8 = 0;
    if (*param_1 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *param_1 + -4;
    }
    if (*(int *)(iVar9 + 4) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(iVar9 + 4) + -4;
    }
    if (iVar9 == iVar4) {
      return;
    }
    do {
      if (iVar7 == iVar4) break;
      iVar1 = *(int *)(*(int *)(iVar9 + 0xc) + 0xa0);
      uVar5 = 0;
      uVar8 = 0;
      if (iVar1 == 1) {
        uVar5 = 2;
      }
      else if (iVar1 == 2) {
        uVar5 = 4;
      }
      iVar1 = *(int *)(*(int *)(iVar7 + 0xc) + 0xa0);
      if (iVar1 == 1) {
        uVar8 = 2;
      }
      else if (iVar1 == 2) {
        uVar8 = 4;
      }
      if (*(int *)(iVar9 + 0x18) == 1) {
        uVar5 = uVar5 + 8;
      }
      if (*(int *)(iVar7 + 0x18) == 1) {
        uVar8 = uVar8 + 8;
      }
      if (uVar8 < uVar5) {
        iVar1 = *(int *)(iVar7 + 4);
        piVar2 = *(int **)(iVar7 + 8);
        piVar6 = (int *)(iVar7 + 4);
        *piVar2 = iVar1;
        *(int **)(iVar1 + 4) = piVar2;
        puVar3 = *(undefined4 **)(iVar9 + 8);
        *puVar3 = piVar6;
        *(int **)(iVar9 + 8) = piVar6;
        *(undefined4 **)(iVar7 + 8) = puVar3;
        *piVar6 = iVar9 + 4;
        iVar7 = *(int *)(iVar9 + 4);
        if (iVar7 == 0) {
          iVar7 = 0;
          local_8 = local_8 + 1;
        }
        else {
          local_8 = local_8 + 1;
          iVar7 = iVar7 + -4;
        }
      }
      else {
        iVar9 = iVar7;
        if (*(int *)(iVar7 + 4) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar7 + 4) + -4;
        }
      }
    } while (iVar9 != iVar4);
    if (local_8 == 0) {
      return;
    }
  } while( true );
}

