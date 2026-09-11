/* Decompiled from Speed.exe @ 0064577c */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_0064577c(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x70) == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x74) == 0) {
    uVar1 = FUN_00674898();
    uVar1 = FUN_00646564(uVar1);
  }
  else {
    uVar1 = FUN_00646564(*(undefined4 *)(param_1 + 0x44));
  }
  return uVar1;
}

