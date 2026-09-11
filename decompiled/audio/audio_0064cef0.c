/* Decompiled from Speed.exe @ 0064cef0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0064cef0(ushort *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(*param_1 + 4 + (int)param_1);
  puVar3 = (undefined4 *)((uint)*param_1 + (int)param_1);
  if (iVar4 != *(int *)(param_1 + 4)) {
    *(int *)(param_1 + 4) = iVar4;
    if ((int)puVar3[1] < 0) {
      puVar3[1] = 0;
    }
    iVar4 = (int)ROUND((float)(int)puVar3[1] / _DAT_00713ca0);
    if ((int)(uint)param_1[1] <= iVar4) {
      iVar4 = param_1[1] - 1;
    }
    param_1[2] = param_1[3] + (short)iVar4;
  }
  uVar1 = param_1[1];
  if (uVar1 <= param_1[2]) {
    param_1[2] = param_1[2] - uVar1;
  }
  if (uVar1 <= param_1[3]) {
    param_1[3] = 0;
  }
  *(undefined4 *)(param_1 + (uint)param_1[2] * 2 + 6) = *puVar3;
  uVar2 = *(undefined4 *)(param_1 + (uint)param_1[3] * 2 + 6);
  param_1[2] = param_1[2] + 1;
  param_1[3] = param_1[3] + 1;
  return uVar2;
}

