/* spd-match: far pct=2.71 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0043FD20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc83c;
void __fastcall FUN_0043fd20(int obj, float *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;

  sVar1 = *(short *)(obj + 0x10);
  sVar2 = *(short *)(obj + 4);
  sVar3 = *(short *)(obj + 0x18);
  *param_1 = (float)((int)*(short *)(obj + 8) << 0xd) * _DAT_006cc83c;
  param_1[1] = (float)((int)sVar1 << 0xd) * _DAT_006cc83c;
  param_1[2] = (float)((sVar2 * 0x100 + (int)sVar3) * 0x100) * _DAT_006cc83c;
  sVar1 = *(short *)(obj + 0x12);
  sVar2 = *(short *)(obj + 0x1a);
  sVar3 = *(short *)(obj + 4);
  param_1[4] = (float)((int)*(short *)(obj + 10) << 0xd) * _DAT_006cc83c;
  param_1[5] = (float)((int)sVar1 << 0xd) * _DAT_006cc83c;
  param_1[6] = (float)((sVar3 * 0x100 + (int)sVar2) * 0x100) * _DAT_006cc83c;
  sVar1 = *(short *)(obj + 0x14);
  sVar2 = *(short *)(obj + 0x1c);
  sVar3 = *(short *)(obj + 4);
  param_1[8] = (float)((int)*(short *)(obj + 0xc) << 0xd) * _DAT_006cc83c;
  param_1[9] = (float)((int)sVar1 << 0xd) * _DAT_006cc83c;
  param_1[10] = (float)((sVar3 * 0x100 + (int)sVar2) * 0x100) * _DAT_006cc83c;
  sVar1 = *(short *)(obj + 0x16);
  sVar2 = *(short *)(obj + 0x1e);
  sVar3 = *(short *)(obj + 4);
  param_1[0xc] = (float)((int)*(short *)(obj + 0xe) << 0xd) * _DAT_006cc83c;
  param_1[0xd] = (float)((int)sVar1 << 0xd) * _DAT_006cc83c;
  param_1[0xe] = (float)((sVar3 * 0x100 + (int)sVar2) * 0x100) * _DAT_006cc83c;
  return;
}
