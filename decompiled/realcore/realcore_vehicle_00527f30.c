/* Decompiled from Speed.exe @ 00527f30 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_00527f30(void *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00685326;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = _malloc(0x240);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005279d0(pvVar1);
  }
  *(undefined4 *)((int)param_1 + 0x1758) = uVar2;
  pvVar1 = _malloc(0x240);
  local_4 = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005279d0(pvVar1);
  }
  *(undefined4 *)((int)param_1 + 0x175c) = uVar2;
  local_4 = 0xffffffff;
  (**(code **)(**(int **)((int)param_1 + 0x1758) + 4))
            (param_1,*(undefined4 *)((int)param_1 + 0x1efc));
  pvVar1 = param_1;
  (**(code **)(**(int **)((int)param_1 + 0x175c) + 4))
            (param_1,*(undefined4 *)((int)param_1 + 0x1efc));
  (**(code **)(*(int *)(*(int *)((int)param_1 + 0x1758) + 0x20) + 0x10))(&DAT_006f4420);
  (**(code **)(*(int *)(*(int *)((int)param_1 + 0x175c) + 0x20) + 0x10))(&DAT_006f4420);
  ExceptionList = pvVar1;
  return;
}

