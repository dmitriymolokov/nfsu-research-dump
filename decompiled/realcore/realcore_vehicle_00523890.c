/* Decompiled from Speed.exe @ 00523890 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_00523890(int param_1)

{
  void *pvVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00684e93;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = _malloc(0x240);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_005279d0(pvVar1);
  }
  pvVar1 = (void *)0x0;
  *(int **)(param_1 + 0x1fa0) = piVar2;
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 4))(param_1);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x1fa0) + 0x20) + 0x10))(&DAT_006f4420);
  ExceptionList = pvVar1;
  return;
}

