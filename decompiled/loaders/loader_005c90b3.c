/* Decompiled from Speed.exe @ 005c90b3 */
/* Module: Loader */
/* Ghidra DecompileAll */


uint __thiscall FUN_005c90b3(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  uVar1 = *(int *)(param_1 + 0x28) + iVar2;
  uVar3 = -(uint)(uVar1 < (uint)(iVar2 + 4 + param_2)) & 0x80004005;
  if ((-1 < (int)uVar3) && (*(int *)(iVar2 + param_2) != 0)) {
    uVar4 = iVar2 + *(int *)(iVar2 + param_2) + param_2 + 4;
    uVar3 = -(uint)(uVar1 < uVar4) & 0x80004005;
    if ((-1 < (int)uVar3) && (*(char *)(uVar4 - 1) != '\0')) {
      uVar3 = 0x80004005;
    }
  }
  return uVar3;
}

