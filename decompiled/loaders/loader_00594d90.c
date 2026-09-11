/* Decompiled from Speed.exe @ 00594d90 */
/* Module: Loader */
/* Ghidra DecompileAll */


uint FUN_00594d90(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00594c60();
  if (iVar2 != 0) {
    uVar1 = *(uint *)(iVar2 + 4);
    FUN_00594d40();
    return ((int)uVar1 < 0) - 1 & uVar1;
  }
  return 0xffffffff;
}

