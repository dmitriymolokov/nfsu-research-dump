/* Decompiled from Speed.exe @ 0054db50 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0054db50(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_208;
  undefined4 local_207;
  
  puVar3 = &local_207;
  for (iVar2 = 0x7f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  local_208 = 0;
  FUN_00667950(&local_208,0x200,&DAT_006bd1c4,param_1);
  iVar2 = FUN_00449e20();
  if (iVar2 != 0) {
    uVar1 = FUN_00449e20();
    FUN_00667950(&local_208,0x200,&DAT_006bd380,uVar1);
  }
  iVar2 = FUN_00449d80();
  if (iVar2 != 0) {
    uVar1 = FUN_00449d80();
    FUN_00667950(&local_208,0x200,&DAT_006bd378,uVar1);
  }
  FUN_00664e00(DAT_00734f80,0x6c6f7374,&local_208,&LAB_0054dc50,0);
  DAT_00734fc8 = param_2;
  return;
}

