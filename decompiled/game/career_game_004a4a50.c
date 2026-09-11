/* Decompiled from Speed.exe @ 004a4a50 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


/* WARNING: Removing unreachable block (ram,0x004a5601) */
/* WARNING: Removing unreachable block (ram,0x004a556a) */
/* WARNING: Removing unreachable block (ram,0x004a55c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a4a50(float param_1,int param_2)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  char *pcVar15;
  uint uVar16;
  float10 fVar17;
  int local_34;
  float local_30;
  float local_2c;
  uint local_28;
  uint local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar11 = (int)param_1;
  local_34 = *(int *)(param_2 + 4);
  if (((DAT_006fbf14 == 0) && (*(int *)(param_2 + 0x10) == 0)) &&
     (iVar13 = FUN_0041ffe0(), iVar13 != 0)) {
    local_34 = iVar13;
  }
  *(undefined4 *)((int)param_1 + 0x80) = *(undefined4 *)(local_34 + 0x3d8);
  if ((*(int *)(local_34 + 0x28) == 1) &&
     (iVar13 = *(int *)(*(int *)(local_34 + 0x34) + 0x4c), *(int *)(iVar13 + 0x48) != 0)) {
    if (*(char *)((int)param_1 + 0x88) == '\0') {
      *(undefined4 *)((int)param_1 + 0x8c) = *(undefined4 *)(iVar13 + 0x6c);
      *(undefined1 *)((int)param_1 + 0x88) = 1;
    }
  }
  else {
    *(undefined1 *)((int)param_1 + 0x88) = 0;
  }
  if (DAT_007000e4 == _DAT_006cc9f8) {
    param_1 = *(float *)(local_34 + 0x3e0);
  }
  else {
    param_1 = DAT_007000e4;
  }
  if ((*(uint *)(iVar11 + 0x18) & *(uint *)(iVar11 + 0x10)) == 0 &&
      (*(uint *)(iVar11 + 0x1c) & *(uint *)(iVar11 + 0x14)) == 0) goto LAB_004a5799;
  local_2c = _DAT_006cc9f0;
  if (DAT_0078a3f5 == '\x01') {
    local_2c = _DAT_006ccadc;
  }
  local_2c = *(float *)(local_34 + 0x3d4) * local_2c;
  iVar13 = FUN_0059fb80();
  if (iVar13 == 0) {
    iVar13 = FUN_0059fb80();
  }
  FUN_004f68a0(iVar13);
  uVar14 = FUN_00674898();
  FUN_004f68a0(&DAT_006c740c,uVar14);
  iVar13 = *(int *)(local_34 + 0x20);
  if (DAT_0078a320 == 1) {
    fVar17 = (float10)FUN_004a57d0(iVar11,param_1);
    FUN_004f6a70((float)fVar17);
  }
  else {
    FUN_004f6d10(&local_30,&local_28);
    FUN_004f7350(&local_2c,&local_28);
    local_2c = local_2c + local_30;
    local_30 = ((_DAT_006ccd2c - local_2c) / *(float *)(iVar13 + 500)) * param_1;
    if (_DAT_006ccd28 < local_30) {
      local_30 = 280.0;
    }
    FUN_00496040(local_30);
    FUN_004f6d10(&local_24,&local_28);
    FUN_004f7000(local_2c,local_28);
    FUN_004f6d10(&local_24,&local_28);
    FUN_004f7000(local_30 + local_2c,local_28);
  }
  if (*(int *)(local_34 + 0x28) == 1) {
    local_30 = *(float *)(*(int *)(*(int *)(local_34 + 0x34) + 0x4c) + 0x68);
    if (((DAT_006cc7a4 <= local_30) || (*(char *)(iVar11 + 0x87) != '\0')) ||
       (param_1 <= *(float *)(*(int *)(local_34 + 0x20) + 500))) goto LAB_004a4d00;
    if (*(char *)(iVar11 + 0x8a) == '\0') {
      *(undefined4 *)(iVar11 + 0x90) = DAT_0073ad3c;
      *(undefined1 *)(iVar11 + 0x8a) = 1;
    }
    if (*(char *)(iVar11 + 0x89) == '\0') {
      FUN_004f6b70("Blink",1);
      *(undefined1 *)(iVar11 + 0x89) = 1;
    }
  }
  else {
    local_30 = 0.0;
LAB_004a4d00:
    if (*(char *)(iVar11 + 0x89) != '\0') {
      FUN_004f6b70(&DAT_006c7a3c,1);
      *(undefined1 *)(iVar11 + 0x89) = 0;
      *(undefined1 *)(iVar11 + 0x8a) = 0;
    }
  }
  if (*(int *)(iVar11 + 0x6c) != 0) {
    iVar13 = *(int *)(local_34 + 1000);
    uVar16 = 0;
    do {
      if (*(int *)(iVar11 + 0x80) == (int)(char)(&DAT_006fb7b0)[uVar16 * 2]) {
        cVar12 = *(char *)(uVar16 * 2 + 0x6fb7b1);
        goto LAB_004a4d54;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < 10);
    cVar12 = 'X';
LAB_004a4d54:
    FUN_004f68a0(&DAT_006c7408,(int)cVar12);
    if (iVar13 == 0) {
      uVar14 = 0xffff8000;
    }
    else {
      uVar14 = *(undefined4 *)(iVar11 + 0x94);
    }
    FUN_004f75b0(uVar14);
  }
  if ((local_30 <= DAT_006cc7a4) || (local_30 < _DAT_006cc7bc == (local_30 == _DAT_006cc7bc))) {
LAB_004a4e5d:
    if (*(char *)(iVar11 + 0x84) != '\0') {
LAB_004a4e67:
      iVar13 = *(int *)(iVar11 + 0x70);
      if ((iVar13 != 0) && (iVar5 = *(int *)(iVar13 + 0x54), iVar5 != 0)) {
        pcVar15 = "ZoomIn";
        do {
          cVar12 = pcVar15[*(int *)(iVar5 + 0x2c) + -0x6c7188];
          cVar2 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          if ((cVar12 == '\0') || (cVar2 == '\0')) break;
        } while (cVar12 == cVar2);
        if ((cVar12 == cVar2) && (*(int *)(iVar5 + 0x10) <= *(int *)(iVar5 + 0xc)))
        goto LAB_004a4ec5;
      }
      if ((*(int *)(param_2 + 0x60) != 6) && (*(int *)(param_2 + 0x60) != 7)) {
        *(undefined1 *)(iVar11 + 0x84) = 0;
      }
      FUN_004f6910(iVar13);
    }
  }
  else {
    if (*(char *)(iVar11 + 0x84) != '\0') goto LAB_004a4e67;
    if (*(int *)(local_34 + 0x3d8) == *(int *)(iVar11 + 0x7c)) goto LAB_004a4e5d;
    if (local_30 < _DAT_006cc7dc == (local_30 == _DAT_006cc7dc)) {
      FUN_004f66f0();
      if (((((DAT_00777b4c == 1) && (DAT_0073619c != (int *)0x0)) && (*DAT_0073619c == 4)) &&
          ((*(char *)(iVar11 + 0xa1) == '\0' && (1 < *(int *)(local_34 + 0x3d8))))) &&
         (*(char *)(iVar11 + 0xa2) == '\x01')) {
        *(undefined1 *)(iVar11 + 0xa2) = 0;
      }
    }
    else {
      FUN_004f66f0();
    }
    FUN_004f6b70("ZoomIn",1);
    FUN_004f6970(*(undefined4 *)(iVar11 + 0x70));
    *(undefined1 *)(iVar11 + 0x84) = 1;
  }
LAB_004a4ec5:
  if ((*(int *)(local_34 + 0x28) != 1) ||
     (*(float *)(*(int *)(*(int *)(local_34 + 0x34) + 0x4c) + 0x5c) <= DAT_006cc7a4)) {
    if (*(char *)(iVar11 + 0x85) == '\0') goto LAB_004a4ffd;
LAB_004a4f9b:
    iVar13 = *(int *)(iVar11 + 0x70);
    if ((iVar13 != 0) && (iVar5 = *(int *)(iVar13 + 0x54), iVar5 != 0)) {
      pcVar15 = "ZoomIn";
      do {
        cVar12 = pcVar15[*(int *)(iVar5 + 0x2c) + -0x6c7188];
        cVar2 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        if ((cVar12 == '\0') || (cVar2 == '\0')) break;
      } while (cVar12 == cVar2);
      if ((cVar12 == cVar2) && (*(int *)(iVar5 + 0x10) <= *(int *)(iVar5 + 0xc))) goto LAB_004a4ffd;
    }
    if ((*(int *)(param_2 + 0x60) != 6) && (*(int *)(param_2 + 0x60) != 7)) {
      *(undefined1 *)(iVar11 + 0x85) = 0;
    }
    FUN_004f6910(iVar13);
LAB_004a4ffd:
    if (((*DAT_0073619c != 4) || (*(int *)(iVar11 + 0x80) <= *(int *)(iVar11 + 0x7c))) ||
       ((*(int *)(iVar11 + 0x7c) == 0 ||
        ((*(char *)(iVar11 + 0x84) != '\0' || (*(char *)(iVar11 + 0x85) != '\0'))))))
    goto LAB_004a5128;
    if ((local_30 == DAT_006cc7a4) && (*(char *)(iVar11 + 0x86) == '\0')) {
      FUN_004f66f0();
      FUN_004f6b70("ZoomIn",1);
      FUN_004f6970(*(undefined4 *)(iVar11 + 0x70));
      *(undefined1 *)(iVar11 + 0x86) = 1;
    }
    else if ((local_30 < DAT_006cc7a4) && (*(char *)(iVar11 + 0x87) == '\0')) {
      FUN_004f66f0();
      FUN_004f6b70("ZoomIn",1);
      FUN_004f6970(*(undefined4 *)(iVar11 + 0x70));
      *(undefined1 *)(iVar11 + 0x87) = 1;
    }
    if ((((DAT_00777b4c == 1) && (DAT_0073619c != (int *)0x0)) && (*DAT_0073619c == 4)) &&
       (((*(char *)(iVar11 + 0xa1) == '\0' && (1 < *(int *)(local_34 + 0x3d8))) &&
        (*(char *)(iVar11 + 0xa2) == '\x01')))) {
      *(undefined1 *)(iVar11 + 0xa2) = 0;
    }
  }
  else {
    if (*(char *)(iVar11 + 0x85) != '\0') goto LAB_004a4f9b;
    FUN_004f66f0();
    FUN_004f6b70("ZoomIn",1);
    FUN_004f6970(*(undefined4 *)(iVar11 + 0x70));
    *(undefined1 *)(iVar11 + 0x85) = 1;
    if ((DAT_00777b4c != 1) || (DAT_0073619c == (int *)0x0)) goto LAB_004a4ffd;
    if (*DAT_0073619c == 4) {
      if (((*(char *)(iVar11 + 0xa1) == '\0') && (1 < *(int *)(local_34 + 0x3d8))) &&
         (*(char *)(iVar11 + 0xa2) == '\x01')) {
        *(undefined1 *)(iVar11 + 0xa2) = 0;
      }
      goto LAB_004a4ffd;
    }
LAB_004a5128:
    if (*(char *)(iVar11 + 0x86) != '\0') {
      iVar13 = *(int *)(iVar11 + 0x70);
      if ((iVar13 != 0) && (iVar5 = *(int *)(iVar13 + 0x54), iVar5 != 0)) {
        pcVar15 = "ZoomIn";
        do {
          cVar12 = pcVar15[*(int *)(iVar5 + 0x2c) + -0x6c7188];
          cVar2 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          if ((cVar12 == '\0') || (cVar2 == '\0')) break;
        } while (cVar12 == cVar2);
        if ((cVar12 == cVar2) && (*(int *)(iVar5 + 0x10) <= *(int *)(iVar5 + 0xc)))
        goto LAB_004a5195;
      }
      if ((*(int *)(param_2 + 0x60) != 6) && (*(int *)(param_2 + 0x60) != 7)) {
        *(undefined1 *)(iVar11 + 0x86) = 0;
      }
      FUN_004f6910(iVar13);
    }
LAB_004a5195:
    if (*(char *)(iVar11 + 0x87) != '\0') {
      iVar13 = *(int *)(iVar11 + 0x70);
      if ((iVar13 != 0) && (iVar5 = *(int *)(iVar13 + 0x54), iVar5 != 0)) {
        pcVar15 = "ZoomIn";
        do {
          cVar12 = pcVar15[*(int *)(iVar5 + 0x2c) + -0x6c7188];
          cVar2 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          if ((cVar12 == '\0') || (cVar2 == '\0')) break;
        } while (cVar12 == cVar2);
        if ((cVar12 == cVar2) && (*(int *)(iVar5 + 0x10) <= *(int *)(iVar5 + 0xc)))
        goto LAB_004a51fc;
      }
      if ((*(int *)(param_2 + 0x60) != 6) && (*(int *)(param_2 + 0x60) != 7)) {
        *(undefined1 *)(iVar11 + 0x87) = 0;
      }
      FUN_004f6910(iVar13);
    }
  }
LAB_004a51fc:
  iVar13 = *(int *)(local_34 + 0x10);
  if (*(char *)(iVar13 + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  iVar5 = *(int *)(iVar11 + 0x7c);
  iVar6 = *(int *)(local_34 + 0x28);
  fVar1 = *(float *)(&DAT_006fff60 + (iVar5 + *(char *)(iVar13 + 0x424) * 9) * 4);
  if (iVar6 == 1) {
    iVar13 = *(int *)(*(int *)(local_34 + 0x34) + 0x4c);
    iVar7 = *(int *)(iVar13 + 0xe0);
    fVar1 = *(float *)(&DAT_006fff60 + (iVar7 + iVar5 + iVar7 * 8) * 4) * *(float *)(iVar13 + 0xd8);
    local_2c = *(float *)(*(int *)(*(int *)(local_34 + 0x34) + 0x4c) + 0x80 + iVar5 * 4);
  }
  else {
    local_2c = DAT_006cc7a4;
    if (iVar6 == 3) {
      local_2c = *(float *)(*(int *)(*(int *)(local_34 + 0x34) + 0x24) + 0x198 + iVar5 * 4);
    }
  }
  local_2c = local_2c - _DAT_006fff58 * _DAT_006cc7dc * fVar1;
  local_30 = local_2c - _DAT_006cc8b4;
  if (iVar6 == 1) {
    fVar8 = *(float *)(*(int *)(*(int *)(local_34 + 0x34) + 0x4c) + 0x80 + iVar5 * 4);
  }
  else {
    fVar8 = DAT_006cc7a4;
    if (iVar6 == 3) {
      fVar8 = *(float *)(*(int *)(*(int *)(local_34 + 0x34) + 0x24) + 0x198 + iVar5 * 4);
    }
  }
  local_10 = 0x437f0000;
  local_c = 0;
  local_8 = 0x43000000;
  local_4 = 0x43400000;
  if (local_30 <= param_1) {
    if (param_1 <= (_DAT_006cc7bc - _DAT_006fff58) * fVar1 + fVar8) {
      if (param_1 <= local_2c) {
        if (*(int *)(local_34 + 0x3d8) != 0) {
          if (DAT_0078a320 == 1) {
            local_24 = *(uint *)(iVar11 + 0x98);
            bVar3 = *(byte *)(iVar11 + 0x9a);
            bVar4 = *(byte *)(iVar11 + 0x99);
          }
          else {
            local_24 = *(uint *)(iVar11 + 0x9c);
            bVar3 = *(byte *)(iVar11 + 0x9e);
            bVar4 = *(byte *)(iVar11 + 0x9d);
          }
          local_20 = (float)(local_24 >> 0x18);
          local_24 = local_24 & 0xff;
          local_28 = (uint)bVar4;
          local_18 = (float)local_28;
          local_1c = (float)bVar3;
          local_14 = (float)local_24;
          cVar12 = FUN_004f6ce0("PulseBlue");
          if (cVar12 == '\0') {
            FUN_004f6b70("PulseBlue",1);
          }
          FUN_004a4900(iVar11,(param_1 - local_30) * _DAT_006ccd24);
          if (DAT_0078a320 == 1) {
            uVar14 = FUN_004a0080();
          }
          else {
            uVar14 = FUN_004a0080();
            FUN_004f75b0(uVar14);
            uVar14 = FUN_004a0080();
            FUN_004f75b0(uVar14);
            uVar14 = FUN_004a0080();
          }
          goto LAB_004a569c;
        }
      }
      else if (*(int *)(local_34 + 0x3d8) != 0) {
        if (DAT_0078a320 == 1) {
          FUN_004f75b0(0xff00ff00);
        }
        else {
          FUN_004f75b0(0xff00ff00);
          FUN_004f75b0(0xff00ff00);
          FUN_004f75b0(0xff00ff00);
        }
        cVar12 = FUN_004f6ce0("PulseGreen");
        if (cVar12 == '\0') {
          FUN_004f6b70("PulseGreen",1);
        }
        if ((((DAT_00777b4c == 1) && (DAT_0073619c != (int *)0x0)) && (*DAT_0073619c == 4)) &&
           ((0 < *(int *)(local_34 + 0x3d8) && (*(char *)(iVar11 + 0xa1) == '\x01')))) {
          *(undefined1 *)(iVar11 + 0xa1) = 0;
        }
      }
    }
    else if (*(int *)(local_34 + 0x3d8) == 0) {
      if (*(float *)(*(int *)(local_34 + 0x20) + 500) < param_1) {
        cVar12 = FUN_004f6ce0("PulseRed");
        if (cVar12 == '\0') {
          FUN_004f6b70("PulseRed",1);
        }
        if (DAT_0078a320 == 1) {
          uVar14 = 0xff800000;
          goto LAB_004a569c;
        }
        FUN_004f75b0(0xff802020);
        FUN_004f75b0(0xff802020);
        FUN_004f75b0(0xff802020);
      }
    }
    else {
      if (DAT_0078a320 == 1) {
        FUN_004f75b0(0xff800000);
      }
      else {
        FUN_004f75b0(0xff802020);
        FUN_004f75b0(0xff802020);
        FUN_004f75b0(0xff802020);
      }
      cVar12 = FUN_004f6ce0("PulseRed");
      if (cVar12 == '\0') {
        FUN_004f6b70("PulseRed",1);
      }
    }
  }
  else if (DAT_0078a320 == 1) {
    uVar14 = *(undefined4 *)(iVar11 + 0x98);
LAB_004a569c:
    FUN_004f75b0(uVar14);
  }
  else {
    FUN_004f75b0(*(undefined4 *)(iVar11 + 0x9c));
    FUN_004f75b0(*(undefined4 *)(iVar11 + 0x9c));
    FUN_004f75b0(*(undefined4 *)(iVar11 + 0x9c));
  }
  if ((*(char *)(param_2 + 0x23) == '\x01') || (*(char *)(param_2 + 0x23) == '\x03')) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  iVar13 = *(int *)(local_34 + 0x10);
  if (*(char *)(iVar13 + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  iVar5 = *(int *)(local_34 + 0x3d8);
  fVar1 = *(float *)(&DAT_006fff60 + (iVar5 + *(char *)(iVar13 + 0x424) * 9) * 4);
  if (*(int *)(local_34 + 0x28) == 1) {
    iVar13 = *(int *)(*(int *)(local_34 + 0x34) + 0x4c);
    iVar6 = *(int *)(iVar13 + 0xe0);
    fVar1 = *(float *)(&DAT_006fff60 + (iVar6 + iVar5 + iVar6 * 8) * 4) * *(float *)(iVar13 + 0xd8);
    fVar8 = *(float *)(*(int *)(*(int *)(local_34 + 0x34) + 0x4c) + 0x80 + iVar5 * 4);
  }
  else {
    fVar8 = DAT_006cc7a4;
    if (*(int *)(local_34 + 0x28) == 3) {
      fVar8 = *(float *)(*(int *)(*(int *)(local_34 + 0x34) + 0x24) + 0x198 + iVar5 * 4);
    }
  }
  fVar9 = DAT_007000e4;
  if (DAT_007000e4 == _DAT_006cc9f8) {
    fVar9 = *(float *)(local_34 + 0x3e0);
  }
  if ((fVar9 <= fVar8 - _DAT_006fff58 * fVar1) || (!bVar10)) {
    FUN_004f6910(*(undefined4 *)(iVar11 + 0x30));
  }
  else {
    FUN_004f6970(*(undefined4 *)(iVar11 + 0x30));
  }
LAB_004a5799:
  *(undefined4 *)(iVar11 + 0x7c) = *(undefined4 *)(iVar11 + 0x80);
  if (*(char *)(iVar11 + 0xa0) != '\0') {
    FUN_004f6910(*(undefined4 *)(iVar11 + 0x2c));
    FUN_004f6910(*(undefined4 *)(iVar11 + 0x28));
  }
  return;
}

