/* Decompiled from Speed.exe @ 004b70a0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * __fastcall FUN_004b70a0(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  while( true ) {
    if (puVar1 == (undefined4 *)(param_1 + 0x40)) {
      return (undefined4 *)0x0;
    }
    if (puVar1[7] == param_2) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}

