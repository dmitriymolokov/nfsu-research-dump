/* Decompiled from Speed.exe @ 00524620 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileModule */


void __thiscall FUN_00524620(int *param_1,float param_2)

{
  if (*(char *)(DAT_007356a8 + 0x84) == '\0') {
    param_1[0x91] = (int)param_2;
    param_1[0x90] = (int)(param_2 + (float)param_1[0x90]);
  }
  else {
    param_1[0x91] = 0;
  }
  (**(code **)(*param_1 + 100))(param_2);
  (**(code **)(*param_1 + 0x68))(param_2);
  FUN_00524240(param_2);
  (**(code **)(param_1[8] + 0x28))(param_1[0x8d] + 0x60,param_1[0x8d] + 0x90);
  (**(code **)(*param_1 + 0x9c))();
  (**(code **)(*param_1 + 0x98))(param_2);
  (**(code **)(*param_1 + 0x70))();
  FUN_0052db90();
  FUN_0052dc70();
  FUN_0052cf80();
  FUN_0052d8b0();
  FUN_0052d010();
  FUN_0052ce40();
  (**(code **)(*param_1 + 0x9c))();
  (**(code **)(*param_1 + 0x88))(param_2);
  FUN_005278e0(param_2);
  (**(code **)(*param_1 + 0x74))(param_2);
  (**(code **)(*param_1 + 0x7c))(param_2);
  FUN_00527850();
  (**(code **)(*param_1 + 0x80))(param_2);
  if (DAT_006f1dd8 == 1) {
    (**(code **)(*param_1 + 0x84))();
  }
  return;
}

