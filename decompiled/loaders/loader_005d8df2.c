/* Decompiled from Speed.exe @ 005d8df2 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005d8df2(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0xc];
  *param_1 = &PTR_FUN_006a0cd4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xc] = 0;
  }
  FUN_005d7803();
  return;
}

