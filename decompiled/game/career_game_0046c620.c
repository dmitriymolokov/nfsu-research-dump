/* spd-match: far pct=7.65 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0046C620 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_00567370();
extern int _DAT_006b7250;
extern int _DAT_006cc7b8;
extern void LAB_0046c655(void);
extern void LAB_0046c6c1(void);
uint __fastcall FUN_0046c620(int * obj, undefined4 param_1, int *param_2, undefined4 param_3, int param_4, int param_5)

{
  float fVar1;

  int *piVar2;
  float *pfVar4;
  float local_20;
  float fStack_1c;
  float fStack_18;
  int *piVar3;
  
  piVar3 = obj;
  if ((*(char *)((int)param_2 + 0x15) == '\0') && (*(char *)((int)obj + 0x15) == '\x03')) {
    fVar1 = ABS(*(float *)(obj[0x18] + 0x78));
    piVar2 = (int *)CONCAT22((short)((uint)obj[0x18] >> 0x10),
                             (ushort)(fVar1 < _DAT_006cc7b8) << 8 |
                             (ushort)(NAN(fVar1) || NAN(_DAT_006cc7b8)) << 10 |
                             (ushort)(fVar1 == _DAT_006cc7b8) << 0xe);
    piVar3 = piVar2;
    if (fVar1 >= _DAT_006cc7b8) goto LAB_0046c655;
  }
  else {
LAB_0046c655:
    piVar2 = (int *)CONCAT31((int3)((uint)piVar3 >> 8),*(char *)((int)obj + 0x15));
    if ((*(char *)((int)obj + 0x15) != '\0') || (*(char *)((int)param_2 + 0x15) != '\x03'))
    goto LAB_0046c6c1;
    fVar1 = ABS(*(float *)(param_2[0x18] + 0x78));
    piVar2 = (int *)CONCAT22((short)((uint)piVar3 >> 0x10),
                             (ushort)(fVar1 < _DAT_006cc7b8) << 8 |
                             (ushort)(NAN(fVar1) || NAN(_DAT_006cc7b8)) << 10 |
                             (ushort)(fVar1 == _DAT_006cc7b8) << 0xe);
    param_4 = param_5;
    param_2 = obj;
    if (fVar1 >= _DAT_006cc7b8) goto LAB_0046c6c1;
  }
  if ((param_2 != (int *)0x0) && (param_4 != 0)) {
    FUN_00567370();
    pfVar4 = (float *)(**(code **)(*param_2 + 0x14))();
    fVar1 = ABS(local_20 * *pfVar4 + fStack_18 * pfVar4[2] + fStack_1c * pfVar4[1]);
    piVar2 = (int *)CONCAT22((short)((uint)pfVar4 >> 0x10),
                             (ushort)(fVar1 < _DAT_006b7250) << 8 |
                             (ushort)(NAN(fVar1) || NAN(_DAT_006b7250)) << 10 |
                             (ushort)(fVar1 == _DAT_006b7250) << 0xe);
    if (fVar1 < _DAT_006b7250) {
      return CONCAT31((int3)((uint)piVar2 >> 8),1);
    }
  }
LAB_0046c6c1:
  return (uint)piVar2 & 0xffffff00;
}
