/* Decompiled from Speed.exe @ 004ee2c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004ee2c0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  iVar1 = DAT_0073578c;
  bVar2 = DAT_0073578c != 0;
  local_4 = 0;
  *param_1 = &PTR_LAB_006c2c6c;
  if (bVar2) {
    FUN_004f5f80(iVar1,1);
    if (DAT_0073578c != 0) {
      FUN_004f5ed0(DAT_0073578c);
    }
  }
  FUN_00495f00(0x639);
  ExceptionList = local_c;
  return param_1;
}

