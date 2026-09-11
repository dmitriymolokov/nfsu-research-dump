/* Decompiled from Speed.exe @ 00433e20 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00433e20(int param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  if ((((*(int *)(DAT_0073619c + 0x24) < 1) || (iVar3 = *(int *)(DAT_0073619c + 0x520), iVar3 == 0))
      || (iVar3 == param_1)) ||
     ((*(short *)(iVar3 + 0x10) != 1 || (*(char *)(iVar3 + 0x114) != '\0')))) {
    uVar4 = FUN_00674898();
    *(undefined4 *)(param_1 + 0x110) = uVar4;
  }
  else {
    FUN_00433340(*(undefined4 *)(param_1 + 0x20));
    FUN_00433340((float)(int)*(char *)(iVar3 + 9));
    iVar3 = FUN_00674898();
    *(int *)(param_1 + 0x110) = (DAT_0073ad34 - iVar3) - *param_3;
  }
  FUN_00586690(0x3c23d70a);
  uVar4 = FUN_00674898();
  *(undefined4 *)(param_1 + 0x110) = uVar4;
  *(undefined1 *)(param_1 + 0x114) = 1;
  iVar3 = DAT_0073619c;
  if ((*(char *)(param_1 + 9) == '\0') && (0 < param_2)) {
    uVar4 = FUN_00674898();
    *(undefined4 *)(param_1 + 0x60 + *(char *)(iVar3 + 0x53f) * 4) = uVar4;
    cVar1 = *(char *)(iVar3 + 0x53f);
    FUN_00586690(0x3c23d70a);
    uVar4 = FUN_00674898();
    *(undefined4 *)(param_1 + 0x60 + cVar1 * 4) = uVar4;
  }
  iVar2 = DAT_0073619c;
  cVar1 = *(char *)(param_1 + 9);
  iVar3 = cVar1 + 1;
  if (3 < (param_2 - iVar3) + 1) {
    iVar5 = FUN_00674898();
    param_3 = (int *)(cVar1 + 4);
    piVar6 = (int *)(param_1 + 0x88 + iVar3 * 4);
    do {
      *piVar6 = iVar5;
      piVar6[0xb] = piVar6[10] + iVar5;
      if (*piVar6 < *(int *)(param_1 + 0x60 + *(char *)(iVar2 + 0x53f) * 4)) {
        *(int *)(param_1 + 0x60 + *(char *)(iVar2 + 0x53f) * 4) = *piVar6;
      }
      piVar6[1] = iVar5;
      piVar6[0xc] = piVar6[0xb] + iVar5;
      if (piVar6[1] < *(int *)(param_1 + 0x60 + *(char *)(iVar2 + 0x53f) * 4)) {
        *(int *)(param_1 + 0x60 + *(char *)(iVar2 + 0x53f) * 4) = piVar6[1];
      }
      piVar6[2] = iVar5;
      piVar6[0xd] = piVar6[0xc] + iVar5;
      if (piVar6[2] < *(int *)(param_1 + 0x60 + *(char *)(iVar2 + 0x53f) * 4)) {
        *(int *)(param_1 + 0x60 + *(char *)(iVar2 + 0x53f) * 4) = piVar6[2];
      }
      piVar6[3] = iVar5;
      piVar6[0xe] = piVar6[0xd] + iVar5;
      if (piVar6[3] < *(int *)(param_1 + 0x60 + *(char *)(iVar2 + 0x53f) * 4)) {
        *(int *)(param_1 + 0x60 + *(char *)(iVar2 + 0x53f) * 4) = piVar6[3];
      }
      param_3 = (int *)((int)param_3 + 4);
      iVar3 = iVar3 + 4;
      piVar6 = piVar6 + 4;
    } while ((int)param_3 < param_2);
  }
  if (iVar3 <= param_2) {
    iVar5 = FUN_00674898();
    iVar7 = (param_2 - iVar3) + 1;
    piVar6 = (int *)(param_1 + 0x88 + iVar3 * 4);
    do {
      *piVar6 = iVar5;
      piVar6[0xb] = piVar6[10] + iVar5;
      if (*piVar6 < *(int *)(param_1 + 0x60 + *(char *)(iVar2 + 0x53f) * 4)) {
        *(int *)(param_1 + 0x60 + *(char *)(iVar2 + 0x53f) * 4) = *piVar6;
      }
      piVar6 = piVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    return;
  }
  return;
}

