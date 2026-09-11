/* Decompiled from Speed.exe @ 0054d8b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0054d8b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_208;
  undefined4 local_207;
  
  local_208 = 0;
  puVar2 = &local_207;
  for (iVar1 = 0x7f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  FUN_0054de70(param_2);
  FUN_00664e00(DAT_00734f80,0x61757468,&local_208,FUN_0054dc70,0);
  DAT_00734fc8 = param_3;
  return;
}

