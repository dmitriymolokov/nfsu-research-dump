/* Decompiled from Speed.exe @ 004053c0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_004053c0(int param_1)

{
  undefined1 *puVar1;
  undefined1 *_Memory;
  
  puVar1 = (undefined1 *)(param_1 + 0xc);
  _Memory = (undefined1 *)0x0;
  if (*(undefined1 **)(param_1 + 8) != puVar1) {
    _Memory = *(undefined1 **)(param_1 + 8);
  }
  *(undefined1 **)(param_1 + 8) = puVar1;
  *puVar1 = 0;
  if (_Memory != (undefined1 *)0x0) {
    _free(_Memory);
  }
  return;
}

