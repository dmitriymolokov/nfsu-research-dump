/* Decompiled from Speed.exe @ 005dc613 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4
FUN_005dc613(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    local_8 = 0;
    iVar2 = FUN_005f7616(param_3);
    if (iVar2 == 0) {
      uVar1 = 0x80004005;
    }
    else {
      uVar1 = FUN_005f7580(iVar2);
      iVar2 = FUN_005f7616(uVar1);
      if (iVar2 == 0) {
        uVar1 = 0x8007000e;
      }
      else {
        *(ushort *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) | 0x220;
        uVar1 = FUN_005dbee8(param_1,param_2,uVar1,param_4,param_5,param_6,&local_8,param_6,param_7,
                             0);
      }
    }
  }
  return uVar1;
}

