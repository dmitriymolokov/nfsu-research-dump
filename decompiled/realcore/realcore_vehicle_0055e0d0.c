/* Decompiled from Speed.exe @ 0055e0d0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0055e0d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00685193;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = _malloc(0x1c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00556750();
    *puVar1 = &PTR_FUN_006bcde8;
    puVar1[3] = param_1;
    puVar1[5] = 0;
    puVar1[6] = param_2;
  }
  local_4 = 0xffffffff;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
  }
  FUN_005568d0(puVar2);
  *(int *)(unaff_EDI + 0x74) = *(int *)(unaff_EDI + 0x74) + 1;
  *(undefined1 *)(puVar1 + 4) = 0;
  ExceptionList = local_c;
  return;
}

