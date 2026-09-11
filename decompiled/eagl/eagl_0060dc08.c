/* Decompiled from Speed.exe @ 0060dc08 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_0060dc08(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_2 + 4) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x14) + *(int *)(*(int *)(param_2 + 8) + uVar3 * 4) * 4)
      ;
      if (((*(int *)(param_1 + 0x60) == *piVar1) && ((uint)piVar1[0xd] < param_3)) &&
         (iVar2 = FUN_005f7a96(), iVar2 == 0)) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_2 + 4));
  }
  return 0;
}

