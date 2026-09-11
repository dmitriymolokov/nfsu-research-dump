/* Decompiled from Speed.exe @ 0057a420 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_0057a420(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00685f13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  unaff_ESI[0x6d] = 0;
  unaff_ESI[0x6e] = 0;
  puVar4 = unaff_ESI + 4;
  for (iVar3 = 0x70; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  FUN_00458f10(0,0);
  *DAT_0073b080 = unaff_ESI;
  puVar4 = unaff_ESI;
  unaff_ESI[1] = DAT_0073b080;
  DAT_0073b080 = puVar4;
  *unaff_ESI = &DAT_0073b07c;
  unaff_ESI[0x75] = param_1;
  unaff_ESI[0x74] = 0;
  iVar3 = FUN_00647b70();
  if (iVar3 == 4) {
    pvVar1 = _malloc(0x28);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      iVar3 = *(int *)(unaff_ESI[0x75] + 0x1c);
      if (*(int *)(iVar3 + 0xe4) != 0) {
        FUN_005791c0();
      }
      uVar2 = FUN_004440c0(iVar3 + 0x40);
    }
    unaff_ESI[0x74] = uVar2;
  }
  ExceptionList = local_c;
  return;
}

