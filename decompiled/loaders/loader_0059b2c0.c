/* Decompiled from Speed.exe @ 0059b2c0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __thiscall FUN_0059b2c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_10;
  int local_c;
  
  iVar1 = FUN_004216b0(*(undefined4 *)(param_1 + 0xc));
  local_c = 0;
  local_10 = 0;
  do {
    if (99 < local_10) {
      return;
    }
    iVar2 = FUN_00432e10();
    if ((iVar2 != 0) && (iVar2 = FUN_00442950(), iVar2 != 0)) {
      iVar2 = FUN_00432e00();
      local_c = local_c + iVar2;
      if (iVar1 < local_c) {
        uVar3 = FUN_00432e10();
        *param_2 = uVar3;
        uVar3 = FUN_00432df0();
        param_2[1] = uVar3;
        return;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}

