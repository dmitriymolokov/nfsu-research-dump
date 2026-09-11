/* Decompiled from Speed.exe @ 0054da00 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0054da00(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_108;
  undefined4 local_107;
  
  puVar3 = &local_107;
  for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  local_108 = 0;
  FUN_00667950(&local_108,0x100,&DAT_006bd3c4,param_1);
  uVar1 = FUN_00662960();
  FUN_00667950(&local_108,0x100,&DAT_006bd330,uVar1);
  FUN_00664e00(DAT_00734f80,0x70657273,&local_108,&LAB_0054dce0,0);
  DAT_00734fc8 = param_2;
  return;
}

