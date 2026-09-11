/* Decompiled from Speed.exe @ 005a4370 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined1 __fastcall FUN_005a4370(undefined4 param_1)

{
  undefined1 uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = FUN_00504180(0x200000,0);
    return uVar1;
  case 1:
    uVar1 = FUN_00504180(0x4000000,0);
    return uVar1;
  case 2:
    uVar1 = FUN_00504180(0x800000,0);
    return uVar1;
  case 3:
    uVar1 = FUN_00504180(0x8000000,0);
    return uVar1;
  case 4:
    uVar1 = FUN_00504180(0x20000000,0);
    return uVar1;
  case 5:
    uVar1 = FUN_00504180(0x10000000,0);
    return uVar1;
  case 6:
    uVar1 = FUN_00504180(0x1000000,0);
    return uVar1;
  case 7:
    uVar1 = FUN_00504180(0x2000000,0);
    return uVar1;
  case 8:
    uVar1 = FUN_00504180(0x400000,0);
    return uVar1;
  default:
    return 0;
  }
}

