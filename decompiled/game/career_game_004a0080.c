/* Decompiled from Speed.exe @ 004a0080 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


uint FUN_004a0080(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = FUN_00674898();
  uVar2 = FUN_00674898();
  uVar3 = FUN_00674898();
  uVar4 = FUN_00674898();
  return uVar4 | ((iVar1 << 8 | uVar2) << 8 | uVar3) << 8;
}

