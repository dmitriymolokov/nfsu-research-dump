/* Decompiled from Speed.exe @ 004e0030 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004e0030(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  iVar1 = DAT_0073578c;
  bVar3 = DAT_0073578c == 0;
  *param_1 = &PTR_FUN_006c37d8;
  local_4 = 0;
  param_1[0x10] = 0;
  if (bVar3) {
    param_1[0x10] = DAT_0073ad3c;
  }
  else {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x18) == 0) {
        param_1[0x10] = DAT_0073ad3c;
        ExceptionList = local_c;
        return param_1;
      }
      FUN_004eebf0(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
    }
    param_1[0x10] = DAT_0073ad3c;
  }
  ExceptionList = local_c;
  return param_1;
}

