/* Decompiled from Speed.exe @ 005348e0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_005348e0(int param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  undefined4 uVar4;
  int extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00685fd3;
  local_c = ExceptionList;
  if (((*DAT_007361f0 == 4) && (*(int *)(DAT_007356a8 + 0xf8) == 2)) && (DAT_0078a2f0 == 0x4b1)) {
    ExceptionList = &local_c;
    FUN_005338c0();
    if (*(int *)(param_1 + 0xcc) == -0x55555556) {
      *(undefined4 *)(param_1 + 0xcc) = 0;
    }
    cVar2 = FUN_0052ebe0();
    iVar1 = DAT_007356a8;
    if (cVar2 == '\x01') {
      *(undefined1 *)(DAT_007356a8 + 0x70) = 1;
      *(undefined1 *)(iVar1 + 0x72) = 0;
      if (*(char *)(param_1 + 0x280) == '\0') {
        pvVar3 = _malloc(0x280);
        local_4 = 0;
        if (pvVar3 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_005336c0(pvVar3,*(undefined4 *)(param_1 + 0x284));
        }
        local_4 = 0xffffffff;
        *(undefined4 *)(param_1 + 0x288) = uVar4;
      }
      *(undefined1 *)(param_1 + 0x280) = 1;
      uVar4 = FUN_00578710();
      FUN_00578710(uVar4);
      FUN_00520430(uVar4);
      ExceptionList = local_c;
      return;
    }
    uVar4 = FUN_00578710();
    FUN_00578710(uVar4);
    FUN_00520430(uVar4);
    *(undefined1 *)(extraout_EDX + 0x70) = 0;
  }
  ExceptionList = local_c;
  return;
}

