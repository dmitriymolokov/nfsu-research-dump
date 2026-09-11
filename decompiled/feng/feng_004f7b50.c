/* Decompiled from Speed.exe @ 004f7b50 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004f7b50(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00686f98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c1874;
  local_4 = 0;
  if (*(int *)(param_1[5] + 0x80) != 0) {
    *(undefined4 *)param_1[6] = *(undefined4 *)(*(int *)(param_1[5] + 0x80) + 0x10);
  }
  if ((((*(char *)(param_1 + 0xe) != '\0') &&
       (iVar2 = FUN_004f65d0(), iVar1 = DAT_0073578c, iVar2 != 0)) && (DAT_0073578c != 0)) &&
     ((iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 != 0 && (*(int *)(iVar2 + 0x18) != 0)))) {
    FUN_004eebf0(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
  }
  local_4 = 0xffffffff;
  FUN_004cd350();
  ExceptionList = local_c;
  return;
}

