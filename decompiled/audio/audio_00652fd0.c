/* Decompiled from Speed.exe @ 00652fd0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00652fd0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  undefined1 uStack_2c;
  undefined1 uStack_28;
  undefined1 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1c;
  undefined1 uStack_18;
  undefined1 uStack_10;
  undefined1 uStack_c;
  
  FUN_0064e520();
  DAT_0071404c = FUN_00650fd0((uint)DAT_00713db7 << 8);
  FUN_0064e540();
  bVar5 = DAT_00713db7;
  uVar6 = (uint)DAT_00713db7;
  iVar3 = 0;
  iVar4 = DAT_0071404c;
  if (uVar6 != 0) {
    do {
      (&DAT_00714034)[iVar3] = iVar4;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x100;
    } while (iVar3 < (int)uVar6);
  }
  uVar6 = 0;
  do {
    fVar1 = (float)((uVar6 & 0xff) << 8) * _DAT_006cca00;
    if (bVar5 == 1) {
      *(undefined1 *)(DAT_00714034 + uVar6) = 0x7f;
      bVar5 = DAT_00713db7;
    }
    else {
      iVar4 = 0;
      if (bVar5 != 0) {
        do {
          *(undefined1 *)(uVar6 + (&DAT_00714034)[iVar4]) = 0;
          iVar4 = iVar4 + 1;
          bVar5 = DAT_00713db7;
        } while (iVar4 < (int)(uint)DAT_00713db7);
      }
      if (fVar1 < DAT_00713cc8 == (fVar1 == DAT_00713cc8)) {
        uVar7 = (uint)bVar5;
        if (fVar1 < (float)(&DAT_00713cc4)[uVar7]) {
          iVar4 = 0;
          if (uVar7 != 0) {
            do {
              if (((&DAT_00713cc8)[iVar4] <= fVar1) &&
                 (fVar1 < (&DAT_00713ccc)[iVar4] != (fVar1 == (&DAT_00713ccc)[iVar4]))) {
                fVar2 = ((fVar1 * _DAT_006aaa18 - (&DAT_00713ccc)[iVar4] * _DAT_006aaa18) /
                        ((&DAT_00713cc8)[iVar4] * _DAT_006aaa18 -
                        (&DAT_00713ccc)[iVar4] * _DAT_006aaa18)) * _DAT_006cca40;
                fVar8 = (float10)FUN_00659130(fVar2);
                fVar9 = (float10)FUN_006590b0(fVar2);
                fVar2 = (float)fVar9 * _DAT_006cc974;
                uStack_10 = (undefined1)(int)ROUND((float)fVar8 * _DAT_006cc974);
                *(undefined1 *)(uVar6 + (&DAT_00714034)[iVar4]) = uStack_10;
                uStack_c = (undefined1)(int)ROUND(fVar2);
                *(undefined1 *)(uVar6 + (&DAT_00714038)[iVar4]) = uStack_c;
                bVar5 = DAT_00713db7;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)(uint)bVar5);
          }
        }
        else {
          fVar2 = (_DAT_006cc934 - (float)(&DAT_00713cc4)[uVar7]) * _DAT_006cc8a8 * _DAT_006aaa18;
          fVar1 = (((_DAT_006cc934 - fVar1) * _DAT_006cc8a8 * _DAT_006aaa18 - fVar2) /
                  (DAT_00713cc8 * _DAT_006aaa18 - fVar2)) * _DAT_006cca40;
          fVar8 = (float10)FUN_00659130(fVar1);
          fVar9 = (float10)FUN_006590b0(fVar1);
          fVar1 = (float)fVar9 * _DAT_006cc974;
          uStack_1c = (undefined1)(int)ROUND((float)fVar8 * _DAT_006cc974);
          *(undefined1 *)(DAT_00714034 + uVar6) = uStack_1c;
          uStack_18 = (undefined1)(int)ROUND(fVar1);
          *(undefined1 *)(uVar6 + (&DAT_00714030)[DAT_00713db7]) = uStack_18;
          bVar5 = DAT_00713db7;
        }
      }
      else if (bVar5 < 5) {
        fVar2 = (_DAT_006cc934 - (float)(&DAT_00713cc4)[bVar5]) * _DAT_006cc8a8 * _DAT_006aaa18;
        fVar1 = ((fVar1 * _DAT_006aaa18 - fVar2) / (DAT_00713cc8 * _DAT_006aaa18 - fVar2)) *
                _DAT_006cca40;
        fVar8 = (float10)FUN_00659130(fVar1);
        fVar9 = (float10)FUN_006590b0(fVar1);
        uStack_24 = (undefined1)(int)ROUND((float)fVar8 * _DAT_006cc974);
        fVar1 = (float)fVar9 * _DAT_006cc974;
        *(undefined1 *)(DAT_00714034 + uVar6) = uStack_24;
        uStack_20 = (undefined1)(int)ROUND(fVar1);
        *(undefined1 *)(uVar6 + (&DAT_00714030)[DAT_00713db7]) = uStack_20;
        bVar5 = DAT_00713db7;
      }
      else {
        fVar1 = ((fVar1 * _DAT_006aaa18 - DAT_00713ccc * _DAT_006aaa18) /
                (DAT_00713cc8 * _DAT_006aaa18 - DAT_00713ccc * _DAT_006aaa18)) * _DAT_006cca40;
        fVar8 = (float10)FUN_00659130(fVar1);
        fVar9 = (float10)FUN_006590b0(fVar1);
        uStack_2c = (undefined1)(int)ROUND((float)fVar8 * _DAT_006cc974);
        fVar1 = (float)fVar9 * _DAT_006cc974;
        *(undefined1 *)(DAT_00714034 + uVar6) = uStack_2c;
        uStack_28 = (undefined1)(int)ROUND(fVar1);
        *(undefined1 *)(DAT_00714038 + uVar6) = uStack_28;
        bVar5 = DAT_00713db7;
      }
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x100);
  return;
}

