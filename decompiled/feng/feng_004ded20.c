/* Decompiled from Speed.exe @ 004ded20 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004ded20(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00687b23;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = _malloc(0x40);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004f78e0(puVar1,param_1);
    *puVar1 = &PTR_FUN_006c380c;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}

