/* Decompiled from Speed.exe @ 005b618f */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005b618f(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_c;
  int local_8;
  
  iVar1 = param_1;
  piVar5 = (int *)0x0;
  if (*(int *)(param_1 + 8) != 0) {
    FUN_005b5ec9(3);
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  iVar7 = param_2;
  piVar2 = _malloc(param_2 * 0x20 + 4);
  if (piVar2 != (int *)0x0) {
    piVar5 = piVar2 + 1;
    *piVar2 = iVar7;
    FUN_004010a0(piVar5,0x20,iVar7,&LAB_005b2a87);
  }
  *(int **)(iVar1 + 8) = piVar5;
  if (piVar5 == (int *)0x0) {
    uVar3 = 0x8007000e;
  }
  else {
    iVar6 = *(int *)(iVar1 + 0x1c);
    param_1 = *(int *)(*(int *)(iVar1 + 4) + 0x40) + 0x18 + *(int *)(iVar1 + 0x18);
    if (iVar7 != 0) {
      iVar7 = 0;
      do {
        *(undefined4 *)(iVar7 + *(int *)(iVar1 + 8)) = 3;
        *(undefined4 *)(iVar7 + 4 + *(int *)(iVar1 + 8)) = *(undefined4 *)(iVar1 + 4);
        *(int *)(iVar7 + 0x18 + *(int *)(iVar1 + 8)) =
             param_1 - *(int *)(*(int *)(iVar1 + 4) + 0x40);
        uVar3 = FUN_005b30af(*(undefined4 *)(local_8 + 0x118),&param_1,&local_c);
        *(undefined4 *)(iVar7 + 0x14 + *(int *)(iVar1 + 8)) = uVar3;
        *(int *)(iVar7 + 0x1c + *(int *)(iVar1 + 8)) = iVar6;
        for (iVar4 = local_c; iVar4 != 0; iVar4 = iVar4 + -1) {
          iVar6 = *(int *)(iVar6 + 0xc);
        }
        iVar7 = iVar7 + 0x20;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    uVar3 = 0;
  }
  return uVar3;
}

