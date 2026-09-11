/* Decompiled from Speed.exe @ 00442980 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442980(void)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int unaff_EDI;
  int local_44;
  float local_40;
  float local_38 [14];
  
  uVar5 = 0;
  fVar2 = _DAT_006cc7dc * DAT_007372b0;
  local_38[2] = DAT_007372b0;
  local_38[0] = DAT_007372b0;
  local_38[3] = 0.0;
  local_38[1] = 0.0;
  bVar3 = false;
  local_38[4] = 0.0;
  local_38[5] = 0.0;
  local_38[6] = 0.0;
  local_38[7] = 0.0;
  local_38[8] = 0.0;
  local_38[9] = 0.0;
  local_38[10] = 1.0;
  local_38[0xb] = 0.0;
  local_38[0xc] = 0.0;
  local_38[0xd] = 0.0;
  FUN_00443a10(&DAT_007372b0,unaff_EDI + 0x27c);
  iVar4 = 1;
  local_40 = local_38[9];
  if (1 < *(short *)(unaff_EDI + 0x10)) {
    local_44 = unaff_EDI + 0x304;
    do {
      FUN_00443a10(&DAT_007372b0,local_44);
      fVar1 = local_38[9] - local_40;
      local_40 = local_38[9];
      if (fVar2 < ABS(fVar1)) {
        bVar3 = true;
        uVar5 = uVar5 ^ 1;
      }
      if (local_38[uVar5 * 2 + 1] < local_38[9]) {
        local_38[uVar5 * 2 + 1] = local_38[9];
      }
      if (local_38[9] < local_38[uVar5 * 2]) {
        local_38[uVar5 * 2] = local_38[9];
      }
      local_44 = local_44 + 0x88;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(short *)(unaff_EDI + 0x10));
    if (bVar3) {
      if (local_38[2] < local_38[0]) {
        local_38[2] = local_38[0];
      }
      *(float *)(unaff_EDI + 0x18) = local_38[2];
      if (local_38[3] <= local_38[1]) {
        *(float *)(unaff_EDI + 0x1c) = local_38[3];
        return;
      }
      *(float *)(unaff_EDI + 0x1c) = local_38[1];
      return;
    }
  }
  *(float *)(unaff_EDI + 0x18) = local_38[0];
  *(float *)(unaff_EDI + 0x1c) = local_38[1];
  return;
}

