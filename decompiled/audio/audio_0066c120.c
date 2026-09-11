/* Decompiled from Speed.exe @ 0066c120 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __fastcall FUN_0066c120(int param_1)

{
  if (*(int *)(param_1 + 0x80) == 4) {
    FUN_0066c0c0();
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x80) = 5;
  }
  return 0;
}

