/* Decompiled from Speed.exe @ 005f7d34 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005f7d34(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  puVar1 = *(uint **)(*(int *)(param_3 + 0x14) + param_2 * 4);
  puVar2 = *(uint **)(*(int *)(param_3 + 0x14) + param_1 * 4);
  if (*puVar2 < *puVar1) {
LAB_005f7d61:
    uVar3 = 0xffffffff;
  }
  else {
    if (*puVar2 == *puVar1) {
      if (*(double *)(puVar2 + 4) < *(double *)(puVar1 + 4)) goto LAB_005f7d61;
      if (*(double *)(puVar2 + 4) <= *(double *)(puVar1 + 4)) {
        return 0;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

