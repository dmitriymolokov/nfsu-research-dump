/* Decompiled from Speed.exe @ 004dbc70 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004dbc70(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int ******ppppppiVar4;
  int ******ppppppiVar5;
  int *****pppppiVar6;
  int *****pppppiVar7;
  int *piVar8;
  int iVar9;
  int *****local_30;
  int *****local_2c;
  int *****local_28;
  int *****local_24;
  int *****local_20;
  int *****local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00687be8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004d9e40(param_1);
  *(undefined4 *)(param_1 + 0xb14) = param_2;
  *(undefined4 *)(param_1 + 0xb18) = param_3;
  piVar8 = *(int **)(param_1 + 0xb2c);
  iVar9 = 0;
  piVar2 = (int *)FUN_0040a880();
  if (piVar8 != piVar2) {
    do {
      if (*(int *)(param_1 + 0xb28) == iVar9) goto LAB_004dbcd2;
      piVar8 = (int *)*piVar8;
      iVar9 = iVar9 + 1;
    } while (piVar8 != piVar2);
  }
  piVar8 = (int *)0x0;
LAB_004dbcd2:
  iVar9 = FUN_004d8440(param_1);
  local_28 = (int *****)&local_28;
  local_24 = (int *****)&local_28;
  local_20 = (int *****)&local_20;
  local_1c = (int *****)&local_20;
  local_30 = (int *****)&local_30;
  local_2c = (int *****)&local_30;
  local_c = 2;
  if (iVar9 == 2) {
    if (piVar8 != (int *)0x0) {
      FUN_004d7db0(&DAT_0074696c,piVar8[2],1);
      FUN_004d7db0(&DAT_0074696c,piVar8[2],2);
    }
    FUN_004dbbb0(param_1);
    FUN_004dbbf0(param_1);
  }
  else if (iVar9 == 3) {
    if (piVar8 != (int *)0x0) {
      FUN_004d7db0(&DAT_0074696c,piVar8[2],1);
      FUN_004d7db0(&DAT_0074696c,piVar8[2],2);
      iVar9 = piVar8[2];
      if ((int ******)local_30 != &local_30) {
        do {
          pppppiVar7 = (int *****)*local_30;
          pppppiVar6 = (int *****)local_30[1];
          *pppppiVar6 = (int ****)pppppiVar7;
          pppppiVar7[1] = (int ****)pppppiVar6;
          _free(local_30);
        } while ((int ******)local_30 != &local_30);
      }
      ppppppiVar5 = (int ******)local_30;
      puVar1 = DAT_0073ad40;
      puVar3 = (undefined4 *)FUN_0040a880();
      for (; puVar1 != puVar3; puVar1 = (undefined4 *)*puVar1) {
        pppppiVar7 = (int *****)puVar1[3];
        pppppiVar6 = pppppiVar7 + puVar1[4] * 0xc;
        for (; pppppiVar7 < pppppiVar6; pppppiVar7 = pppppiVar7 + 0xc) {
          if (*(char *)(pppppiVar7 + 4) == '\x1e') goto joined_r0x004dbdf0;
        }
      }
      pppppiVar7 = (int *****)0x0;
joined_r0x004dbdf0:
      for (; pppppiVar7 != (int *****)0x0;
          pppppiVar7 = (int *****)FUN_0057ce10(0,0x1e,0,pppppiVar7,0xffffffff)) {
        if ((pppppiVar7[3] == *(int *****)(&DAT_00746974 + iVar9 * 8)) &&
           (*(char *)((int)pppppiVar7 + 0x11) == '\x03')) {
          ppppppiVar4 = _malloc(0xc);
          if (ppppppiVar4 == (int ******)0x0) {
            ppppppiVar4 = (int ******)0x0;
          }
          else {
            ppppppiVar4[2] = (int *****)0x0;
          }
          ppppppiVar4[2] = pppppiVar7;
          *local_2c = (int ****)ppppppiVar4;
          ppppppiVar4[1] = local_2c;
          *ppppppiVar4 = (int *****)&local_30;
          ppppppiVar5 = (int ******)local_30;
          local_2c = (int *****)ppppppiVar4;
        }
      }
      if (ppppppiVar5 != &local_30) {
        do {
          if (ppppppiVar5 == (int ******)0x0) break;
          ppppppiVar5 = (int ******)*ppppppiVar5;
        } while (ppppppiVar5 != &local_30);
      }
    }
    FUN_004dbbb0(param_1);
    FUN_004dbbf0(param_1);
    FUN_004dbc30(param_1);
  }
  else {
    if (piVar8 != (int *)0x0) {
      FUN_004d7db0(&DAT_0074696c,piVar8[2],1);
    }
    FUN_004dbbb0(param_1);
  }
  FUN_004d8500(param_1);
  FUN_004d8600(param_1);
  if ((int ******)local_30 != &local_30) {
    do {
      pppppiVar7 = (int *****)*local_30;
      pppppiVar6 = (int *****)local_30[1];
      *pppppiVar6 = (int ****)pppppiVar7;
      pppppiVar7[1] = (int ****)pppppiVar6;
      _free(local_30);
    } while ((int ******)local_30 != &local_30);
  }
  if ((int ******)local_20 != &local_20) {
    do {
      pppppiVar7 = (int *****)*local_20;
      pppppiVar6 = (int *****)local_20[1];
      *pppppiVar6 = (int ****)pppppiVar7;
      pppppiVar7[1] = (int ****)pppppiVar6;
      _free(local_20);
    } while ((int ******)local_20 != &local_20);
  }
  if ((int ******)local_28 != &local_28) {
    do {
      pppppiVar7 = (int *****)*local_28;
      pppppiVar6 = (int *****)local_28[1];
      *pppppiVar6 = (int ****)pppppiVar7;
      pppppiVar7[1] = (int ****)pppppiVar6;
      _free(local_28);
    } while ((int ******)local_28 != &local_28);
  }
  ExceptionList = local_14;
  return;
}

