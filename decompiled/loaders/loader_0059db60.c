/* spd-match: far pct=4.95 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0059DB60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_0059cb90();
extern int DAT_006cc7a4;
int __fastcall FUN_0059db60(int obj)

{
  float fVar1;
  float fVar2;

  uint3 uVar4;
  uint3 extraout_var;
  uint uVar3;
  float *pfVar5;
  uint uVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  
  uVar4 = (uint3)((uint)obj >> 8);
  uVar7 = 0;
  if (*(char *)(obj + 0x18) != '\0') {
    FUN_0059cb90();
    *(undefined1 *)(obj + 0x18) = 0;
    uVar4 = extraout_var;
  }
  uVar6 = *(ushort *)(obj + 0x1e) + 3;
  if (2 < uVar6) {
    uVar3 = *(ushort *)(obj + 0x1e) + 1;
    iVar8 = 2;
    if (3 < uVar3) {
      iVar9 = 5;
      pfVar5 = (float *)(*(int *)(obj + 0x20) + 0x14);
      do {
        if ((pfVar5[4] - *pfVar5) * (*pfVar5 - pfVar5[-4]) +
            (pfVar5[3] - pfVar5[-1]) * (pfVar5[-1] - pfVar5[-5]) +
            (pfVar5[1] - pfVar5[-3]) * (pfVar5[5] - pfVar5[1]) < DAT_006cc7a4) {
          uVar7 = 1;
        }
        fVar1 = pfVar5[9] - pfVar5[5];
        if ((pfVar5[8] - pfVar5[4]) * (pfVar5[4] - *pfVar5) +
            (pfVar5[7] - pfVar5[3]) * (pfVar5[3] - pfVar5[-1]) + (pfVar5[5] - pfVar5[1]) * fVar1 <
            DAT_006cc7a4) {
          uVar7 = 1;
        }
        if ((pfVar5[0xc] - pfVar5[8]) * (pfVar5[8] - pfVar5[4]) +
            (pfVar5[0xb] - pfVar5[7]) * (pfVar5[7] - pfVar5[3]) + fVar1 * (pfVar5[0xd] - pfVar5[9])
            < DAT_006cc7a4) {
          uVar7 = 1;
        }
        fVar2 = (pfVar5[0x10] - pfVar5[0xc]) * (pfVar5[0xc] - pfVar5[8]) +
                (pfVar5[0xf] - pfVar5[0xb]) * (pfVar5[0xb] - pfVar5[7]) +
                (pfVar5[0x11] - pfVar5[0xd]) * (pfVar5[0xd] - pfVar5[9]);
        uVar3 = CONCAT22((short)((uint)fVar1 >> 0x10),
                         (ushort)(fVar2 < DAT_006cc7a4) << 8 |
                         (ushort)(NAN(fVar2) || NAN(DAT_006cc7a4)) << 10 |
                         (ushort)(fVar2 == DAT_006cc7a4) << 0xe);
        if (fVar2 < DAT_006cc7a4) {
          uVar7 = 1;
        }
        iVar9 = iVar9 + 4;
        iVar8 = iVar8 + 4;
        pfVar5 = pfVar5 + 0x10;
      } while (iVar9 < (int)uVar6);
    }
    if (iVar8 < (int)uVar6) {
      uVar3 = iVar8 * 0x10;
      pfVar5 = (float *)((uVar3 - 0xc) + *(int *)(obj + 0x20));
      iVar8 = uVar6 - iVar8;
      do {
        fVar1 = (pfVar5[4] - *pfVar5) * (*pfVar5 - pfVar5[-4]) +
                (pfVar5[3] - pfVar5[-1]) * (pfVar5[-1] - pfVar5[-5]) +
                (pfVar5[5] - pfVar5[1]) * (pfVar5[1] - pfVar5[-3]);
        uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                         (ushort)(fVar1 < DAT_006cc7a4) << 8 |
                         (ushort)(NAN(fVar1) || NAN(DAT_006cc7a4)) << 10 |
                         (ushort)(fVar1 == DAT_006cc7a4) << 0xe);
        if (fVar1 < DAT_006cc7a4) {
          uVar7 = 1;
        }
        pfVar5 = pfVar5 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    return CONCAT31((int3)(uVar3 >> 8),uVar7);
  }
  return (uint)uVar4 << 8;
}
