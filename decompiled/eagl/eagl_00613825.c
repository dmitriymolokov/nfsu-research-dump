/* Decompiled from Speed.exe @ 00613825 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __fastcall FUN_00613825(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_006a65f8;
  _free((void *)param_1[0x28]);
  _free((void *)param_1[0x2e]);
  piVar1 = (int *)param_1[0x42];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x42] = 0;
  }
  FUN_005f7f76();
  return;
}

