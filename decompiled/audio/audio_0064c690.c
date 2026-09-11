/* Decompiled from Speed.exe @ 0064c690 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_0064c690(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (param_1[3] != 0) {
    piVar3 = (int *)param_1[1];
    piVar2 = *(int **)(*param_1 + 0x38);
    if (piVar3 == piVar2) {
      *(int *)(*param_1 + 0x38) = *piVar2;
    }
    if ((int *)piVar3[1] != (int *)0x0) {
      *(int *)piVar3[1] = *piVar3;
    }
    if (*piVar3 != 0) {
      *(int *)(*piVar3 + 4) = piVar3[1];
    }
    iVar5 = param_1[1];
    piVar3 = (int *)(iVar5 + 8);
    if (piVar3 == DAT_00713c70) {
      DAT_00713c70 = (int *)*DAT_00713c70;
    }
    if (*(int **)(iVar5 + 0xc) != (int *)0x0) {
      **(int **)(iVar5 + 0xc) = *piVar3;
    }
    if (*piVar3 != 0) {
      *(undefined4 *)(*piVar3 + 4) = *(undefined4 *)(iVar5 + 0xc);
    }
    iVar4 = param_1[1];
    iVar5 = iVar4 + 0x18;
    if (*(char *)(*param_1 + 0x25) != '\0') {
      FUN_0064b870(iVar5);
      iVar5 = iVar4 + 0x2c;
    }
    iVar4 = 0;
    if (*(short *)(*param_1 + 0x20) != 0) {
      do {
        FUN_0064bf60(iVar5,iVar5 + 8);
        iVar5 = iVar5 + 0x1c;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(uint)*(ushort *)(*param_1 + 0x20));
    }
    if (*(char *)(*param_1 + 0x26) != '\0') {
      FUN_0064b8e0(iVar5);
      iVar5 = iVar5 + 0x14 + (uint)*(byte *)(iVar5 + 0x10) * 4;
    }
    iVar4 = 0;
    if (*(short *)(*param_1 + 0x22) != 0) {
      do {
        FUN_0064bac0(iVar5,iVar5 + 8);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x1c + (uint)*(byte *)(iVar5 + 0x18) * 4;
      } while (iVar4 < (int)(uint)*(ushort *)(*param_1 + 0x22));
    }
    iVar5 = 0;
    piVar3 = (int *)(*param_1 + 0x3c);
    if (*(char *)(*param_1 + 0x24) != '\0') {
      do {
        iVar4 = *piVar3;
        cVar1 = *(char *)(iVar4 + 0x10 + param_1[1]);
        piVar3 = piVar3 + 1;
        if (-1 < cVar1) {
          (**(code **)(&DAT_006e9aa8 + cVar1 * 4))(iVar4 + param_1[1]);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(uint)*(byte *)(*param_1 + 0x24));
    }
    iVar5 = 0;
    if (*(char *)(*param_1 + 0x27) != '\0') {
      do {
        iVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        if (*(int *)(iVar4 + param_1[1] + 8) != 0) {
          FUN_0064bbd0();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(uint)*(byte *)(*param_1 + 0x27));
    }
    *(short *)(*param_1 + 0x1c) = *(short *)(*param_1 + 0x1c) + -1;
    FUN_006510d0(param_1[1]);
  }
  return 0;
}

