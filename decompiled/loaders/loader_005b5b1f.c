/* Decompiled from Speed.exe @ 005b5b1f */
/* Module: Loader */
/* Ghidra DecompileAll */


uint FUN_005b5b1f(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_005b4c4b(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_005b4d58(param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_005b4dd4(param_2);
      if (iVar1 == 0) {
        return 0;
      }
      uVar3 = *(uint *)(iVar1 + 0x24);
      uVar2 = *(uint *)(iVar1 + 0x28);
      goto LAB_005b5b65;
    }
    uVar3 = *(uint *)(iVar1 + 0x24);
  }
  else {
    iVar1 = *(int *)(iVar1 + 4);
    uVar3 = *(uint *)(iVar1 + 0x28);
  }
  uVar2 = *(uint *)(iVar1 + 0x30);
LAB_005b5b65:
  if (uVar3 <= param_3) {
    return 0;
  }
  while (param_3 = param_3 + 1, param_3 < uVar3) {
    uVar2 = *(uint *)(uVar2 + 0x34);
  }
  return ~uVar2;
}

