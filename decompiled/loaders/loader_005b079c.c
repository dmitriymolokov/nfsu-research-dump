/* Decompiled from Speed.exe @ 005b079c */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005b079c(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *puVar1 = 0;
  *(undefined4 **)(param_1 + 0x1c) = puVar1;
  *(undefined4 **)(param_1 + 0x18) = puVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

