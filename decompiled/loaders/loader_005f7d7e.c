/* Decompiled from Speed.exe @ 005f7d7e */
/* Module: Loader */
/* Ghidra DecompileAll */


uint FUN_005f7d7e(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = *(uint **)(*(int *)(param_3 + 0x14) + param_1 * 4);
  puVar2 = *(uint **)(*(int *)(param_3 + 0x14) + param_2 * 4);
  if (*puVar2 <= *puVar1) {
    if (*puVar2 < *puVar1) {
      return 1;
    }
    if (puVar2[2] <= puVar1[2]) {
      if (puVar1[2] != puVar2[2]) {
        return 1;
      }
      if (puVar2[1] <= puVar1[1]) {
        if (puVar1[1] != puVar2[1]) {
          return 1;
        }
        if (puVar2[3] <= puVar1[3]) {
          return (uint)(puVar2[3] < puVar1[3]);
        }
      }
    }
  }
  return 0xffffffff;
}

