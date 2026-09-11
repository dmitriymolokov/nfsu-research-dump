/* Decompiled from Speed.exe @ 00594e30 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_00594e30(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00594c60();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 != (uint *)0x0) {
    *param_1 = *(uint *)(iVar1 + 4) & ((int)*(uint *)(iVar1 + 4) < 0) - 1;
  }
  uVar2 = FUN_00565b60(*(uint *)(iVar1 + 4) & ((int)*(uint *)(iVar1 + 4) < 0) - 1,0,0,0x2000);
  FUN_00594dd0(*(uint *)(iVar1 + 4) & ((int)*(uint *)(iVar1 + 4) < 0) - 1);
  FUN_00594d40();
  return uVar2;
}

