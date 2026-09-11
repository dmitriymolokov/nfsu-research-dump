/* Decompiled from Speed.exe @ 005b982e */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005b982e(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined4 *)param_1[0x3e];
  *param_1 = &PTR_FUN_0069b5a8;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    param_1[0x3e] = 0;
  }
  if (param_1[0x47] != 0) {
    FUN_005b9812(1);
    param_1[0x47] = 0;
  }
  if (param_1[0x48] != 0) {
    FUN_005b70ac(1);
    param_1[0x48] = 0;
  }
  if (param_1[0x49] != 0) {
    FUN_005b5fa7(1);
    param_1[0x49] = 0;
  }
  if (param_1[0x4a] != 0) {
    FUN_005b2ae3(1);
    param_1[0x4a] = 0;
  }
  pvVar2 = (void *)param_1[0x44];
  if (pvVar2 != (void *)0x0) {
    _free(pvVar2);
    param_1[0x44] = 0;
  }
  pvVar2 = (void *)param_1[0x46];
  if (pvVar2 != (void *)0x0) {
    _free(pvVar2);
    param_1[0x46] = 0;
  }
  FUN_005ba07f();
  FUN_005c55ad();
  return;
}

