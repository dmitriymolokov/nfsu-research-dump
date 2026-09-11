/* Decompiled from Speed.exe @ 006154dc */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_006154dc(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  if (param_3 == param_4) {
    uVar3 = 0;
  }
  else if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + param_2 * 4) + 5) & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 8);
    uVar6 = 0;
    if (uVar1 != 0) {
      piVar4 = *(int **)(param_1 + 0x14);
      do {
        piVar2 = (int *)*piVar4;
        if (((*piVar2 == param_2) && (piVar2[7] != 0)) &&
           ((piVar2[2] == param_3 || (piVar2[2] == param_4)))) goto LAB_006154fd;
        uVar6 = uVar6 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar6 < uVar1);
    }
    uVar6 = 0;
    if (uVar1 != 0) {
      do {
        piVar4 = *(int **)(*(int *)(param_1 + 0x14) + uVar6 * 4);
        if ((*piVar4 == param_2) &&
           ((iVar5 = param_4, piVar4[2] == param_3 || (iVar5 = param_3, piVar4[2] == param_4)))) {
          piVar4[2] = iVar5;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 8));
    }
    uVar3 = 0;
  }
  else {
LAB_006154fd:
    uVar3 = 0x80004005;
  }
  return uVar3;
}

