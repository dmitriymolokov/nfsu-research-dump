/* Decompiled from Speed.exe @ 00479350 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00479350(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  short sVar5;
  uint uVar6;
  int unaff_EDI;
  float10 fVar7;
  float local_2c;
  float local_24 [2];
  float local_1c;
  float local_18;
  
  iVar1 = *(int *)(unaff_EDI + 0x58);
  sVar5 = FUN_00564db0(*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x34));
  local_24[0] = (float)(uint)(ushort)(*(short *)(iVar1 + 0x374) - sVar5);
  local_2c = (float)(int)local_24[0] * _DAT_006cc980;
  if (_DAT_006cc97c < local_2c) {
    local_2c = local_2c - _DAT_006cc978;
  }
  fVar2 = *(float *)(*(int *)(unaff_EDI + 0x58) + 0x98);
  uVar6 = (uint)(_DAT_006cc960 <= *(float *)(*(int *)(unaff_EDI + 0x54) + 0x1c0));
  if (_DAT_006cc95c < *(float *)(*(int *)(unaff_EDI + 0x54) + 0x1c0)) {
    uVar6 = 2;
  }
  if (DAT_006cc7a4 < local_2c * fVar2) {
    FUN_00454f30(local_24,ABS(local_2c));
    iVar1 = *(int *)(unaff_EDI + 0x5c);
    fVar4 = *(float *)(&DAT_006f0fc0 + (uVar6 * 0x1b + DAT_0078a3fc) * 4) * local_24[0] * fVar2;
    local_1c = *(float *)(iVar1 + 0xb4) * fVar4;
    iVar3 = *(int *)(unaff_EDI + 0x20);
    local_18 = *(float *)(iVar1 + 0xb8) * fVar4;
    *(float *)(iVar3 + 0x120) = fVar4 * *(float *)(iVar1 + 0xb0) + *(float *)(iVar3 + 0x120);
    *(float *)(iVar3 + 0x124) = local_1c + *(float *)(iVar3 + 0x124);
    *(float *)(iVar3 + 0x128) = local_18 + *(float *)(iVar3 + 0x128);
  }
  uVar6 = (uint)(_DAT_006cc960 <= *(float *)(*(int *)(unaff_EDI + 0x54) + 0x1c0));
  if (_DAT_006cc95c < *(float *)(*(int *)(unaff_EDI + 0x54) + 0x1c0)) {
    uVar6 = 2;
  }
  local_24[0] = *(float *)(&DAT_006f0fcc + uVar6 * 0x6c);
  fVar7 = (float10)FUN_00583ea0(ABS(fVar2) * local_24[0] +
                                (_DAT_006cc7bc - local_24[0]) * ABS(local_2c));
  *(float *)(*(int *)(unaff_EDI + 0x40) + 0x180) = (float)fVar7;
  *(float *)(*(int *)(unaff_EDI + 0x44) + 0x180) = (float)fVar7;
  return;
}

