/* Decompiled from Speed.exe @ 005ba5c6 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005ba5c6(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = puVar1[3];
    puVar1[3] = 0;
    (**(code **)*puVar1)(1);
  }
  return 0;
}

