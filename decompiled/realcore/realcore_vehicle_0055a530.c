/* Decompiled from Speed.exe @ 0055a530 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_0055a530(int *param_1)

{
  *(uint *)(param_1[0x10] + 0xe0) = (uint)(*(int *)(param_1[0x10] + 0xe0) == 0);
                    /* WARNING: Could not recover jumptable at 0x0055a54a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}

