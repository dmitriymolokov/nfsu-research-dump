/* Decompiled from Speed.exe @ 00651510 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00651510(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 * 0x110 + DAT_0071400c + 0xfc);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00651536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

