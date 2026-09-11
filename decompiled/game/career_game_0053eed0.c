/* Decompiled from Speed.exe @ 0053eed0 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


int * FUN_0053eed0(int param_1,char *param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  
  pcVar3 = param_2;
  piVar4 = (int *)FUN_0053e4f0(param_1,param_2);
  if (piVar4 != (int *)0x0) {
    piVar4[0x2c] = piVar4[0x2c] + 1;
    return piVar4;
  }
  uVar5 = 0;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    do {
      iVar6 = uVar5 + 1;
      uVar5 = uVar5 + 1;
    } while (param_2[iVar6] != '\0');
    if (0x7f < uVar5) {
      return (int *)0x0;
    }
  }
  iVar6 = FUN_00594c60(param_2,1,1);
  if (((iVar6 == 0) || (iVar6 = *(int *)(iVar6 + 4), iVar6 < 0)) || (iVar6 < 0x11)) {
    return (int *)0x0;
  }
  FUN_00594d40();
  piVar4 = (int *)FUN_00565b60(0x10,0,0,8);
  *piVar4 = 0;
  piVar4[1] = 0;
  piVar4[2] = 0;
  piVar4[3] = 0;
  piVar4[2] = param_3;
  piVar4[3] = param_4;
  param_2 = (char *)0x0;
  if ((param_5 != 0) && (iVar7 = FUN_00565d70(), 0x13c < iVar7)) {
    param_2 = (char *)param_5;
  }
  piVar8 = _malloc(0xbc);
  piVar9 = piVar8;
  for (iVar7 = 0x2f; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  piVar9 = piVar8 + 2;
  iVar7 = 0x7f;
  iVar10 = (int)pcVar3 - (int)piVar9;
  do {
    cVar1 = *(char *)((int)piVar9 + iVar10);
    iVar7 = iVar7 + -1;
    *(char *)piVar9 = cVar1;
    if (cVar1 == '\0') break;
    piVar9 = (int *)((int)piVar9 + 1);
  } while (iVar7 != 0);
  *(short *)(piVar8 + 0x22) = (short)param_5;
  *(undefined1 *)((int)piVar8 + 0x87) = 0;
  *(bool *)((int)piVar8 + 0x8a) = param_2 == (char *)param_5;
  piVar8[0x2c] = 1;
  piVar8[0x23] = (int)piVar4;
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  *puVar2 = piVar8;
  *(int **)(param_1 + 0x1c) = piVar8;
  piVar8[1] = (int)puVar2;
  *piVar8 = param_1 + 0x18;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  if (0x7fff < iVar6) {
    iVar6 = 0x8000;
  }
  iVar7 = FUN_00565b60(iVar6,0,0,0x2008);
  piVar8[0x25] = iVar7;
  *piVar4 = iVar6;
  FUN_0058ac20(piVar8[0x25],piVar8 + 2,0,iVar6,&LAB_0053f070,param_1,piVar8);
  return piVar8;
}

