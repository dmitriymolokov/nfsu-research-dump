/* Decompiled from Speed.exe @ 0064fdc0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0064fdc0(int param_1)

{
  float *pfVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar5 = FUN_00655120(*(undefined4 *)(param_1 + 8),param_1 + 0x38,param_1 + 0x40,param_1 + 0x110);
  *(undefined4 *)(param_1 + 4) = uVar5;
  iVar6 = FUN_00652720(*(undefined4 *)(param_1 + 4));
  uVar9 = 0;
  if (*(char *)(param_1 + 0x3a) != '\0') {
    iVar8 = iVar6 * 0x8c + 4;
    do {
      sVar3 = *(short *)(iVar8 + DAT_00713f48);
      iVar7 = sVar3 * 0x8c + DAT_00713f48;
      fVar2 = *(float *)(param_1 + 0x164 +
                        *(char *)(uVar9 + 0x6aa9be + (uint)*(byte *)(param_1 + 0x3a) * 6) * 0x24);
      *(float *)(iVar7 + 0x38) = fVar2;
      *(float *)(iVar7 + 0x48) = fVar2 * _DAT_006e9bc8;
      FUN_006512f0((int)sVar3);
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 2;
    } while (uVar9 < *(byte *)(param_1 + 0x3a));
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar9 = (uint)*(byte *)(param_1 + 0x3a);
    iVar8 = DAT_00713ce0 * 6;
    uVar10 = 0;
    if (uVar9 != 0) {
      iVar6 = iVar6 * 0x8c + 4;
      do {
        sVar3 = *(short *)(DAT_00713f48 + iVar6);
        iVar7 = sVar3 * 0x8c + DAT_00713f48;
        pfVar1 = (float *)(param_1 + 0x15c +
                          *(char *)(uVar10 + 0x6aa9be + (uint)*(byte *)(param_1 + 0x3a) * 6) * 0x24)
        ;
        if (*pfVar1 == DAT_006aa9c0) {
          *(ushort *)(iVar7 + 0x1c) =
               (ushort)(byte)(&DAT_006aaa32)[uVar10 + (uVar9 + iVar8) * 6] << 8;
        }
        else {
          sVar4 = (short)(int)ROUND(*pfVar1 * _DAT_006ccd0c);
          *(short *)(iVar7 + 0x1c) = sVar4;
          if (*(char *)(pfVar1 + 1) == '\0') {
            *(ushort *)(iVar7 + 0x1c) =
                 (ushort)(byte)(&DAT_006aaac2)[uVar10 + uVar9 * 6] * 0x100 + sVar4;
          }
        }
        FUN_006513b0((int)sVar3);
        uVar10 = uVar10 + 1;
        iVar6 = iVar6 + 2;
      } while (uVar10 < *(byte *)(param_1 + 0x3a));
    }
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    FUN_006559d0(*(undefined4 *)(param_1 + 4),param_1 + 0x128);
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    FUN_00655960(*(undefined4 *)(param_1 + 4),param_1 + 0x14);
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}

