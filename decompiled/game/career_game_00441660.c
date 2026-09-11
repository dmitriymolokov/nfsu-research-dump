/* spd-match: far pct=2.68 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00441660 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc83c;
int __fastcall FUN_00441660(float * obj, int param_1, float *param_2, int param_3, int param_4, int param_5)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;

  undefined1 *puVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  int local_10;
  int local_c;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_3 + 0x18);
    fVar3 = *param_2;
    fVar4 = param_2[1];
    fVar5 = *obj;
    fVar6 = obj[1];
    local_10 = *(int *)(param_1 + 8);
    iVar7 = *(int *)(param_3 + 0x10);
    iVar12 = *(int *)(param_1 + 0xc) + local_10;
    iVar13 = 0;
    if (3 < iVar12 - local_10) {
      local_c = local_10 + 3;
      puVar11 = (ushort *)(iVar2 + 4 + local_10 * 2);
      do {
        puVar9 = (undefined1 *)((uint)puVar11[-2] * 0x20 + iVar7);
        if ((((*(char *)((uint)puVar11[-2] * 0x20 + iVar7) == '\0') &&
             (bVar1 = puVar9[1],
             fVar8 = (float)((int)*(short *)(puVar9 + (bVar1 & 3) * 2 + 8) << 0xd) * _DAT_006cc83c,
             fVar8 < fVar5 != (fVar8 == fVar5))) &&
            (fVar8 = (float)((int)*(short *)(puVar9 + (bVar1 >> 2 & 3) * 2 + 0x10) << 0xd) *
                     _DAT_006cc83c, fVar8 < fVar6 != (fVar8 == fVar6))) &&
           (((fVar3 <= (float)((int)*(short *)(puVar9 + (bVar1 >> 4 & 3) * 2 + 8) << 0xd) *
                       _DAT_006cc83c &&
             (fVar4 <= (float)((int)*(short *)(puVar9 + (uint)(bVar1 >> 6) * 2 + 0x10) << 0xd) *
                       _DAT_006cc83c)) && (iVar13 < param_5)))) {
          *(undefined1 **)(param_4 + iVar13 * 4) = puVar9;
          iVar13 = iVar13 + 1;
          *puVar9 = 1;
        }
        puVar9 = (undefined1 *)((uint)puVar11[-1] * 0x20 + iVar7);
        if (((*(char *)((uint)puVar11[-1] * 0x20 + iVar7) == '\0') &&
            (bVar1 = puVar9[1],
            fVar8 = (float)((int)*(short *)(puVar9 + (bVar1 & 3) * 2 + 8) << 0xd) * _DAT_006cc83c,
            fVar8 < fVar5 != (fVar8 == fVar5))) &&
           ((fVar8 = (float)((int)*(short *)(puVar9 + (bVar1 >> 2 & 3) * 2 + 0x10) << 0xd) *
                     _DAT_006cc83c, fVar8 < fVar6 != (fVar8 == fVar6) &&
            (((fVar3 <= (float)((int)*(short *)(puVar9 + (bVar1 >> 4 & 3) * 2 + 8) << 0xd) *
                        _DAT_006cc83c &&
              (fVar4 <= (float)((int)*(short *)(puVar9 + (uint)(bVar1 >> 6) * 2 + 0x10) << 0xd) *
                        _DAT_006cc83c)) && (iVar13 < param_5)))))) {
          *(undefined1 **)(param_4 + iVar13 * 4) = puVar9;
          iVar13 = iVar13 + 1;
          *puVar9 = 1;
        }
        puVar9 = (undefined1 *)((uint)*puVar11 * 0x20 + iVar7);
        if ((((*(char *)((uint)*puVar11 * 0x20 + iVar7) == '\0') &&
             (bVar1 = puVar9[1],
             fVar8 = (float)((int)*(short *)(puVar9 + (bVar1 & 3) * 2 + 8) << 0xd) * _DAT_006cc83c,
             fVar8 < fVar5 != (fVar8 == fVar5))) &&
            ((fVar8 = (float)((int)*(short *)(puVar9 + (bVar1 >> 2 & 3) * 2 + 0x10) << 0xd) *
                      _DAT_006cc83c, fVar8 < fVar6 != (fVar8 == fVar6) &&
             ((fVar3 <= (float)((int)*(short *)(puVar9 + (bVar1 >> 4 & 3) * 2 + 8) << 0xd) *
                        _DAT_006cc83c &&
              (fVar4 <= (float)((int)*(short *)(puVar9 + (uint)(bVar1 >> 6) * 2 + 0x10) << 0xd) *
                        _DAT_006cc83c)))))) && (iVar13 < param_5)) {
          *(undefined1 **)(param_4 + iVar13 * 4) = puVar9;
          iVar13 = iVar13 + 1;
          *puVar9 = 1;
        }
        puVar9 = (undefined1 *)((uint)puVar11[1] * 0x20 + iVar7);
        if (((((*(char *)((uint)puVar11[1] * 0x20 + iVar7) == '\0') &&
              (bVar1 = puVar9[1],
              fVar8 = (float)((int)*(short *)(puVar9 + (bVar1 & 3) * 2 + 8) << 0xd) * _DAT_006cc83c,
              fVar8 < fVar5 != (fVar8 == fVar5))) &&
             (fVar8 = (float)((int)*(short *)(puVar9 + (bVar1 >> 2 & 3) * 2 + 0x10) << 0xd) *
                      _DAT_006cc83c, fVar8 < fVar6 != (fVar8 == fVar6))) &&
            ((fVar3 <= (float)((int)*(short *)(puVar9 + (bVar1 >> 4 & 3) * 2 + 8) << 0xd) *
                       _DAT_006cc83c &&
             (fVar4 <= (float)((int)*(short *)(puVar9 + (uint)(bVar1 >> 6) * 2 + 0x10) << 0xd) *
                       _DAT_006cc83c)))) && (iVar13 < param_5)) {
          *(undefined1 **)(param_4 + iVar13 * 4) = puVar9;
          iVar13 = iVar13 + 1;
          *puVar9 = 1;
        }
        local_10 = local_10 + 4;
        local_c = local_c + 4;
        puVar11 = puVar11 + 4;
      } while (local_c < iVar12);
    }
    for (; local_10 < iVar12; local_10 = local_10 + 1) {
      iVar10 = (uint)*(ushort *)(iVar2 + local_10 * 2) * 0x20;
      puVar9 = (undefined1 *)(iVar10 + iVar7);
      if (((*(char *)(iVar10 + iVar7) == '\0') &&
          (bVar1 = puVar9[1],
          fVar8 = (float)((int)*(short *)(puVar9 + (bVar1 & 3) * 2 + 8) << 0xd) * _DAT_006cc83c,
          fVar8 < fVar5 != (fVar8 == fVar5))) &&
         ((fVar8 = (float)((int)*(short *)(puVar9 + (bVar1 >> 2 & 3) * 2 + 0x10) << 0xd) *
                   _DAT_006cc83c, fVar8 < fVar6 != (fVar8 == fVar6) &&
          (((fVar3 <= (float)((int)*(short *)(puVar9 + (bVar1 >> 4 & 3) * 2 + 8) << 0xd) *
                      _DAT_006cc83c &&
            (fVar4 <= (float)((int)*(short *)(puVar9 + (uint)(bVar1 >> 6) * 2 + 0x10) << 0xd) *
                      _DAT_006cc83c)) && (iVar13 < param_5)))))) {
        *(undefined1 **)(param_4 + iVar13 * 4) = puVar9;
        iVar13 = iVar13 + 1;
        *puVar9 = 1;
      }
    }
    return iVar13;
  }
  return 0;
}
