/* spd-match: far pct=3.40 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_004594D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_004556d0(...);
extern int DAT_006cc7a4;
extern int _DAT_006b7518;
extern int _DAT_006b751c;
int unaff_EDI;
int unaff_ESI;
extern void LAB_004595ed(...);
extern void LAB_004595f5(...);
extern void LAB_0045969f(...);

struct ThisCallBox {
  uint FUN_004594d0(uint val, char param_2, undefined2 param_3, char param_4, char param_5);
};
uint ThisCallBox::FUN_004594d0(uint val, char param_2, undefined2 param_3, char param_4, char param_5)

{
  float fVar1;
  float fVar2;
  char cVar3;

  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  bool bVar7;
  char *unaff_ESI;
  float *unaff_EDI;
  
  cVar3 = *unaff_ESI;
  bVar7 = true;
  if ('\x13' < cVar3) {
    return val & 0xffffff00;
  }
  if (cVar3 < '\x01') {
    if (((int)this) != 0) {
      fVar1 = *unaff_EDI - *(float *)(((int)this) + 0x60);
      fVar2 = unaff_EDI[1] - *(float *)(((int)this) + 100);
      fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
      if (fVar1 < _DAT_006b7518) {
        return (uint)(ushort)((ushort)(fVar1 < _DAT_006b7518) << 8 |
                              (ushort)(NAN(fVar1) || NAN(_DAT_006b7518)) << 10 |
                             (ushort)(fVar1 == _DAT_006b7518) << 0xe);
      }
      cVar3 = FUN_004556d0(0);
      if ((cVar3 == '\0') && (fVar1 < _DAT_006b751c || (fVar1 == _DAT_006b751c) != 0)) {
        return (uint)(ushort)((ushort)(fVar1 < _DAT_006b751c) << 8 |
                              (ushort)(NAN(fVar1) || NAN(_DAT_006b751c)) << 10 |
                             (ushort)(fVar1 == _DAT_006b751c) << 0xe);
      }
      bVar7 = true;
    }
    goto LAB_004595f5;
  }
  pfVar6 = (float *)(unaff_ESI + cVar3 * 0x10);
  fVar1 = SQRT((*unaff_EDI - *pfVar6) * (*unaff_EDI - *pfVar6) +
               (unaff_EDI[1] - pfVar6[1]) * (unaff_EDI[1] - pfVar6[1]));
  bVar7 = fVar1 >= _DAT_006b7518;
  uVar4 = (uint)CONCAT11(fVar1 < _DAT_006b7518 |
                         (byte)((ushort)((ushort)(NAN(fVar1) || NAN(_DAT_006b7518)) << 10) >> 8) |
                         (byte)((ushort)((ushort)(fVar1 == _DAT_006b7518) << 0xe) >> 8),param_5);
  if (param_5 != '\0') {
    if (!bVar7) goto LAB_0045969f;
    uVar4 = (uint)(ushort)((ushort)(fVar1 < _DAT_006b751c) << 8 |
                           (ushort)(NAN(fVar1) || NAN(_DAT_006b751c)) << 10 |
                          (ushort)(fVar1 == _DAT_006b751c) << 0xe);
    if (fVar1 < _DAT_006b751c) {
      if (cVar3 < '\x02') {
        if (((int)this) == 0) goto LAB_004595ed;
        pfVar5 = (float *)(((int)this) + 0x60);
      }
      else {
        pfVar5 = pfVar6 + -4;
      }
      uVar4 = 0;
      if (pfVar5 != (float *)0x0) {
        fVar1 = (*unaff_EDI - *pfVar6) * (*pfVar6 - *pfVar5) +
                (unaff_EDI[1] - pfVar6[1]) * (pfVar6[1] - pfVar5[1]);
        if (fVar1 < DAT_006cc7a4) {
          return (uint)(ushort)((ushort)(fVar1 < DAT_006cc7a4) << 8 |
                                (ushort)(NAN(fVar1) || NAN(DAT_006cc7a4)) << 10 |
                               (ushort)(fVar1 == DAT_006cc7a4) << 0xe);
        }
        bVar7 = true;
        goto LAB_004595f5;
      }
    }
  }
LAB_004595ed:
  if (!bVar7) {
LAB_0045969f:
    return CONCAT31((int3)(uVar4 >> 8),bVar7);
  }
LAB_004595f5:
  fVar1 = unaff_EDI[1];
  fVar2 = unaff_EDI[2];
  pfVar6 = (float *)(unaff_ESI + (*unaff_ESI + 1) * 0x10);
  *pfVar6 = *unaff_EDI;
  pfVar6[1] = fVar1;
  pfVar6[2] = fVar2;
  unaff_ESI[*unaff_ESI + 0x150] = param_2;
  *(undefined2 *)(unaff_ESI + *unaff_ESI * 2 + 0x164) = param_3;
  unaff_ESI[*unaff_ESI + 0x18c] = param_4;
  unaff_ESI[0x1a4] = '\0';
  unaff_ESI[0x1a5] = '\0';
  unaff_ESI[0x1a6] = '\0';
  unaff_ESI[0x1a7] = '\0';
  unaff_ESI[0x1a8] = '\0';
  unaff_ESI[0x1a9] = '\0';
  unaff_ESI[0x1aa] = '\0';
  unaff_ESI[0x1ab] = '\0';
  cVar3 = *unaff_ESI;
  if ('\0' < cVar3) {
    pfVar6 = (float *)(unaff_ESI + cVar3 * 0x10);
    *(float *)(unaff_ESI + 0x1ac) =
         SQRT((*unaff_EDI - *pfVar6) * (*unaff_EDI - *pfVar6) +
              (unaff_EDI[2] - pfVar6[2]) * (unaff_EDI[2] - pfVar6[2]) +
              (unaff_EDI[1] - pfVar6[1]) * (unaff_EDI[1] - pfVar6[1])) +
         *(float *)(unaff_ESI + 0x1ac);
  }
  *unaff_ESI = cVar3 + '\x01';
  return (uint)bVar7;
}
