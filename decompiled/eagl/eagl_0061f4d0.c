/* Decompiled from Speed.exe @ 0061f4d0 */
/* Module: EAGL */
/* Ghidra DecompileAll */

void __fastcall FUN_0061f4d0(int param_1)

{
  FUN_0061f440();
  if (*(int *)(param_1 + 8) != 0) {
    (*(void (__cdecl **)(void *, unsigned int))0x006dfaa0)
        (*(void **)(param_1 + 8), *(unsigned int *)(param_1 + 4) << 2);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}
