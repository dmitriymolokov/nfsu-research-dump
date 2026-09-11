/* Decompiled from Speed.exe @ 005c1052 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005c1052(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  pvVar1 = _malloc(0x14);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_005d78db(param_2,0,&PTR_DAT_0069fa78);
  }
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005c0e94(param_1,puVar2);
    puVar2[2] = 0;
    (**(code **)*puVar2)(1);
  }
  return uVar3;
}

