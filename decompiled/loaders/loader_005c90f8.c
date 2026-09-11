/* Decompiled from Speed.exe @ 005c90f8 */
/* Module: Loader */
/* Ghidra DecompileAll */


uint __thiscall FUN_005c90f8(int param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar1 = (uint *)(*(int *)(param_1 + 0x2c) + param_2);
  puVar4 = puVar1 + 1;
  uVar3 = -(uint)((uint *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x2c)) < puVar4) &
          0x80004005;
  if (-1 < (int)uVar3) {
    if (*puVar1 < 2) {
LAB_005c914a:
      uVar3 = 0x80004005;
    }
    else {
      uVar3 = FUN_005c90b3(param_2);
      if (-1 < (int)uVar3) {
        for (; cVar2 = (char)*puVar4, cVar2 != '\0'; puVar4 = (uint *)((int)puVar4 + 1)) {
          if ((((cVar2 == '.') || (cVar2 == '@')) || (cVar2 == '[')) || (cVar2 == ']'))
          goto LAB_005c914a;
        }
      }
    }
  }
  return uVar3;
}

