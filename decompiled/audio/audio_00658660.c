/* Decompiled from Speed.exe @ 00658660 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00658660(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00654010(*(undefined4 *)(param_1 + 200));
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    FUN_00653fe0(*(undefined4 *)(param_1 + 200));
    uVar2 = FUN_00653db0();
    return uVar2;
  }
  return 0;
}

