/* spd-match: far pct=4.81 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-err-00456e90/va_00456E90 */
#include "ghidra_compat.h"

extern int DAT_0077af30;
extern int _DAT_006cc83c;

struct ThisCallBox {
  uint FUN_00456e90(float * obj, undefined4 param_2, int param_3, int param_4, int param_5);
};
uint ThisCallBox::FUN_00456e90(float * obj, undefined4 param_2, int param_3, int param_4, int param_5)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  bool bVar4;

  uint uVar5;
  short *psVar6;
  float local_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  if (obj == (float *)0x0) {
    return 0xffffffff;
  }
  local_c = 9e+09;
  if (param_3 == 0) {
    uVar5 = 0xb;
    fVar2 = (*((float *)this) - *obj) * obj[4] - (((float *)this)[1] - obj[1]) * obj[3];
  }
  else {
    uVar5 = 0x11;
    fVar2 = (*((float *)this) - *obj) * obj[6] - (((float *)this)[1] - obj[1]) * obj[5];
    if (param_4 != 0xff) {
      param_4 = param_4 + 6;
    }
    if (param_5 != 0xff) {
      param_5 = param_5 + 6;
    }
  }
  uVar1 = uVar5 + 6;
  if ((param_4 == 0xff) || (param_5 == 0xff)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (uVar5 < uVar1) {
    psVar6 = (short *)((int)obj + uVar5 * 2 + 0x3c);
    do {
      if (((*(char *)((&DAT_0077af30)[*(byte *)((int)obj + 0x83)] + 0x265 + uVar5) != '\0') &&
          (((bVar4 || ((int)uVar5 < param_4)) || (param_5 < (int)uVar5)))) &&
         (fVar3 = ABS((float)((int)*psVar6 << 8) * _DAT_006cc83c - fVar2), fVar3 < local_c)) {
        local_c = fVar3;
        local_8 = uVar5;
      }
      uVar5 = uVar5 + 1;
      psVar6 = psVar6 + 1;
    } while ((int)uVar5 < (int)uVar1);
    if ((local_8 != 0xffffffff) && (param_3 == 1)) {
      return local_8 - 6;
    }
  }
  else {
    local_8 = 0xffffffff;
  }
  return local_8;
}
