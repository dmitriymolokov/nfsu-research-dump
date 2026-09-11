/* Decompiled from Speed.exe @ 004a0f50 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a0f50(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  int unaff_EBX;
  int iVar10;
  float10 fVar11;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  iVar10 = *(int *)(param_1 + 4);
  if (((DAT_006fbf14 == 0) && (*(int *)(param_1 + 0x10) == 0)) &&
     (iVar5 = FUN_0041ffe0(), iVar5 != 0)) {
    iVar10 = iVar5;
  }
  iVar5 = *(int *)(iVar10 + 0xc);
  iVar2 = *(int *)(iVar10 + 0x20);
  if (DAT_007000e4 == _DAT_006cc9f8) {
    local_14 = *(float *)(iVar10 + 0x3e0);
  }
  else {
    local_14 = DAT_007000e4;
  }
  if ((*(uint *)(unaff_EBX + 0x18) & *(uint *)(unaff_EBX + 0x10)) != 0 ||
      (*(uint *)(unaff_EBX + 0x1c) & *(uint *)(unaff_EBX + 0x14)) != 0) {
    local_c = _DAT_006cc9f0;
    if (DAT_0078a3f5 == '\x01') {
      local_c = _DAT_006ccadc;
    }
    local_c = ABS(*(float *)(iVar10 + 0x3d4)) * local_c;
    iVar6 = FUN_0059fb80();
    if (iVar6 == 0) {
      iVar6 = FUN_0059fb80();
    }
    FUN_004f68a0(iVar6);
    uVar7 = FUN_00674898();
    FUN_004f68a0(&DAT_006c740c,uVar7);
    if (DAT_0078a320 == 1) {
      fVar11 = (float10)FUN_004a0ea0(local_14,iVar5 + 0xc00);
      FUN_004f6a70((float)fVar11);
    }
    else {
      FUN_004f6d10(&local_10,&local_8);
      FUN_004f7350(&local_c,&local_8);
      local_c = local_c + local_10;
      local_10 = ((_DAT_006ccd2c - local_c) / *(float *)(iVar2 + 500)) * local_14;
      if (_DAT_006ccd28 < local_10) {
        local_10 = 280.0;
      }
      FUN_00496040(local_10);
      FUN_004f6d10(local_4,&local_8);
      FUN_004f7000(local_c,local_8);
      FUN_004f6d10(local_4,&local_8);
      FUN_004f7000(local_10 + local_c,local_8);
    }
    if (*(int *)(unaff_EBX + 0x7c) != 0) {
      iVar5 = *(int *)(iVar10 + 1000);
      uVar9 = 0;
      do {
        if (*(int *)(iVar10 + 0x3d8) == (int)(char)(&DAT_006fb7b0)[uVar9 * 2]) {
          cVar8 = *(char *)(uVar9 * 2 + 0x6fb7b1);
          goto LAB_004a1146;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < 10);
      cVar8 = 'X';
LAB_004a1146:
      FUN_004f68a0(&DAT_006c7408,(int)cVar8);
      if (iVar5 == 0) {
        uVar7 = 0xffff8040;
      }
      else {
        uVar7 = 0xff0080c0;
      }
      FUN_004f75b0(uVar7);
    }
    if ((*(char *)(param_1 + 0x23) == '\x01') ||
       (bVar4 = false, *(char *)(param_1 + 0x23) == '\x03')) {
      bVar4 = true;
    }
    iVar5 = *(int *)(iVar10 + 0x10);
    if (*(char *)(iVar5 + 0x424) == -1) {
      FUN_0057f2b0(1);
    }
    iVar2 = *(int *)(iVar10 + 0x3d8);
    fVar1 = *(float *)(&DAT_006fff60 + (iVar2 + *(char *)(iVar5 + 0x424) * 9) * 4);
    if (*(int *)(iVar10 + 0x28) == 1) {
      iVar5 = *(int *)(*(int *)(iVar10 + 0x34) + 0x4c);
      iVar6 = *(int *)(iVar5 + 0xe0);
      fVar1 = *(float *)(&DAT_006fff60 + (iVar6 + iVar2 + iVar6 * 8) * 4) * *(float *)(iVar5 + 0xd8)
      ;
      fVar3 = *(float *)(*(int *)(*(int *)(iVar10 + 0x34) + 0x4c) + 0x80 + iVar2 * 4);
    }
    else {
      fVar3 = DAT_006cc7a4;
      if (*(int *)(iVar10 + 0x28) == 3) {
        fVar3 = *(float *)(*(int *)(*(int *)(iVar10 + 0x34) + 0x24) + 0x198 + iVar2 * 4);
      }
    }
    if ((local_14 <= fVar3 - _DAT_006fff58 * fVar1) || (!bVar4)) {
      FUN_004f6910(*(undefined4 *)(unaff_EBX + 0x90));
    }
    else {
      FUN_004f6970(*(undefined4 *)(unaff_EBX + 0x90));
    }
  }
  if (*(char *)(unaff_EBX + 0x98) != '\0') {
    FUN_004f6910(*(undefined4 *)(unaff_EBX + 0x68));
    FUN_004f6910(*(undefined4 *)(unaff_EBX + 0x94));
  }
  return;
}

