/* Decompiled from Speed.exe @ 005e552a */
/* Module: Loader */
/* Ghidra DecompileAll */


void __thiscall FUN_005e552a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  do {
    for (iVar1 = *(int *)(param_1 + uVar3 * 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
      *(int *)(param_2 + iVar2 * 4) = iVar1;
      iVar2 = iVar2 + 1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  return;
}

