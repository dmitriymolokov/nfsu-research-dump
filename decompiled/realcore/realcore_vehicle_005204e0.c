/* Decompiled from Speed.exe @ 005204e0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_005204e0(int param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

