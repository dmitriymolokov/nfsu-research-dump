/* Decompiled from Speed.exe @ 0064ca80 */
/* Module: Audio */
/* Ghidra DecompileVAs */


int FUN_0064ca80(ushort *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)((uint)*param_1 + (int)param_1) == 0) {
    return *(int *)(param_1 + 6);
  }
  uVar3 = (uint)param_1[4];
  uVar1 = FUN_006511b0();
  iVar2 = uVar1 % (((uint)param_1[5] - (int)*(char *)((int)param_1 + 3)) - uVar3) + uVar3;
  if ((char)param_1[1] == '\x01') {
    *(uint *)(param_1 + 6) = (uint)*(byte *)(iVar2 + 0x10 + (int)param_1);
    *(undefined1 *)(iVar2 + 0x10 + (int)param_1) = *(undefined1 *)(uVar3 + 0x10 + (int)param_1);
    *(char *)(param_1[4] + 0x10 + (int)param_1) = (char)param_1[6];
  }
  else {
    *(uint *)(param_1 + 6) = (uint)param_1[iVar2 + 8];
    param_1[iVar2 + 8] = param_1[uVar3 + 8];
    param_1[param_1[4] + 8] = param_1[6];
  }
  iVar2 = *(int *)(param_1 + 6);
  param_1[4] = param_1[4] + 1;
  *(int *)(param_1 + 6) = iVar2 + *(int *)(param_1 + 2);
  iVar2 = iVar2 + *(int *)(param_1 + 2);
  if (param_1[5] <= param_1[4]) {
    *(undefined1 *)((int)param_1 + 3) = 1;
    param_1[4] = 0;
    return iVar2;
  }
  *(undefined1 *)((int)param_1 + 3) = 0;
  return iVar2;
}

