/* Decompiled from Speed.exe @ 004de950 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004de950(undefined4 *param_1,undefined4 param_2)

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
  bVar3 = DAT_00735e04 != 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_006c3768;
  if (bVar3) {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    iVar1 = DAT_0073578c;
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (DAT_0073578c != 0)) {
      iVar2 = FUN_004f3f90(&DAT_00746104);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) {
        FUN_004eebf0(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

