/* Decompiled from Speed.exe @ 005d1c1b */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005d1c1b(undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  
  pvVar1 = (void *)param_1[0x2a];
  *param_1 = &PTR_FUN_006a0630;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
    param_1[0x2a] = 0;
  }
  pvVar1 = (void *)param_1[0x2b];
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
    param_1[0x2b] = 0;
  }
  pvVar1 = (void *)param_1[0x2c];
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
    param_1[0x2c] = 0;
  }
  pvVar1 = (void *)param_1[0x24];
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
    param_1[0x24] = 0;
  }
  if (param_1[5] != 0) {
    FUN_005d0497(3);
    param_1[5] = 0;
  }
  if (param_1[7] != 0) {
    FUN_005d1545(3);
    param_1[7] = 0;
  }
  if (param_1[9] != 0) {
    FUN_005cb189(3);
    param_1[9] = 0;
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    _free((void *)param_1[0xb]);
    param_1[0xb] = 0;
  }
  pvVar1 = (void *)param_1[0x23];
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
    param_1[0x23] = 0;
  }
  piVar2 = (int *)param_1[0x26];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x26] = 0;
  }
  piVar2 = (int *)param_1[0xe];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0xe] = 0;
  }
  piVar2 = (int *)param_1[2];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[2] = 0;
  }
  piVar2 = (int *)param_1[3];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[3] = 0;
  }
  FUN_005d031f();
  return;
}

