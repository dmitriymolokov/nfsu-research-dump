/* Decompiled from Speed.exe @ 0043be30 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


char __thiscall
FUN_0043be30(int param_1,int param_2,undefined4 param_3,undefined1 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  char local_5;
  
  local_5 = '\0';
  if (*(int *)(param_1 + 8 + param_2 * 4) != 0) {
    iVar2 = FUN_0043b850(param_2);
    local_5 = FUN_00432e40();
    if ((local_5 == '\0') && (iVar2 == *(int *)(param_1 + 4))) {
      if ((param_5 == 1) &&
         (((cVar1 = FUN_0041f600(), cVar1 == '\0' && (cVar1 = FUN_00421a50(), cVar1 == '\0')) &&
          (DAT_0078a318 == 0)))) {
        FUN_004390f0();
        iVar3 = FUN_0042ac60();
        if (iVar3 < DAT_0078a31c) {
          FUN_004399a0(0x10);
          FUN_0043a830();
          return '\0';
        }
        iVar3 = FUN_004ab510();
        iVar4 = FUN_0042ac60();
        if (iVar4 < *(int *)(iVar3 + 0x10)) {
          FUN_004399a0(0x10);
          FUN_0043a830();
          return '\0';
        }
      }
      cVar1 = FUN_0041f600();
      if (cVar1 != '\0') {
        FUN_0043d030();
      }
      FUN_00439170(param_3,param_4,param_5);
      local_5 = '\x01';
      if ((param_5 == 9) && (iVar3 = FUN_00421ac0(iVar2), 0 < iVar3)) {
        for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
          iVar3 = FUN_0043b850(local_18);
          if ((iVar3 != 0) && (iVar3 != iVar2)) {
            FUN_00439470(0,10);
          }
        }
      }
    }
  }
  return local_5;
}

