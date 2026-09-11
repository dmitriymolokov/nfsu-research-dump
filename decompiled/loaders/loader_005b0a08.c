/* Decompiled from Speed.exe @ 005b0a08 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005b0a08(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_006994e8;
  if ((void *)param_1[2] != (void *)0x0) {
    _free((void *)param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[4] != 0) {
    FUN_005b0757(1);
    param_1[4] = 0;
  }
  return;
}

