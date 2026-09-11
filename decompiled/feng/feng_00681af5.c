/* Decompiled from Speed.exe @ 00681af5 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_00681af5(undefined2 *param_1,int *param_2,byte *param_3,undefined4 param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint unaff_retaddr;
  char local_5c [23];
  char local_45;
  undefined2 local_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined4 local_3a;
  ushort local_36;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  uint local_10;
  char *local_c;
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  iVar1 = 0;
  pcVar5 = local_5c;
  local_30 = 0;
  local_20 = 1;
  local_10 = 0;
  local_18 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_14 = 0;
  local_1c = 0;
  for (pbVar6 = param_3;
      (((bVar3 = *pbVar6, bVar3 == 0x20 || (bVar3 == 9)) || (bVar3 == 10)) ||
      (local_c = pcVar5, bVar3 == 0xd)); pbVar6 = pbVar6 + 1) {
  }
LAB_00681b4f:
  bVar3 = *pbVar6;
  pbVar7 = pbVar6 + 1;
  switch(iVar1) {
  case 0:
    if (('0' < (char)bVar3) && ((char)bVar3 < ':')) {
LAB_00681b6c:
      iVar1 = 3;
      goto LAB_00681d8d;
    }
    if (bVar3 == DAT_006ec184) {
LAB_00681b7b:
      iVar1 = 5;
      pbVar6 = pbVar7;
      goto LAB_00681b4f;
    }
    if (bVar3 == 0x2b) {
      local_30 = 0;
      iVar1 = 2;
      pbVar6 = pbVar7;
      goto LAB_00681b4f;
    }
    if (bVar3 == 0x2d) {
      iVar1 = 2;
      local_30 = 0x8000;
      pbVar6 = pbVar7;
      goto LAB_00681b4f;
    }
    if (bVar3 != 0x30) {
      local_c = pcVar5;
      goto LAB_00681d4b;
    }
    break;
  case 1:
    iVar1 = 1;
    local_18 = 1;
    if (('0' < (char)bVar3) && ((char)bVar3 < ':')) goto LAB_00681b6c;
    if (bVar3 == DAT_006ec184) goto LAB_00681bcd;
    if ((bVar3 == 0x2b) || (bVar3 == 0x2d)) goto LAB_00681c0e;
    pbVar6 = pbVar7;
    if (bVar3 != 0x30) goto LAB_00681be7;
    goto LAB_00681b4f;
  case 2:
    if (('0' < (char)bVar3) && ((char)bVar3 < ':')) goto LAB_00681b6c;
    if (bVar3 == DAT_006ec184) goto LAB_00681b7b;
    pbVar6 = param_3;
    if (bVar3 != 0x30) goto LAB_00681d48;
    break;
  case 3:
    local_18 = 1;
    while (iVar1 = _isdigit((uint)bVar3), iVar1 != 0) {
      if (local_10 < 0x19) {
        local_10 = local_10 + 1;
        *pcVar5 = bVar3 - 0x30;
        pcVar5 = pcVar5 + 1;
      }
      else {
        local_14 = local_14 + 1;
      }
      bVar3 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    }
    if (bVar3 != DAT_006ec184) goto LAB_00681cbd;
LAB_00681bcd:
    iVar1 = 4;
    pbVar6 = pbVar7;
    goto LAB_00681b4f;
  case 4:
    local_18 = 1;
    local_2c = 1;
    if (local_10 == 0) {
      while (bVar3 == 0x30) {
        local_14 = local_14 + -1;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      }
    }
    while (iVar1 = _isdigit((uint)bVar3), iVar1 != 0) {
      if (local_10 < 0x19) {
        local_10 = local_10 + 1;
        *pcVar5 = bVar3 - 0x30;
        pcVar5 = pcVar5 + 1;
        local_14 = local_14 + -1;
      }
      bVar3 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    }
LAB_00681cbd:
    if ((bVar3 == 0x2b) || (bVar3 == 0x2d)) {
LAB_00681c0e:
      iVar1 = 0xb;
      pbVar6 = pbVar7 + -1;
    }
    else {
LAB_00681be7:
      if (((char)bVar3 < 'D') ||
         (('E' < (char)bVar3 && (((char)bVar3 < 'd' || ('e' < (char)bVar3)))))) {
LAB_00681d47:
        pbVar6 = pbVar7 + -1;
        goto LAB_00681d48;
      }
      iVar1 = 6;
      pbVar6 = pbVar7;
    }
    goto LAB_00681b4f;
  case 5:
    local_2c = 1;
    iVar1 = _isdigit((uint)bVar3);
    pbVar6 = param_3;
    if (iVar1 != 0) {
      iVar1 = 4;
      goto LAB_00681d8d;
    }
    goto LAB_00681d48;
  case 6:
    pbVar6 = pbVar6 + -1;
    param_3 = pbVar6;
    if (((char)bVar3 < '1') || ('9' < (char)bVar3)) {
      if (bVar3 == 0x2b) goto LAB_00681dc2;
      if (bVar3 == 0x2d) goto LAB_00681db6;
      if (bVar3 != 0x30) goto LAB_00681ddc;
      goto LAB_00681d25;
    }
LAB_00681d8b:
    iVar1 = 9;
LAB_00681d8d:
    pbVar6 = pbVar7 + -1;
    goto LAB_00681b4f;
  case 7:
    if (('0' < (char)bVar3) && ((char)bVar3 < ':')) goto LAB_00681d8b;
    pbVar6 = param_3;
    if (bVar3 != 0x30) goto LAB_00681d48;
LAB_00681d25:
    iVar1 = 8;
    pbVar6 = pbVar7;
    goto LAB_00681b4f;
  case 8:
    local_28 = 1;
    while (bVar3 == 0x30) {
      bVar3 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    }
    if (('0' < (char)bVar3) && ((char)bVar3 < ':')) goto LAB_00681d8b;
    goto LAB_00681d47;
  case 9:
    local_28 = 1;
    iVar1 = 0;
    local_c = pcVar5;
    goto LAB_00681e09;
  default:
    goto switchD_00681b5b_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      param_3 = pbVar6;
      if (bVar3 == 0x2b) {
LAB_00681dc2:
        iVar1 = 7;
        pbVar6 = pbVar7;
      }
      else {
        if (bVar3 != 0x2d) {
LAB_00681ddc:
          local_c = pcVar5;
          goto LAB_00681d4b;
        }
LAB_00681db6:
        local_20 = -1;
        iVar1 = 7;
        pbVar6 = pbVar7;
      }
      goto LAB_00681b4f;
    }
    iVar1 = 10;
    pbVar7 = pbVar6;
switchD_00681b5b_caseD_a:
    pbVar6 = pbVar7;
    if (iVar1 != 10) goto LAB_00681b4f;
LAB_00681d48:
    local_c = pcVar5;
    goto LAB_00681d4b;
  }
  iVar1 = 1;
  pbVar6 = pbVar7;
  goto LAB_00681b4f;
LAB_00681e09:
  iVar2 = _isdigit((uint)bVar3);
  if (iVar2 == 0) goto LAB_00681e2c;
  iVar1 = (char)bVar3 + -0x30 + iVar1 * 10;
  if (0x1450 < iVar1) {
    iVar1 = 0x1451;
    goto LAB_00681e2c;
  }
  bVar3 = *pbVar7;
  pbVar7 = pbVar7 + 1;
  goto LAB_00681e09;
LAB_00681e2c:
  while( true ) {
    local_24 = iVar1;
    iVar1 = _isdigit((uint)bVar3);
    if (iVar1 == 0) break;
    bVar3 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    iVar1 = local_24;
  }
  pbVar6 = pbVar7 + -1;
LAB_00681d4b:
  *param_2 = (int)pbVar6;
  if (local_18 == 0) {
    local_1c = 4;
  }
  else {
    pcVar5 = local_c;
    if (0x18 < local_10) {
      if ('\x04' < local_45) {
        local_45 = local_45 + '\x01';
      }
      pcVar5 = local_c + -1;
      local_14 = local_14 + 1;
      local_10 = 0x18;
    }
    if (local_10 != 0) {
      while (pcVar5 = pcVar5 + -1, *pcVar5 == '\0') {
        local_10 = local_10 - 1;
        local_14 = local_14 + 1;
      }
      FUN_00682382(local_5c,local_10,&local_40);
      iVar1 = local_24;
      if (local_20 < 0) {
        iVar1 = -local_24;
      }
      iVar1 = iVar1 + local_14;
      if (local_28 == 0) {
        iVar1 = iVar1 + param_5;
      }
      if (local_2c == 0) {
        iVar1 = iVar1 - param_6;
      }
      if (0x1450 < iVar1) {
        uVar4 = 0;
        local_36 = 0x7fff;
        local_3a = 0x80000000;
        local_40 = 0;
        local_1c = 2;
        goto LAB_00681ed9;
      }
      if (-0x1451 < iVar1) {
        FUN_00682932(&local_40,iVar1,param_4);
        uVar4 = CONCAT22(uStack_3c,uStack_3e);
        goto LAB_00681ed9;
      }
      local_1c = 1;
    }
  }
  local_40 = 0;
  local_36 = 0;
  local_3a = 0;
  uVar4 = 0;
LAB_00681ed9:
  *(undefined4 *)(param_1 + 1) = uVar4;
  *(undefined4 *)(param_1 + 3) = local_3a;
  param_1[5] = local_36 | (ushort)local_30;
  *param_1 = local_40;
  return local_1c;
}

