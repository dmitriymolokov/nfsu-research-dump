/* Decompiled from Speed.exe @ 00539000 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_00539000(int *param_1)

{
  param_1[8] = param_1[7];
  (**(code **)(*param_1 + 0xb0))();
  param_1[8] = param_1[8] - 1U & 1;
                    /* WARNING: Could not recover jumptable at 0x00539020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))();
  return;
}

