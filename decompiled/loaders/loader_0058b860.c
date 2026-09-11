/* Decompiled from Speed.exe @ 0058b860 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0058b860(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x34);
  while (puVar2 != (undefined4 *)(param_1 + 0x34)) {
    puVar1 = (undefined4 *)*puVar2;
    if (*(char *)((int)puVar2 + 9) == '\x01') {
      *(undefined1 *)((int)puVar2 + 9) = 2;
    }
    FUN_0058ba80(param_1);
    puVar2 = puVar1;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_0058cbb0();
  return;
}

