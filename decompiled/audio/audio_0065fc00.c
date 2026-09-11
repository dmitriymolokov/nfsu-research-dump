/* spd-match: far pct=7.83 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0065FC00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_00717300;
extern void LAB_0065fc2f(void);
extern void LAB_0065fc70(void);
undefined8 __fastcall FUN_0065fc00(undefined4 val, undefined4 param_1, undefined4 param_2, uint param_3, int param_4, int param_5)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  bool bVar4;

  uint uVar5;
  
  do {
    if ((param_3 & 3) == 0) goto LAB_0065fc2f;
    *(undefined4 *)(param_5 + -4 + param_3 * 4) =
         *(undefined4 *)(&DAT_00717300 + (uint)*(byte *)((param_3 - 1) + param_4) * 4);
    param_3 = param_3 - 1;
  } while (param_3 != 0);
LAB_0065fc70:
  return CONCAT44(param_2,val);
LAB_0065fc2f:
  do {
    uVar3 = *(undefined4 *)(&DAT_00717300 + (uint)*(byte *)((param_3 - 3) + param_4) * 4);
    bVar1 = *(byte *)((param_3 - 2) + param_4);
    bVar2 = *(byte *)((param_3 - 1) + param_4);
    *(undefined4 *)(param_5 + -0x10 + param_3 * 4) =
         *(undefined4 *)(&DAT_00717300 + (uint)*(byte *)((param_3 - 4) + param_4) * 4);
    *(undefined4 *)(param_5 + -0xc + param_3 * 4) = uVar3;
    uVar3 = *(undefined4 *)(&DAT_00717300 + (uint)bVar2 * 4);
    *(undefined4 *)(param_5 + -8 + param_3 * 4) = *(undefined4 *)(&DAT_00717300 + (uint)bVar1 * 4);
    *(undefined4 *)(param_5 + -4 + param_3 * 4) = uVar3;
    uVar5 = param_3 - 4;
    bVar4 = 3 < (int)param_3;
    param_3 = uVar5;
  } while (uVar5 != 0 && bVar4);
  goto LAB_0065fc70;
}
