/* Decompiled from Speed.exe @ 005a0060 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005a0060(uint *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_2 = param_2 / 0x14c;
  puVar2 = &DAT_00733ff8;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    if (*param_1 < 0x100) {
      (&DAT_00733ff8)[*param_1] = param_1;
    }
    param_1 = param_1 + 0x53;
  }
  return;
}

