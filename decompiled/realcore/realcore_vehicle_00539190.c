/* Decompiled from Speed.exe @ 00539190 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_00539190(int *param_1)

{
  param_1[8] = 0;
  (**(code **)(*param_1 + 0xbc))();
  param_1[8] = 1;
                    /* WARNING: Could not recover jumptable at 0x005391ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xbc))();
  return;
}

