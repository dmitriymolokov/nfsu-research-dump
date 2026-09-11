/* Decompiled from Speed.exe @ 005ba681 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005ba681(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((*(uint *)(param_2 + 0x10) & *(uint *)(param_3 + 0x10)) != 0) {
    FUN_005ba1d9(param_1,param_1 + 0x20,0xbe8,"duplicate usages specified");
  }
  if ((*(int *)(param_2 + 0x14) != 0) && (*(int *)(param_3 + 0x14) != 0)) {
    puVar2 = (undefined4 *)(*(int *)(param_3 + 0x14) + 0x10);
    puVar3 = (undefined4 *)(param_1 + 0x20);
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_005ba0ab(param_1,"syntax error");
  }
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | *(uint *)(param_3 + 0x10);
  if ((*(int *)(param_2 + 0x14) == 0) && (*(int *)(param_3 + 0x14) != 0)) {
    iVar1 = FUN_005d7885(*(int *)(param_3 + 0x14));
    *(int *)(param_2 + 0x14) = iVar1;
    if (iVar1 == 0) {
      return 0x8007000e;
    }
  }
  return 0;
}

