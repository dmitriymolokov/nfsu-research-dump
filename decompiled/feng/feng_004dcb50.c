/* Decompiled from Speed.exe @ 004dcb50 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004dcb50(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00687ba3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = _malloc(0x60);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004f78e0(puVar2,param_1);
    iVar1 = DAT_0073578c;
    bVar3 = DAT_0073578c != 0;
    *puVar2 = &PTR_FUN_006c3bc4;
    puVar2[0x10] = 0;
    puVar2[0x10] = DAT_0073ad3c;
    puVar2[0x11] = 0;
    *(undefined1 *)(puVar2 + 0x12) = 0;
    if (bVar3) {
      *(undefined4 *)(*(int *)(iVar1 + 8) + 0xd0) = 0;
    }
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

