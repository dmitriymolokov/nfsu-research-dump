/* Decompiled from Speed.exe @ 0059de20 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_0059de20(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  
  if (*param_1 != -0x7ffc5000) {
    return 0;
  }
  piVar6 = param_1 + 2;
  if (piVar6 < (int *)(param_1[1] + 8 + (int)param_1)) {
    piVar3 = (int *)FUN_0040a880();
    iVar4 = DAT_007349b4;
    do {
      for (piVar1 = DAT_0073769c; piVar1 != piVar3; piVar1 = (int *)*piVar1) {
        if (*(int *)((int)piVar6 + 0x1fU & 0xfffffff0) == *(int *)piVar1[2]) {
          iVar5 = *piVar1;
          piVar2 = (int *)piVar1[1];
          *piVar2 = iVar5;
          *(int **)(iVar5 + 4) = piVar2;
          iVar5 = *(int *)(iVar4 + 0x18);
          *piVar1 = *(int *)(iVar4 + 0x10);
          *(int **)(iVar4 + 0x10) = piVar1;
          iVar5 = iVar5 + -1;
          bVar7 = DAT_007349b8 != 0;
          *(int *)(iVar4 + 0x18) = iVar5;
          if (bVar7) {
            if (iVar5 == 0) {
              FUN_00567220();
              iVar4 = 0;
              DAT_007349b4 = 0;
            }
            else {
              DAT_007349b8 = 1;
            }
          }
          break;
        }
      }
      piVar6 = (int *)((int)piVar6 + piVar6[1] + 8);
    } while (piVar6 < (int *)(param_1[1] + 8 + (int)param_1));
  }
  return 1;
}

