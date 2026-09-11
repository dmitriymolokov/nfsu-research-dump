/* Decompiled from Speed.exe @ 004c53c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004c53c0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined *puVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004f78e0(param_1,param_2);
  iVar4 = DAT_007356a8;
  *param_1 = &PTR_FUN_006c52e0;
  local_4 = 0;
  if ((*(int *)(iVar4 + 0x104) != 0) &&
     (piVar6 = *(int **)(*(int *)(iVar4 + 0x104) + 0x24), piVar6 != (int *)0x0)) {
    (**(code **)(*piVar6 + 0xa0))();
  }
  if (DAT_0073578c != 0) {
    *(undefined4 *)(*(int *)(DAT_0073578c + 8) + 0xd0) = 0;
  }
  iVar4 = FUN_004f3f90(&DAT_00746104);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x14);
  }
  iVar1 = *(int *)(iVar4 + 0x4c);
  param_1[0x10] = iVar1;
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(iVar4 + 0x50);
  iVar4 = *(int *)(*(int *)(iVar1 + 8) + 0x74);
  iVar5 = 0;
  if (0 < iVar4) {
    piVar6 = (int *)(*(int *)(iVar1 + 8) + 0x38);
    do {
      if (*piVar6 == 1) {
        uVar2 = 1;
        goto LAB_004c546f;
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 3;
    } while (iVar5 < iVar4);
  }
  uVar2 = 0;
LAB_004c546f:
  *(undefined1 *)(param_1 + 0x13) = uVar2;
  *(undefined1 *)((int)param_1 + 0x4e) = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  iVar4 = *(int *)(*(int *)(iVar1 + 8) + 4);
  if ((iVar4 == 3) || (iVar4 == 2)) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  *(char *)(param_1 + 0x11) = cVar3;
  param_1[0x12] = (cVar3 == '\0') + 1;
  if (0 < **(int **)(iVar1 + 8)) {
    iVar4 = 0;
    do {
      if ((&DAT_006fa5d0)[iVar4 * 2] == **(int **)(iVar1 + 8)) {
        if (*(int *)(iVar4 * 8 + 0x6fa5d4) != -1) {
          FUN_0051c830(0xffffffff);
          cVar3 = '\x01';
          goto LAB_004c54c1;
        }
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x2d);
  }
  cVar3 = '\0';
LAB_004c54c1:
  *(char *)((int)param_1 + 0x4f) = cVar3;
  if (cVar3 == '\0') {
    if (*(char *)(param_1 + 0x13) == '\0') {
      if (*(char *)((int)param_1 + 0x4d) == '\0') goto LAB_004c55c1;
      iVar4 = FUN_004c52d0();
      if (iVar4 != -1) {
        FUN_0051c830(0xffffffff);
      }
    }
    else {
      iVar4 = FUN_004c5200();
      if ((0 < iVar4) && (*(int *)(DAT_007356a8 + 0x104) != 0)) {
        puVar7 = (undefined *)0x0;
        if (0 < iVar4) {
          puVar7 = (&PTR_s_Fabolous_006f8728)[iVar4 * 2];
        }
        piVar6 = *(int **)(*(int *)(DAT_007356a8 + 0x104) + 0x24);
        if (puVar7 == (undefined *)0xffffffff) {
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 0x90))(0x59);
          }
        }
        else if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x98))(0x59,puVar7);
        }
        if ((_DAT_006cc960 < *(float *)(*(int *)(DAT_007356a8 + 8) + 4)) && (DAT_007356ac != 0)) {
          FUN_00536870(0xbf800000);
        }
      }
    }
    *(undefined1 *)((int)param_1 + 0x4e) = 1;
  }
LAB_004c55c1:
  DAT_00735e60 = 0;
  FUN_004c5680();
  param_1[0x15] = 0;
  ExceptionList = pvStack_c;
  return param_1;
}

