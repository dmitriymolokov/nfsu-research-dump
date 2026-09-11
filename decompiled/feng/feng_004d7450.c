/* Decompiled from Speed.exe @ 004d7450 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004d7450(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = DAT_00735e18;
  puStack_8 = &LAB_00687c0b;
  local_c = ExceptionList;
  local_4 = 0;
  if (DAT_00735e18 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    FUN_004f78e0(DAT_00735e18,param_1);
    *puVar1 = &PTR_FUN_006c3d14;
    puVar1[0x10] = 0;
    *(undefined1 *)(puVar1 + 0x11) = 0;
    *(undefined1 *)((int)puVar1 + 0x45) = 0;
    ExceptionList = local_c;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

