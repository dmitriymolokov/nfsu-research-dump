/* Decompiled from Speed.exe @ 0052c620 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileModule */


void __thiscall realcore_vehicle_0052C620(int *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  DAT_00735658 = 1;
  if (*(char *)(DAT_007356a8 + 0x84) == '\0') {
    param_1[0x91] = (int)param_2;
    param_1[0x90] = (int)(param_2 + (float)param_1[0x90]);
  }
  else {
    param_1[0x91] = 0;
  }
  if ((char)param_1[0xa8] != '\0') {
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  if ((char)param_1[0x92] == '\x01') {
    (**(code **)(*param_1 + 0x40))();
  }
  (**(code **)(*param_1 + 0x6c))();
  if ((param_1[0xad] == 0) || (param_1[0xac] != 2)) {
    pfVar4 = (float *)(param_1[0x8d] + 0x90);
    pfVar3 = (float *)(param_1[0x8d] + 0x60);
  }
  else {
    iVar1 = *(int *)(param_1[0x8d] + 0x18);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x27c) != 0)) {
      iVar2 = *(int *)(*(int *)(iVar1 + 0x27c) + 0x1c);
      iVar1 = *(int *)(*(int *)(iVar1 + 0x27c) + 0x1c);
      fStack_1c = *(float *)(iVar1 + 0x54);
      fStack_20 = *(float *)(iVar1 + 0x50);
      fStack_18 = *(float *)(iVar1 + 0x58);
      fStack_30 = fStack_20 + *(float *)(iVar2 + 0x40);
      fStack_2c = fStack_1c + *(float *)(iVar2 + 0x44);
      fStack_28 = fStack_18 + *(float *)(iVar2 + 0x48);
    }
    pfVar4 = &fStack_20;
    pfVar3 = &fStack_30;
  }
  (**(code **)(param_1[8] + 0x28))(pfVar3,pfVar4);
  param_1[0x68f] = 0;
  param_1[0x690] = 0;
  param_1[0x691] = 0;
  param_1[0x692] = 0;
  param_1[0x693] = 0;
  param_1[0x694] = 0;
  param_1[0x63b] = 0;
  FUN_0052c3f0();
  (**(code **)(*param_1 + 0x94))(param_2);
  (**(code **)(*param_1 + 100))(param_2);
  FUN_0052bf10();
  (**(code **)(*param_1 + 0x68))(param_2);
  iVar1 = param_1[0x8d];
  param_1[0x7e5] =
       (int)(*(float *)(iVar1 + 0x80) * *(float *)(iVar1 + 0x90) +
            *(float *)(iVar1 + 0x94) * *(float *)(iVar1 + 0x84) +
            *(float *)(iVar1 + 0x98) * *(float *)(iVar1 + 0x88));
  FUN_00527480(param_1,param_2);
  FUN_005278e0(param_2);
  (**(code **)(*param_1 + 0x74))(param_2);
  FUN_0052db90();
  FUN_0052dc70();
  FUN_0052cf80();
  FUN_0052d8b0();
  FUN_0052d010();
  FUN_0052ce40();
  (**(code **)(*param_1 + 0x7c))(param_2);
  (**(code **)(*param_1 + 0x88))(param_2);
  (**(code **)(*param_1 + 0x70))();
  FUN_0052c1d0();
  FUN_00535710();
  FUN_00534be0(param_1 + 0x204);
  FUN_0052a890(param_2);
  FUN_0052b2d0(param_2);
  FUN_00526db0();
  FUN_0052a310(param_2);
  (**(code **)(*param_1 + 0x80))(param_2);
  FUN_00529a30();
  FUN_00527850();
  if (DAT_006f1dd8 == 1) {
    (**(code **)(*param_1 + 0x84))();
  }
  return;
}

