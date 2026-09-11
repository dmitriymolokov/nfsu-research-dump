/* Decompiled from Speed.exe @ 005d9eb5 */
/* Module: Loader */
/* Ghidra DecompileAll */


uint FUN_005d9eb5(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005f762c(*(undefined4 *)(*(int *)(param_3 + 0x18) + param_1 * 4));
  iVar2 = FUN_005f762c(*(undefined4 *)(*(int *)(param_3 + 0x18) + param_2 * 4));
  if (*(uint *)(iVar2 + 0x50) <= *(uint *)(iVar1 + 0x50)) {
    if (*(uint *)(iVar2 + 0x50) < *(uint *)(iVar1 + 0x50)) {
      return 1;
    }
    if (*(uint *)(iVar2 + 0xc) <= *(uint *)(iVar1 + 0xc)) {
      if (*(uint *)(iVar1 + 0xc) != *(uint *)(iVar2 + 0xc)) {
        return 1;
      }
      if (param_2 <= param_1) {
        return (uint)(param_2 < param_1);
      }
    }
  }
  return 0xffffffff;
}

