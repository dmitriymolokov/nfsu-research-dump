/* Decompiled from Speed.exe @ 005493d0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005493d0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_006637b0();
  if (iVar1 != 0) {
    uVar2 = FUN_00663fe0(iVar1,0,0x2000);
    return uVar2;
  }
  if (DAT_007346d4 != 0) {
    _DAT_0078ea94 = _DAT_0078ea94 + 1;
  }
  return 0;
}

