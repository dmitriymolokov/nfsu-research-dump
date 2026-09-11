/* Decompiled from Speed.exe @ 0064b810 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_0064b810(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 8); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    (*(code *)puVar1[2])(param_2,puVar1[3]);
  }
  return 0;
}

