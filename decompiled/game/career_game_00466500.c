/* spd-match: far pct=3.80 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00466500 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

extern int _DAT_006cc7b8;
extern void LAB_00466549(void);
uint __fastcall FUN_00466500(int obj)

{
  int iVar1;
  float fVar2;

  uint uVar3;
  
  uVar3 = *(uint *)(*(int *)(obj + 100) + 600);
  if (*(char *)(uVar3 + 0x15) == '\x03') {
    fVar2 = ABS(*(float *)(*(int *)(uVar3 + 0x60) + 0x78));
    uVar3 = CONCAT22((short)((uint)*(int *)(uVar3 + 0x60) >> 0x10),
                     (ushort)(fVar2 < _DAT_006cc7b8) << 8 |
                     (ushort)(NAN(fVar2) || NAN(_DAT_006cc7b8)) << 10 |
                     (ushort)(fVar2 == _DAT_006cc7b8) << 0xe);
    if (fVar2 < _DAT_006cc7b8) goto LAB_00466549;
  }
  iVar1 = *(int *)(*(int *)(obj + 100) + 0x25c);
  if (*(char *)(iVar1 + 0x15) == '\x03') {
    fVar2 = ABS(*(float *)(*(int *)(iVar1 + 0x60) + 0x78));
    uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                     (ushort)(fVar2 < _DAT_006cc7b8) << 8 |
                     (ushort)(NAN(fVar2) || NAN(_DAT_006cc7b8)) << 10 |
                     (ushort)(fVar2 == _DAT_006cc7b8) << 0xe);
    if (fVar2 < _DAT_006cc7b8) {
LAB_00466549:
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}
