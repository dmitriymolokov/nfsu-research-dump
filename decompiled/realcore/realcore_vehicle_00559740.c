/* Decompiled from Speed.exe @ 00559740 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


undefined4 * FUN_00559740(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  pcVar2 = (char *)param_1[3];
  *param_1 = &PTR_LAB_006bca48;
  DAT_00734bc8 = *pcVar2;
  if (DAT_00734bc8 != '\0') {
    pcVar4 = &DAT_00734bc8;
    do {
      cVar1 = (pcVar2 + -0x734bc7)[(int)pcVar4];
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar1;
    } while (cVar1 != '\0');
  }
  local_4 = 0;
  *param_1 = &PTR_LAB_006bca84;
  param_1[0x10] = &DAT_007787b4;
  FUN_0055a200();
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
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  piVar6 = param_1 + 0x12;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  if (param_1[3] == 0) {
LAB_00559807:
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xda96ef93);
    }
  }
  else {
    iVar5 = FUN_004f65d0();
    if (iVar5 == 0) goto LAB_00559807;
    iVar5 = FUN_004ffb70();
    if (iVar5 == 0) goto LAB_00559807;
  }
  param_1[0x12] = iVar5;
  if (param_1[3] == 0) {
LAB_00559848:
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xda9a39d9);
    }
  }
  else {
    iVar5 = FUN_004f65d0();
    if (iVar5 == 0) goto LAB_00559848;
    iVar5 = FUN_004ffb70();
    if (iVar5 == 0) goto LAB_00559848;
  }
  param_1[0x13] = iVar5;
  if (param_1[3] == 0) {
LAB_00559889:
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xda96ef92);
    }
  }
  else {
    iVar5 = FUN_004f65d0();
    if (iVar5 == 0) goto LAB_00559889;
    iVar5 = FUN_004ffb70();
    if (iVar5 == 0) goto LAB_00559889;
  }
  param_1[0x14] = iVar5;
  if (param_1[3] == 0) {
LAB_005598ca:
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xda9a39d8);
    }
  }
  else {
    iVar5 = FUN_004f65d0();
    if (iVar5 == 0) goto LAB_005598ca;
    iVar5 = FUN_004ffb70();
    if (iVar5 == 0) goto LAB_005598ca;
  }
  param_1[0x15] = iVar5;
  if (param_1[3] == 0) {
LAB_0055990b:
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xda96ef91);
    }
  }
  else {
    iVar5 = FUN_004f65d0();
    if (iVar5 == 0) goto LAB_0055990b;
    iVar5 = FUN_004ffb70();
    if (iVar5 == 0) goto LAB_0055990b;
  }
  param_1[0x16] = iVar5;
  if (param_1[3] == 0) {
LAB_0055994c:
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xda9a39d7);
    }
  }
  else {
    iVar5 = FUN_004f65d0();
    if (iVar5 == 0) goto LAB_0055994c;
    iVar5 = FUN_004ffb70();
    if (iVar5 == 0) goto LAB_0055994c;
  }
  param_1[0x17] = iVar5;
  if (param_1[3] == 0) {
LAB_0055998d:
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xda96ef90);
    }
  }
  else {
    iVar5 = FUN_004f65d0();
    if (iVar5 == 0) goto LAB_0055998d;
    iVar5 = FUN_004ffb70();
    if (iVar5 == 0) goto LAB_0055998d;
  }
  param_1[0x18] = iVar5;
  if (param_1[3] == 0) {
LAB_005599ce:
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xda9a39d6);
    }
  }
  else {
    iVar5 = FUN_004f65d0();
    if (iVar5 == 0) goto LAB_005599ce;
    iVar5 = FUN_004ffb70();
    if (iVar5 == 0) goto LAB_005599ce;
  }
  param_1[0x19] = iVar5;
  if (param_1[3] == 0) {
LAB_00559a0f:
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xda9a39d5);
    }
  }
  else {
    iVar5 = FUN_004f65d0();
    if (iVar5 == 0) goto LAB_00559a0f;
    iVar5 = FUN_004ffb70();
    if (iVar5 == 0) goto LAB_00559a0f;
  }
  param_1[0x1a] = iVar5;
  if (param_1[3] == 0) {
LAB_00559a50:
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xda96ef8f);
    }
  }
  else {
    iVar5 = FUN_004f65d0();
    if (iVar5 == 0) goto LAB_00559a50;
    iVar5 = FUN_004ffb70();
    if (iVar5 == 0) goto LAB_00559a50;
  }
  param_1[0x1b] = iVar5;
  if (param_1[3] == 0) {
LAB_00559a91:
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xda9a39d4);
    }
  }
  else {
    iVar5 = FUN_004f65d0();
    if (iVar5 == 0) goto LAB_00559a91;
    iVar5 = FUN_004ffb70();
    if (iVar5 == 0) goto LAB_00559a91;
  }
  param_1[0x1c] = iVar5;
  if (param_1[3] != 0) {
    iVar5 = FUN_004f65d0();
    if (iVar5 != 0) {
      iVar5 = FUN_004ffb70();
      if (iVar5 != 0) goto LAB_00559aee;
    }
  }
  if (DAT_0073578c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_004ef050(0xda96ef8e);
  }
LAB_00559aee:
  param_1[0x1d] = iVar5;
  iVar5 = FUN_004f3f90(&DAT_00746104);
  if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
    if ((DAT_0073578c == 0) || (iVar3 = *(int *)(DAT_0073578c + 8), iVar3 == 0)) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004fd1e0(iVar3 + 0xdc);
      if (iVar5 == 0) {
        iVar5 = FUN_004fd1e0(iVar3 + 0xec);
      }
    }
  }
  param_1[0x1e] = iVar5;
  ExceptionList = local_c;
  return param_1;
}

