/* Decompiled from Speed.exe @ 00557770 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 * FUN_00557770(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_006bcae4;
  FUN_0054d590();
  pcVar2 = (char *)param_1[3];
  DAT_00734bc8 = *pcVar2;
  if (DAT_00734bc8 != '\0') {
    pcVar4 = &DAT_00734bc8;
    do {
      cVar1 = (pcVar2 + -0x734bc7)[(int)pcVar4];
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar1;
    } while (cVar1 != '\0');
  }
  iVar6 = param_1[3];
  uVar5 = FUN_004fd230();
  if (((((iVar6 == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
       (iVar6 = FUN_004ffb70(), iVar6 == 0)) &&
      ((DAT_0073578c == 0 || (iVar6 = FUN_004ef050(uVar5), iVar6 == 0)))) ||
     (*(int *)(iVar6 + 0x18) != 2)) {
    iVar6 = 0;
  }
  param_1[0x10] = iVar6;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x45) = 0;
  *(undefined1 *)((int)param_1 + 0x46) = 0;
  FUN_00495f00(0x353f3237);
  if (DAT_00734f54 == '\0') {
    uVar5 = 0x2c119933;
  }
  else {
    uVar5 = 0x6571a9e1;
  }
  FUN_00495f00(uVar5);
  if (DAT_0073578c != 0) {
    FUN_004f5ed0(DAT_0073578c);
  }
  FUN_00558000(param_1);
  FUN_00558000(param_1);
  FUN_00558000(param_1);
  if (DAT_007354cc == '\0') {
    puVar7 = &DAT_00735468;
    for (iVar6 = 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    FUN_0041d770(&DAT_0078a478,&DAT_00735468);
    FUN_00558080(param_1);
  }
  else if (DAT_00734fc4 < 1) {
    FUN_005580d0(param_1);
  }
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (((param_1[3] == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
     (iVar6 = FUN_004ffb70(), iVar6 == 0)) {
    if (DAT_0073578c == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_004ef050(0xaa68bfce);
    }
  }
  param_1[0x12] = iVar6;
  if (((param_1[3] == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
     (iVar6 = FUN_004ffb70(), iVar6 == 0)) {
    if (DAT_0073578c == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_004ef050(0xaa68bfd4);
    }
  }
  param_1[0x13] = iVar6;
  iVar6 = FUN_004f3f90(&DAT_00746104);
  if ((iVar6 == 0) || (iVar6 = *(int *)(iVar6 + 0x18), iVar6 == 0)) {
    if ((DAT_0073578c == 0) || (iVar3 = *(int *)(DAT_0073578c + 8), iVar3 == 0)) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_004fd1e0(iVar3 + 0xdc);
      if (iVar6 == 0) {
        iVar6 = FUN_004fd1e0(iVar3 + 0xec);
      }
    }
  }
  param_1[0x14] = iVar6;
  ExceptionList = local_c;
  return param_1;
}

