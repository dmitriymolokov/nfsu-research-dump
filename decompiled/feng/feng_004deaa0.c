/* Decompiled from Speed.exe @ 004deaa0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004deaa0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  iVar1 = DAT_00734998;
  bVar3 = DAT_00734998 == 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_006c3758;
  if ((bVar3) || (iVar1 == 5)) {
    pcVar2 = "na_boot";
  }
  else {
    pcVar2 = (char *)FUN_0059fd70("logo_eng");
  }
  FUN_004c39d0(pcVar2);
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  ExceptionList = local_c;
  return param_1;
}

