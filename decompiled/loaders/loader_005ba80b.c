/* Decompiled from Speed.exe @ 005ba80b */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005ba80b(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 0;
  if (param_2 == 0) {
    return 0;
  }
  do {
    if (*(int *)(param_2 + 4) != 1) break;
    iVar1 = FUN_005ba80b(*(undefined4 *)(param_2 + 8));
    param_2 = *(int *)(param_2 + 0xc);
    iVar2 = iVar2 + iVar1;
  } while (param_2 != 0);
  if (param_2 == 0) {
    return iVar2;
  }
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 5) {
    uVar3 = *(undefined4 *)(param_2 + 0x18);
  }
  else {
    if (iVar1 == 7) {
      iVar1 = FUN_005ba80b(*(undefined4 *)(param_2 + 0x10));
      iVar1 = iVar1 * *(int *)(param_2 + 0x14);
      goto LAB_005ba88c;
    }
    if (iVar1 == 8) {
      iVar1 = *(int *)(param_2 + 0x1c) * *(int *)(param_2 + 0x18);
      goto LAB_005ba88c;
    }
    if (iVar1 != 10) {
      FUN_005ba278(param_1,0,0,"internal error: unknown node");
      return 0;
    }
    uVar3 = *(undefined4 *)(param_2 + 0x20);
  }
  iVar1 = FUN_005ba80b(uVar3);
LAB_005ba88c:
  return iVar1 + iVar2;
}

