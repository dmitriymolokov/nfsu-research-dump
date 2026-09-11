/* Decompiled from Speed.exe @ 0057b960 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 * FUN_0057b960(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686ea3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = _malloc(0x90);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00578060(puVar1,param_1,0);
    *puVar1 = &PTR_FUN_006ba490;
    *(undefined4 *)(puVar1[0xc] + 0x18) = 1;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}

