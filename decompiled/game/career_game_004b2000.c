/* Decompiled from Speed.exe @ 004b2000 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 FUN_004b2000(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00689533;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = _malloc(0x128);
  local_8 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_004af620(pvVar1,param_1,1,&DAT_00748850,0,0xfffffffe);
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = local_10;
  return 0;
}

