/* Decompiled from Speed.exe @ 00648b7f */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 __fastcall FUN_00648b7f(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 4) == 0) {
    puVar1 = (undefined4 *)FUN_00648cd0(&local_8);
    iVar2 = FUN_00648cd0(param_1,*puVar1);
    (**(code **)(iVar2 + 4))();
  }
  else {
    local_8 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return local_8;
}

