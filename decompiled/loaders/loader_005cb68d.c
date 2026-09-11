/* Decompiled from Speed.exe @ 005cb68d */
/* Module: Loader */
/* Ghidra DecompileAll */


uint FUN_005cb68d(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_005ca175(param_2,10);
  if (iVar1 == 0) {
    iVar1 = FUN_005ca526(param_2,10);
    if (iVar1 == 0) {
      iVar1 = FUN_005ca4f3(param_2,10);
      if (iVar1 == 0) {
        return 0;
      }
      uVar3 = *(uint *)(iVar1 + 0x2c);
      uVar2 = *(uint *)(iVar1 + 0x30);
    }
    else {
      uVar3 = *(uint *)(iVar1 + 0x24);
      uVar2 = *(uint *)(iVar1 + 0x28);
    }
  }
  else {
    uVar3 = *(uint *)(iVar1 + 0x30);
    uVar2 = *(uint *)(iVar1 + 0x34);
  }
  if (uVar3 <= param_3) {
    return 0;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar2 = *(uint *)(uVar2 + 0x34);
  }
  return ~uVar2;
}

