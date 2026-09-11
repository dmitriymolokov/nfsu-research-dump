/* Decompiled from Speed.exe @ 0055dc20 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0055dc20(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685feb;
  local_c = ExceptionList;
  iVar3 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x44);
  ExceptionList = &local_c;
  do {
    local_4 = 0xffffffff;
    pvVar1 = _malloc(0x20);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0055ce20(iVar3);
    }
    *puVar4 = uVar2;
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
    local_4 = 0xffffffff;
  } while (iVar3 < 4);
  if (DAT_00777b58 == 0) {
    FUN_00495f00(0xe08b290f);
    FUN_00495f00(0x72613f82);
    *(undefined4 *)(param_1 + 0x78) = 0x678fd4b9;
  }
  else {
    FUN_00495f00(0xcb006f6c);
    *(undefined4 *)(param_1 + 0x78) = 0x83015b7a;
  }
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  FUN_0055e170(param_1);
  ExceptionList = local_c;
  return;
}

