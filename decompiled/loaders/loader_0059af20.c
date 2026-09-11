/* Decompiled from Speed.exe @ 0059af20 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __thiscall FUN_0059af20(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_8;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  for (local_8 = 0; local_8 < 100; local_8 = local_8 + 1) {
    iVar1 = FUN_00432e10();
    if (iVar1 != 0) {
      iVar1 = FUN_00442950();
      if (iVar1 != 0) {
        iVar1 = FUN_00432e00();
        *(int *)(param_1 + 0xc) = iVar1 + *(int *)(param_1 + 0xc);
      }
    }
    *(undefined4 *)(param_2 + local_8 * 4) = *(undefined4 *)(param_1 + 0xc);
  }
  return;
}

