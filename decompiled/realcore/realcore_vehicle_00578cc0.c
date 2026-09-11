/* Decompiled from Speed.exe @ 00578cc0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


undefined4 * FUN_00578cc0(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  undefined4 unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686423;
  local_c = ExceptionList;
  switch(param_1) {
  case 1:
    ExceptionList = &local_c;
    puVar2 = _malloc(0x14);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &PTR_FUN_006ba644;
      puVar2[4] = unaff_ESI;
      *(int *)(unaff_ESI + 0xd8) = *(int *)(unaff_ESI + 0xd8) + 1;
      puVar2[3] = 0;
      *puVar2 = &PTR_LAB_006ba63c;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 4:
    ExceptionList = &local_c;
    pvVar1 = _malloc(0x80);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      puVar2 = (undefined4 *)FUN_00579750(pvVar1,unaff_ESI,param_2,unaff_EDI);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 6:
    ExceptionList = &local_c;
    pvVar1 = _malloc(0x18);
    if (pvVar1 != (void *)0x0) {
      puVar2 = (undefined4 *)FUN_0057a350(param_2,unaff_EDI);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 7:
    ExceptionList = &local_c;
    pvVar1 = _malloc(0x40);
    if (pvVar1 != (void *)0x0) {
      puVar2 = (undefined4 *)FUN_0057c2a0(param_2,unaff_EDI);
      ExceptionList = local_c;
      return puVar2;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

