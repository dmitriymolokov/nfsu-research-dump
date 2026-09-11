/* Decompiled from Speed.exe @ 00612943 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_00612943(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x14) + param_2 * 4);
  if ((((puVar2[1] == -1) || (iVar3 = FUN_00612943(puVar2[1],param_3), -1 < iVar3)) &&
      (iVar3 = FUN_00618c39(*puVar2), -1 < iVar3)) &&
     (iVar3 = FUN_00618c39(puVar2[3] + puVar2[2] * 4), -1 < iVar3)) {
    piVar1 = (int *)(*(int *)(param_1 + 0xa0) + param_3 * 4);
    *piVar1 = *piVar1 + 1;
    return 0;
  }
  return 0x8007000e;
}

