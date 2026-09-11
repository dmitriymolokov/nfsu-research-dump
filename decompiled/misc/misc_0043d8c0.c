/* Decompiled from Speed.exe @ 0043d8c0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


uint __thiscall FUN_0043d8c0(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  int local_20;
  undefined1 local_18;
  uint local_c;
  
  local_c = 0;
  iVar4 = FUN_0043b850(param_2);
  if (iVar4 != 0) {
    if (param_3 == 0) {
      puVar5 = (uint *)FUN_00432e70();
      param_3 = *puVar5;
    }
    uVar1 = *(uint *)(iVar4 + 8);
    iVar6 = FUN_0043da30();
    local_18 = 0;
    cVar3 = FUN_00421a50();
    if (cVar3 == '\0') {
      cVar3 = FUN_0041f600();
      if (cVar3 == '\0') {
        if (DAT_0078a318 != 0) {
          local_18 = 1;
        }
      }
      else {
        local_18 = 3;
      }
    }
    else {
      local_18 = 2;
    }
    uVar7 = FUN_0043b7f0((undefined1)DAT_0078a31c,local_18,(undefined2)DAT_0078a2f0);
    local_c = FUN_00438b60(uVar1,param_3 & 0xff,iVar6 - uVar1,uVar7);
    if (*param_1 == 7) {
      if (uVar1 < local_c) {
        iVar4 = FUN_00432e70();
        if (*(int *)(iVar4 + 8) != 1) {
          local_c = uVar1;
        }
      }
      else if (local_c < uVar1) {
        bVar2 = false;
        for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
          iVar6 = FUN_0043b850(local_20);
          if (((iVar6 != 0) && (iVar6 != iVar4)) &&
             (iVar6 = FUN_00432e70(), *(int *)(iVar6 + 8) == 1)) {
            bVar2 = true;
            break;
          }
        }
        if (!bVar2) {
          local_c = uVar1;
        }
      }
    }
  }
  return local_c;
}

