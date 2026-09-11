/* Decompiled from Speed.exe @ 00648ac8 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void __thiscall FUN_00648ac8(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x18) == 0) && (*(int *)(param_1 + 4) == 0)) {
    puVar1 = (undefined4 *)FUN_00648cd0(param_1 + 4);
    iVar2 = FUN_00648cd0(param_1,*puVar1);
    (**(code **)(iVar2 + 4))();
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00642e80("Please choose a codec during the first data call back\n");
  }
  (**(code **)(**(int **)(param_1 + 0x18) + 8))(param_2);
  return;
}

