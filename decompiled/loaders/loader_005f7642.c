/* Decompiled from Speed.exe @ 005f7642 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005f7642(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < *(uint *)(param_1 + 0xc)) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x18) + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

