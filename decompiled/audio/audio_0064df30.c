/* Decompiled from Speed.exe @ 0064df30 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0064df30(int param_1,int *param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  int local_8;
  undefined2 local_4;
  undefined2 local_2;
  
  DAT_00713f30 = &LAB_0064df00;
  FUN_0064e520();
  iVar8 = 0;
  piVar9 = (int *)(param_1 + 0x50);
  bVar10 = DAT_00713c74 == (int *)0x0;
  *piVar9 = (int)DAT_00713c74;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (DAT_00713c74 != (int *)0x0) {
    *(int **)((int)DAT_00713c74 + 4) = piVar9;
  }
  iVar6 = 0;
  piVar5 = param_2;
  DAT_00713c74 = piVar9;
  if (0 < *param_2) {
    do {
      iVar7 = piVar5[1];
      puVar3 = (undefined4 *)(iVar7 + param_1);
      *puVar3 = (&PTR_LAB_006e9ae8)[*(int *)(iVar7 + param_1)] + (-4 - (int)puVar3);
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 < *param_2);
  }
  iVar6 = *(int *)(param_1 + 0x30);
  piVar5 = (int *)((int)param_2 + (*(int *)(param_1 + 0x34) - iVar6));
  iVar7 = 0;
  piVar9 = piVar5;
  if (0 < *(int *)((int)param_2 + (*(int *)(param_1 + 0x34) - iVar6))) {
    do {
      iVar2 = piVar9[1];
      *(int *)(iVar2 + param_1) = *(int *)(iVar2 + param_1) + param_1;
      iVar7 = iVar7 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < *piVar5);
  }
  piVar9 = (int *)((int)param_2 + (*(int *)(param_1 + 0x38) - iVar6));
  if (0 < *piVar9) {
    piVar5 = piVar9 + 1;
    do {
      local_4 = *(undefined2 *)((int)param_2 + (piVar5[1] - iVar6));
      iVar7 = piVar5[1] - iVar6;
      local_2 = *(undefined2 *)((int)param_2 + iVar7 + 2);
      local_8 = (int)param_2 + iVar7 + 4;
      if ((char)piVar5[2] == '\0') {
        FUN_0064b9c0(&local_8);
      }
      else if ((char)piVar5[2] == '\x01') {
        FUN_0064b970(&local_8);
      }
      else {
        FUN_0064b920(&local_8);
      }
      iVar8 = iVar8 + 1;
      piVar5 = piVar5 + 3;
    } while (iVar8 < *piVar9);
  }
  iVar6 = 0;
  iVar8 = *(int *)(param_1 + 0x1c) + param_1;
  if (*(short *)(param_1 + 10) != 0) {
    do {
      *(int *)(iVar8 + 0x28) = *(int *)(iVar8 + 0x28) + param_1;
      *(int *)(iVar8 + 0x2c) = *(int *)(iVar8 + 0x2c) + param_1;
      *(undefined1 **)(iVar8 + 0x14) = &LAB_0064dc20;
      *(int *)(iVar8 + 0x18) = iVar8;
      FUN_0064bc80(iVar8 + 4,iVar8 + 0xc);
      iVar7 = 0;
      if (*(char *)(iVar8 + 0x24) != '\0') {
        do {
          *(int *)(*(int *)(iVar8 + 0x3c + iVar7 * 4) + *(int *)(iVar8 + 0x2c)) = param_1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(uint)*(byte *)(iVar8 + 0x24));
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x3c + ((uint)*(byte *)(iVar8 + 0x27) + (uint)*(byte *)(iVar8 + 0x24)) * 4;
    } while (iVar6 < (int)(uint)*(ushort *)(param_1 + 10));
  }
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    pcVar4 = param_3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = (char *)FUN_00650fd0(pcVar4 + (1 - (int)(param_3 + 1)));
    *(char **)(param_1 + 0x48) = pcVar4;
    do {
      cVar1 = *param_3;
      param_3 = param_3 + 1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    *(undefined4 *)(param_1 + 0x4c) = param_4;
  }
  if (bVar10) {
    _DAT_00713c84 = FUN_00652960;
    DAT_00713c7c = DAT_00713ca8;
    DAT_00713c80 = 0;
    if (DAT_00713ca8 != (undefined4 *)0x0) {
      DAT_00713ca8[1] = &DAT_00713c7c;
    }
    DAT_00713ca8 = &DAT_00713c7c;
  }
  FUN_0064e540();
  return;
}

