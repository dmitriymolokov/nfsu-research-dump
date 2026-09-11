/* Decompiled from Speed.exe @ 00534390 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_00534390(int *param_1)

{
  int *piVar1;
  int *local_4;
  
  piVar1 = (int *)param_1[0xa4];
  if (piVar1 != (int *)0x0) {
    local_4 = param_1;
    if (*piVar1 != 0) {
      FUN_0064bbd0();
    }
    FUN_0064b510(&local_4);
    FUN_0064b580();
    (**(code **)(*local_4 + 4))(piVar1);
    FUN_0064b5a0();
  }
  param_1[0xa4] = 0;
  return;
}

