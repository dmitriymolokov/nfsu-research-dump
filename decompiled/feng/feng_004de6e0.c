/* Decompiled from Speed.exe @ 004de6e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004de6e0(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006870d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = _malloc(0x48);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004f78e0(puVar1,param_1);
    *puVar1 = &PTR_FUN_006c37b8;
    puVar1[0x10] = 0;
    puVar1[0x10] = DAT_0073ad3c;
    *(undefined1 *)(puVar1 + 0x11) = 1;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

