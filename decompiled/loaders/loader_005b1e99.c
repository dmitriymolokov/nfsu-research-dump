/* Decompiled from Speed.exe @ 005b1e99 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __thiscall FUN_005b1e99(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_005b17e6(param_2,&param_2);
  if (-1 < iVar1) {
    if (param_3 == 0xff) {
      puVar2 = (uint *)(*(int *)(param_1 + 0x1c) + param_2 * 4);
      *puVar2 = *puVar2 & 0x20;
      puVar2 = (uint *)(param_2 * 4 + *(int *)(param_1 + 0x1c));
      *puVar2 = *puVar2 | 1;
    }
    else if (param_3 == 0x10) {
      puVar2 = (uint *)(*(int *)(param_1 + 0x1c) + param_2 * 4);
      *puVar2 = *puVar2 | 0x10;
    }
    else {
      puVar2 = (uint *)(*(int *)(param_1 + 0x1c) + param_2 * 4);
      *puVar2 = *puVar2 & 0xfffffff0;
      puVar2 = (uint *)(param_2 * 4 + *(int *)(param_1 + 0x1c));
      *puVar2 = *puVar2 | param_3 & 0xf;
    }
  }
  return;
}

