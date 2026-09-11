/* Decompiled from Speed.exe @ 005d6620 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005d6620(undefined4 *param_1)

{
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)*param_1);
  }
  return;
}

