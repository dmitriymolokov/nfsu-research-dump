/* Decompiled from Speed.exe @ 0066a910 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_0066a910(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_00668d10(param_3 + 0x1d8);
  if (iVar1 != 0) {
    DVar2 = GetTickCount();
    FUN_0066a580(DVar2);
    FUN_00668df0(param_3 + 0x1d8);
  }
  return 0;
}

