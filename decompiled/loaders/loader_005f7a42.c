/* Decompiled from Speed.exe @ 005f7a42 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005f7a42(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x80004005;
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    uVar1 = 0;
  }
  return uVar1;
}

