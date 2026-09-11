/* Decompiled from Speed.exe @ 00434b50 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __thiscall FUN_00434b50(undefined4 param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (((param_3 == 3) && (cVar3 = FUN_0043a2e0(param_1), cVar3 != '\0')) && (DAT_0077b240 != 6)) {
    if (DAT_0077b240 != 5) {
      FUN_0043aed0();
      return;
    }
  }
  else {
    *param_2 = param_3;
    iVar6 = 0;
    if (0 < param_2[9]) {
      iVar5 = 0x520;
      do {
        piVar1 = *(int **)((int)param_2 + iVar5);
        iVar4 = *piVar1;
        iVar2 = *(int *)(iVar4 + 0x24);
        if (0 < iVar2) {
          if (iVar2 < 3) {
LAB_00434be4:
            if (*param_2 == 4) {
              (**(code **)(**(int **)(iVar4 + 0x30) + 0x20))();
            }
            else {
LAB_00434bf9:
              (**(code **)(**(int **)(iVar4 + 0x30) + 0x1c))();
            }
          }
          else if (iVar2 == 3) {
            iVar2 = *(int *)(iVar4 + 0x30);
            if (*param_2 == 4) {
              *(undefined4 *)(iVar2 + 0x1e0) = 0;
              *(undefined4 *)(iVar2 + 0x1e4) = 0;
              *(undefined4 *)(iVar2 + 0x1dc) = 0x3f800000;
              goto LAB_00434be4;
            }
            goto LAB_00434bf9;
          }
        }
        if (param_3 == 4) {
          piVar1[9] = DAT_0073ad34;
          FUN_00586690(0x3c23d70a);
          iVar4 = FUN_00674898();
          piVar1[9] = iVar4;
          *(undefined2 *)((int)piVar1 + 6) = 0;
          if (DAT_0078a318 != 0) {
            *(undefined1 *)(piVar1 + 2) = 0;
            *(undefined2 *)(piVar1 + 1) = 0;
          }
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar6 < param_2[9]);
    }
    if (param_3 == 3) {
      param_2[2] = DAT_0073ad34;
    }
    else if (param_3 == 4) {
      param_2[4] = DAT_0073ad34;
      FUN_00586690(0x3c23d70a);
      iVar6 = FUN_00674898();
      param_2[4] = iVar6;
      param_2[1] = DAT_0073ad34;
      param_2[2] = 0;
    }
    if ((param_3 == 3) || (param_3 == 4)) {
      iVar6 = *(int *)(DAT_007361f8 + 0x18) - *(int *)(DAT_007361f8 + 0x24);
      iVar5 = 0;
      if (0 < iVar6) {
        do {
          *(undefined1 *)
           (*(int *)(DAT_007361f8 + 0x28 + (*(int *)(DAT_007361f8 + 0x24) + iVar5) * 4) + 0x4d0) = 1
          ;
          FUN_00426110();
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar6);
      }
    }
  }
  return;
}

