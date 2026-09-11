/* Decompiled from Speed.exe @ 006230e0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


int __thiscall
FUN_006230e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 unaff_EDI;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 local_4;
  
  iVar2 = DAT_00709570;
  if (*(char *)(param_1 + 0x40) != '\0') {
    if (*(char *)(*(int *)(param_1 + 0x3c) + 0xc) != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x2c))
                (*(int **)(param_1 + 4),0,*(undefined4 *)(param_1 + 0x30),&param_5,0);
      FUN_0063f1b0(local_4,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x30));
      (**(code **)(**(int **)(param_1 + 4) + 0x30))(*(int **)(param_1 + 4));
      *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0xc) = 0;
      FUN_00622910();
    }
    (**(code **)(**(int **)(param_1 + 4) + 0x2c))
              (*(int **)(param_1 + 4),0,*(undefined4 *)(param_1 + 0x30),param_4,0);
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0x38) + -1;
  if (0 < iVar6) {
    iVar6 = DAT_00709f70;
  }
  piVar7 = (int *)(iVar6 * 0x210 + *(int *)(param_1 + 0x3c));
  if (DAT_00709570 != *(int *)(iVar6 * 0x210 + *(int *)(param_1 + 0x3c))) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *piVar7 = iVar2;
    piVar7[1] = 0;
  }
  iVar2 = piVar7[1];
  piVar7[1] = iVar2 + 1;
  uVar4 = piVar7[iVar2 + 4];
  if (uVar4 == 0xffffffff) {
    uVar4 = FUN_00622a10(param_5);
    piVar7[iVar2 + 4] = uVar4;
    *(undefined1 *)(piVar7 + 3) = 1;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  if ((char)piVar7[3] != '\0') {
    piVar5 = piVar7 + 4;
    iVar2 = piVar7[4];
    while (iVar2 != -1) {
      (**(code **)(**(int **)(param_1 + 4) + 0x2c))
                (*(int **)(param_1 + 4),iVar2,*(undefined4 *)(param_1 + 0x30),&local_4,0);
      FUN_0063f1b0(unaff_EDI,local_4,*(undefined4 *)(param_1 + 0x30));
      (**(code **)(**(int **)(param_1 + 4) + 0x30))(*(int **)(param_1 + 4));
      piVar1 = piVar5 + 1;
      piVar5 = piVar5 + 1;
      iVar2 = *piVar1;
    }
    *(undefined1 *)(piVar7 + 3) = 0;
    FUN_00622910();
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x2c) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x1000;
  }
  (**(code **)(**(int **)(param_1 + 4) + 0x2c))(*(int **)(param_1 + 4),uVar4,uVar3,param_4,uVar8);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  return (uVar4 / uVar3) * iVar2;
}

