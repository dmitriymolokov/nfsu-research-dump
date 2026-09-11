/* Decompiled from Speed.exe @ 005bcd15 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * __thiscall FUN_005bcd15(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  pvVar1 = _malloc(0x50);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_005d8831(0,0,0,0,1,param_1 + 0x20);
  }
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  pvVar1 = _malloc(0x24);
  if (pvVar1 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_005d814c(3,0x14,1,1,0x200);
  }
  puVar2[4] = iVar3;
  if (iVar3 != 0) {
    pvVar1 = _malloc(0x40);
    if (pvVar1 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_005d8a65(4,0,param_1 + 0x20);
    }
    if (iVar3 != 0) {
      puVar2[8] = iVar3;
      if (param_2 != 0) {
        iVar4 = FUN_005d7885(param_2);
        *(int *)(iVar3 + 0x18) = iVar4;
        if (iVar4 == 0) goto LAB_005bcdd7;
      }
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
  }
LAB_005bcdd7:
  (**(code **)*puVar2)(1);
  return (undefined4 *)0x0;
}

