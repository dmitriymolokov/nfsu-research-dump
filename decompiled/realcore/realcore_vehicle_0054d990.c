/* Decompiled from Speed.exe @ 0054d990 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0054d990(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_88;
  undefined4 local_87;
  
  puVar2 = &local_87;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  local_88 = 0;
  FUN_00667950(&local_88,0x80,&DAT_006bd3c4,param_1);
  FUN_00664e00(DAT_00734f80,0x64706572,&local_88,&LAB_0054dc50,0);
  DAT_00734fc8 = param_2;
  return;
}

