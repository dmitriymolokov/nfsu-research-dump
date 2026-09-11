/* spd-match: far pct=41.46 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00529F50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

extern unsigned char *DAT_006b6644;
uint __fastcall FUN_00529f50(uint obj)

{
  float fVar1;
  float fVar2;

  if (*(int *)(obj + 0x18e8) != 2) {
    fVar1 = *(float *)(obj + 0x1f1c);
    fVar2 = *(float *)(&DAT_006b6644 + *(int *)(obj + 0x1d18) * 4);
    obj = CONCAT22((short)((uint)*(int *)(obj + 0x1d18) >> 0x10),
                      (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                      (ushort)(fVar1 == fVar2) << 0xe);
    if (fVar1 >= fVar2) {
      return CONCAT31((int3)(obj >> 8),1);
    }
  }
  return obj & 0xffffff00;
}
