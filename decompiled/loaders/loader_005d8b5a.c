/* Decompiled from Speed.exe @ 005d8b5a */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005d8b5a(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_006a0cb4;
  if ((param_1[4] == 5) && (piVar1 = (int *)param_1[6], piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[6] = 0;
  }
  if ((param_1[4] == 4) && ((undefined4 *)param_1[6] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[6])(1);
  }
  FUN_005d7803();
  return;
}

