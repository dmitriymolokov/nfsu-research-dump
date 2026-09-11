/* Decompiled from Speed.exe @ 00593880 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00593880(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686233;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DAT_007344b0 = (undefined4 *)FUN_00566dc0(0x1c,"FernShakerSlotPool",0);
  if ((DAT_007344b0 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_007344b0;
    puVar1 = DAT_007344b0;
    DAT_007344b0[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_007344b0 = &DAT_0073d818;
  }
  _DAT_007344ac = 2;
  puVar1 = _malloc(0x24);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 2;
    _eh_vector_constructor_iterator_
              (puVar2,0x10,2,(_func_void_void_ptr *)&LAB_00593960,
               (_func_void_void_ptr *)&LAB_00593970);
  }
  DAT_007344a8 = puVar2;
  FUN_005937f0(puVar1);
  FUN_005937f0();
  ExceptionList = local_c;
  return;
}

