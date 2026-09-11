/* Decompiled from Speed.exe @ 004054f0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_004054f0(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int unaff_ESI;
  
  puVar1 = (undefined1 *)(unaff_ESI + 0x54);
  puVar2 = (undefined1 *)0x0;
  if (*(undefined1 **)(unaff_ESI + 0x50) != puVar1) {
    puVar2 = *(undefined1 **)(unaff_ESI + 0x50);
  }
  *(undefined1 **)(unaff_ESI + 0x50) = puVar1;
  *puVar1 = 0;
  if (puVar2 != (undefined1 *)0x0) {
    _free(puVar2);
  }
  FUN_004054c0();
  puVar1 = (undefined1 *)(unaff_ESI + 0x14);
  puVar2 = (undefined1 *)0x0;
  if (*(undefined1 **)(unaff_ESI + 0x10) != puVar1) {
    puVar2 = *(undefined1 **)(unaff_ESI + 0x10);
  }
  *(undefined1 **)(unaff_ESI + 0x10) = puVar1;
  *puVar1 = 0;
  if (puVar2 != (undefined1 *)0x0) {
    _free(puVar2);
  }
  return;
}

