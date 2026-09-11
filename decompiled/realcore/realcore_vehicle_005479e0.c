/* Decompiled from Speed.exe @ 005479e0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_005479e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_004388d0(param_3);
  uVar1 = FUN_006497c0();
  iVar2 = FUN_0054e480(param_1,uVar1);
  if (iVar2 != 0) {
    if (2 < DAT_006f3d88) {
      FUN_004388d0();
      FUN_006497c0();
    }
    FUN_004388d0(param_3);
    FUN_00548d70(param_2);
  }
  return;
}

