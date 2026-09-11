/* Decompiled from Speed.exe @ 005bc356 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * FUN_005bc356(int param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_8;
  
  local_8 = 2;
  if (param_1 == 0) {
    local_8 = 0;
  }
  else if (0 < param_1) {
    if (param_1 < 5) {
      local_8 = 1;
    }
    else if (param_1 < 9) {
      local_8 = 2;
    }
    else if (param_1 < 0xd) {
      local_8 = 3;
    }
  }
  pvVar1 = _malloc(0x50);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_005d8831(0,0,0,0,1,param_4);
  }
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  pvVar1 = _malloc(0x24);
  if (pvVar1 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_005d814c(0,param_1,1,1,0x200);
  }
  puVar2[4] = iVar3;
  if (iVar3 == 0) goto LAB_005bc459;
  pvVar1 = _malloc(0x40);
  if (local_8 == 3) {
    if (pvVar1 == (void *)0x0) {
LAB_005bc42c:
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_005d8a9d(3,param_3,param_4);
    }
  }
  else {
    if (pvVar1 == (void *)0x0) goto LAB_005bc42c;
    iVar3 = FUN_005d8a65(local_8,param_2,param_4);
  }
  puVar2[8] = iVar3;
  if (iVar3 != 0) {
    pvVar1 = _malloc(0x14);
    if (pvVar1 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_005d78db(puVar2[8],0,"Value");
    }
    if (iVar3 != 0) {
      puVar2[8] = iVar3;
      FUN_005bb1eb(puVar2);
      return puVar2;
    }
  }
LAB_005bc459:
  (**(code **)*puVar2)(1);
  return (undefined4 *)0x0;
}

