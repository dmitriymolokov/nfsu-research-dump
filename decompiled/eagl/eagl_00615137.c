/* Decompiled from Speed.exe @ 00615137 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_00615137(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + param_2 * 4);
  uVar6 = *(uint *)(iVar1 + 0x38);
  if (((uVar6 != 0xffffffff) && ((*(byte *)(param_1 + 0x93) & 8) == 0)) &&
     (uVar6 <= *(uint *)(iVar1 + 0x3c))) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x18) + uVar6 * 4);
      iVar4 = FUN_005f7b45();
      if (iVar4 != 0) {
        uVar3 = *(uint *)(iVar2 + 4);
        uVar5 = 0;
        if (uVar3 != 0) {
          piVar7 = *(int **)(iVar2 + 8);
          do {
            if (*piVar7 == param_2) {
              return 1;
            }
            uVar5 = uVar5 + 1;
            piVar7 = piVar7 + 1;
          } while (uVar5 < uVar3);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 <= *(uint *)(iVar1 + 0x3c));
  }
  return 0;
}

