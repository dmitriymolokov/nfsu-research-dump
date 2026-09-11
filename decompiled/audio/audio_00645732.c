/* Decompiled from Speed.exe @ 00645732 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_00645732(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x48) = param_2;
  uVar1 = FUN_00674898();
  uVar1 = FUN_00648ac8(uVar1);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  uVar1 = FUN_00648a58();
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  return *(undefined4 *)(param_1 + 0x74);
}

