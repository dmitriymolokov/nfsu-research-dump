/* Decompiled from Speed.exe @ 0064c1a0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_0064c1a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  WaitForSingleObject(DAT_00713c50,0xffffffff);
  uVar1 = FUN_0064bb20(param_1,param_2,param_3);
  ReleaseMutex(DAT_00713c50);
  return uVar1;
}

