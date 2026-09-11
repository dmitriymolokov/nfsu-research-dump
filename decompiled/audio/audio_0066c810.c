/* Decompiled from Speed.exe @ 0066c810 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall FUN_0066c810(int param_1)

{
  if ((*(int *)(param_1 + 0xb4) != *(int *)(param_1 + 0xb0)) &&
     (*(int *)(param_1 + 0xb8) == *(int *)(param_1 + 0xb0))) {
    *(int *)(param_1 + 0xb8) =
         ((*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8)) + *(int *)(param_1 + 0xb8)) %
         *(int *)(param_1 + 0xac);
    FUN_0066c2a0();
    return;
  }
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x9c);
  FUN_0066c0c0();
  return;
}

