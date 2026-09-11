/* Decompiled from Speed.exe @ 004a9e70 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_004a9e70(int param_1,undefined1 param_2,undefined1 param_3,int param_4)

{
  undefined2 in_AX;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_004a9e30();
  iVar3 = (int)((ulonglong)uVar5 >> 0x20);
  puVar4 = (undefined2 *)uVar5;
  if (puVar4 == (undefined2 *)0x0) {
    iVar1 = 0;
    while (*(short *)(iVar3 + iVar1 * 8) != 0) {
      iVar1 = iVar1 + 1;
      if (0x13f < iVar1) {
        return 0;
      }
    }
    puVar4 = (undefined2 *)(iVar3 + iVar1 * 8);
    if (puVar4 == (undefined2 *)0x0) {
      return 0;
    }
    if (param_1 == 2) {
      if (*(float *)(param_4 + 0xbc) < DAT_006cc7a4) {
        return 0;
      }
    }
    else {
      if (*(int *)(param_4 + 0x10) == 0) {
        return 0;
      }
      if (*(int *)(param_4 + 0x10) == 0x7fffffff) {
        return 0;
      }
      if ((float)*(int *)(param_4 + 0x10) * _DAT_006cca38 == DAT_006cc7a4) {
        return 0;
      }
    }
    *puVar4 = in_AX;
    *(undefined1 *)((int)puVar4 + 3) = param_2;
    *(undefined1 *)(puVar4 + 1) = param_3;
  }
  else if (param_1 == 2) {
    if (*(float *)(param_4 + 0xbc) <= (float)*(int *)(puVar4 + 2)) {
      return 0;
    }
  }
  else {
    iVar3 = *(int *)(param_4 + 0x10);
    if (iVar3 == 0) {
      return 0;
    }
    if (iVar3 == 0x7fffffff) {
      return 0;
    }
    if (*(int *)(puVar4 + 2) <= iVar3) {
      return 0;
    }
  }
  if (param_1 != 2) {
    iVar3 = *(int *)(param_4 + 0x10);
    if ((iVar3 != 0) && (iVar3 != 0x7fffffff)) {
      *(int *)(puVar4 + 2) = iVar3;
    }
    return 1;
  }
  uVar2 = FUN_00674898();
  *(undefined4 *)(puVar4 + 2) = uVar2;
  return 1;
}

