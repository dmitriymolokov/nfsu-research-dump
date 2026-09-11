/* Decompiled from Speed.exe @ 0059dfe0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0059dfe0(void)

{
  undefined1 *puVar1;
  void *pvVar2;
  
  puVar1 = _malloc(0xc);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 1;
    pvVar2 = _malloc(0x400);
    *(void **)(puVar1 + 4) = pvVar2;
    *(undefined4 *)(puVar1 + 8) = 0;
    DAT_00734440 = puVar1;
    return;
  }
  DAT_00734440 = (undefined1 *)0x0;
  return;
}

