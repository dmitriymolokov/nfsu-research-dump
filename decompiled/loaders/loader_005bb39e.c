/* Decompiled from Speed.exe @ 005bb39e */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * __thiscall FUN_005bb39e(uint *param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_005e554f();
  pvVar3 = (void *)0x0;
  if (param_2 != 0) {
    pvVar3 = _malloc(8);
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)FUN_005e8a52(param_1,param_1[3]);
    }
    if (pvVar3 == (void *)0x0) goto LAB_005bb427;
  }
  pvVar1 = _malloc(0x38);
  puVar4 = (undefined4 *)0x0;
  if (pvVar1 != (void *)0x0) {
    puVar4 = (undefined4 *)FUN_005d8db3(param_1 + 8,0);
  }
  if (puVar4 != (undefined4 *)0x0) {
    iVar2 = FUN_005e85e1(param_1[1],*param_1 & 5,pvVar3,puVar4 + 0xc);
    if (iVar2 < 0) {
      param_1[0x10] = 1;
      (**(code **)*puVar4)(1);
      puVar4 = (undefined4 *)0x0;
    }
  }
LAB_005bb427:
  _free(pvVar3);
  FUN_005e7993();
  return puVar4;
}

