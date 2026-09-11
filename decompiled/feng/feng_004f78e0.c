/* Decompiled from Speed.exe @ 004f78e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004f78e0(undefined4 *param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686fb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004cd2a0();
  *param_1 = &PTR_FUN_006c1874;
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  param_1[7] = param_2[3];
  iVar3 = *param_2;
  local_4 = 0;
  param_1[3] = iVar3;
  *(undefined1 *)(param_1 + 8) = 0;
  if (iVar3 == 0) {
LAB_004f795e:
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xaa68bfce);
    }
  }
  else {
    iVar3 = FUN_004f65d0();
    if (iVar3 == 0) goto LAB_004f795e;
    iVar3 = FUN_004ffb70();
    if (iVar3 == 0) goto LAB_004f795e;
  }
  param_1[10] = iVar3;
  if (param_1[3] == 0) {
LAB_004f799f:
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xaa68bfd4);
    }
  }
  else {
    iVar3 = FUN_004f65d0();
    if (iVar3 == 0) goto LAB_004f799f;
    iVar3 = FUN_004ffb70();
    if (iVar3 == 0) goto LAB_004f799f;
  }
  param_1[0xb] = iVar3;
  if (param_1[3] == 0) {
LAB_004f79e0:
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xaa68bfc6);
    }
  }
  else {
    iVar3 = FUN_004f65d0();
    if (iVar3 == 0) goto LAB_004f79e0;
    iVar3 = FUN_004ffb70();
    if (iVar3 == 0) goto LAB_004f79e0;
  }
  param_1[0xd] = iVar3;
  if (param_1[3] == 0) {
LAB_004f7a21:
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xaa68bfd7);
    }
  }
  else {
    iVar3 = FUN_004f65d0();
    if (iVar3 == 0) goto LAB_004f7a21;
    iVar3 = FUN_004ffb70();
    if (iVar3 == 0) goto LAB_004f7a21;
  }
  param_1[0xc] = iVar3;
  param_1[0xf] = param_2[3];
  if (param_1[3] == 0) {
LAB_004f7a68:
    if (DAT_0073578c != 0) {
      iVar3 = FUN_004ef050(0xff4bb93f);
      if (iVar3 != 0) goto LAB_004f7a84;
    }
    cVar2 = '\0';
  }
  else {
    iVar3 = FUN_004f65d0();
    if (iVar3 == 0) goto LAB_004f7a68;
    iVar3 = FUN_004ffb70();
    if (iVar3 == 0) goto LAB_004f7a68;
LAB_004f7a84:
    cVar2 = '\x01';
  }
  *(char *)(param_1 + 0xe) = cVar2;
  if (cVar2 == '\x01') {
    FUN_004f8000(param_1);
    pcVar1 = (char *)param_1[3];
    DAT_0072cdd0 = *pcVar1;
    if (DAT_0072cdd0 != '\0') {
      pcVar4 = &DAT_0072cdd0;
      do {
        cVar2 = (pcVar1 + -0x72cdcf)[(int)pcVar4];
        pcVar4 = pcVar4 + 1;
        *pcVar4 = cVar2;
      } while (cVar2 != '\0');
    }
    iVar3 = FUN_004f65d0();
    if (iVar3 == 0) {
      FUN_004f62a0(0x32,0);
    }
  }
  FUN_004f7f60();
  if (DAT_0073578c == 0) {
    param_1[9] = 0;
  }
  else {
    iVar3 = FUN_004f3f90(&DAT_00746104);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x18);
    }
    uVar5 = 0;
    if (iVar3 != 0) {
      uVar5 = *(undefined4 *)(iVar3 + 0x80);
    }
    param_1[9] = uVar5;
  }
  ExceptionList = local_c;
  return param_1;
}

