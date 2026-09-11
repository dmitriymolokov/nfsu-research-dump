/* Decompiled from Speed.exe @ 004de600 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004de600(undefined4 *param_1,undefined4 param_2)

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
  bVar2 = DAT_00734998 == 1;
  *param_1 = &PTR_FUN_006c37e8;
  param_1[0x10] = 0;
  local_4 = 0;
  param_1[0x10] = DAT_0073ad3c;
  if (bVar2) {
    if (((param_1[3] == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
       (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
      if (DAT_0073578c == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_004ef050(0x981e196f);
      }
    }
    FUN_004f6910(iVar1);
    ExceptionList = local_c;
    return param_1;
  }
  ExceptionList = local_c;
  return param_1;
}

