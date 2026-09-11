/* Decompiled from Speed.exe @ 004eea10 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004eea10(int param_1)

{
  void *pvVar1;
  int iVar2;
  byte unaff_BL;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00684b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _free(*(void **)(param_1 + 8));
  if (unaff_BL != 0) {
    pvVar1 = _malloc((uint)unaff_BL * 0x88);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      FUN_004010a0(pvVar1,0x88,(uint)unaff_BL,&LAB_004fbdd0);
    }
    *(void **)(param_1 + 8) = pvVar1;
  }
  *(uint *)(param_1 + 0xd4) = (uint)unaff_BL;
  puVar3 = (undefined4 *)(param_1 + 0x38);
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  ExceptionList = local_c;
  return;
}

