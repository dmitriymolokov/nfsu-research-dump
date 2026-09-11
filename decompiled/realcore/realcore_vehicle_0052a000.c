/* spd-match: far pct=14.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0052A000 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

extern unsigned char *DAT_006b6644;
uint __fastcall FUN_0052a000(uint val, int param_1)

{
  float fVar1;
  float fVar2;

  if (*(int *)(param_1 + 0x18e8) != 1) {
    fVar1 = *(float *)(param_1 + 0x1f1c);
    fVar2 = *(float *)(&DAT_006b6644 + *(int *)(param_1 + 0x1d18) * 4);
    val = CONCAT22((short)((uint)*(int *)(param_1 + 0x1d18) >> 0x10),
                      (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                      (ushort)(fVar1 == fVar2) << 0xe);
    if (fVar1 >= fVar2) {
      return CONCAT31((int3)(val >> 8),*(char *)(param_1 + 0x1f10) != '\0');
    }
  }
  return val & 0xffffff00;
}
