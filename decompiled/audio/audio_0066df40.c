/* Decompiled from Speed.exe @ 0066df40 */
/* Module: Audio */
/* Ghidra DecompileAll */


uint FUN_0066df40(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0x706f7274) {
    uVar1 = Ordinal_15(*(undefined2 *)(param_1 + 6));
    return uVar1 & 0xffff;
  }
  if (param_2 == 0x61646472) {
    uVar1 = Ordinal_14(*(undefined4 *)(param_1 + 8));
    return uVar1;
  }
  if (param_2 == 0x6c616472) {
    return *(uint *)(param_1 + 0x14);
  }
  if (param_2 == 0x6c707274) {
    return *(uint *)(param_1 + 0x18);
  }
  if (param_2 == 0x6f627566) {
    return *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x28);
  }
  if (param_2 == 0x69627566) {
    if (*(int *)(param_1 + 0x3c) != 0) {
      return *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x38);
    }
  }
  else if (param_2 == 0x73746174) {
    return *(uint *)(param_1 + 0x1c);
  }
  return 0;
}

