/* Decompiled from Speed.exe @ 005d91a1 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005d91a1(int param_1)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
  }
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 8))(1);
  }
  _free(*(void **)(param_1 + 0x18));
  return;
}

