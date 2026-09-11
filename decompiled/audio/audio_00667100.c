/* spd-match: far pct=5.03 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00667100 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_006ab7d8;
undefined4 * __fastcall FUN_00667100(uint val, undefined4 *param_1)

{
  int iVar1;
  ulonglong uVar2;

  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  uVar3 = val / 0x15180;
  uVar2 = ((ulonglong)val % 0x15180) / 0x3c;
  *param_1 = (int)(((ulonglong)val % 0x15180) % 0x3c);
  param_1[1] = (int)(uVar2 % 0x3c);
  param_1[2] = (int)(uVar2 / 0x3c);
  uVar6 = 0x7b2;
  while( true ) {
    if (((uVar6 & 3) == 0) && (((int)uVar6 % 100 != 0 || ((int)uVar6 % 400 == 0)))) {
      uVar4 = 0x16e;
    }
    else {
      uVar4 = 0x16d;
    }
    if ((int)uVar3 < (int)uVar4) break;
    uVar4 = (int)uVar3 / 0x16e + uVar6;
    if (uVar4 == uVar6) {
      uVar4 = uVar4 + 1;
    }
    iVar7 = uVar6 - 1;
    iVar1 = uVar4 - 1;
    uVar3 = uVar3 + ((iVar1 / 100 +
                      (((iVar7 / 400 + (uVar6 - uVar4) * 0x16d) - iVar1 / 400) - iVar7 / 100) +
                     ((int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2)) -
                    ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2));
    uVar6 = uVar4;
  }
  piVar5 = &DAT_006ab7d8 + (uVar4 & 1) * 0xc;
  param_1[5] = uVar6 - 0x76c;
  param_1[7] = uVar3;
  param_1[4] = 0;
  iVar7 = *piVar5;
  if (iVar7 <= (int)uVar3) {
    do {
      uVar3 = uVar3 - iVar7;
      piVar5 = piVar5 + 1;
      param_1[4] = param_1[4] + 1;
      iVar7 = *piVar5;
    } while (iVar7 <= (int)uVar3);
  }
  param_1[3] = uVar3 + 1;
  param_1[8] = 0;
  return param_1;
}
