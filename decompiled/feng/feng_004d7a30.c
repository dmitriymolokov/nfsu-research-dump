/* spd-match: far pct=2.52 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004D7A30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern void LAB_004d7a4f(void);
uint __fastcall FUN_004d7a30(int val, int param_1)

{

  int iVar1;
  
  if (-1 < val) {
    if (val < 6) {
      iVar1 = 1;
      goto LAB_004d7a4f;
    }
    if (val == 6) {
      iVar1 = 4;
      goto LAB_004d7a4f;
    }
  }
  iVar1 = -1;
LAB_004d7a4f:
  if ((-1 < param_1) && (param_1 < iVar1)) {
    switch(val) {
    case 0:
      return 0xdc339c44;
    case 1:
      return 0xf1bd5749;
    case 2:
      return 0x343216e4;
    case 3:
      return 0xdb8099eb;
    case 4:
      return 0x9374c3e5;
    case 5:
      return 0xa6343aec;
    case 6:
      if (param_1 == 0) {
        return 0x92af441f;
      }
      if (param_1 != 1) {
        if (param_1 != 2) {
          return (param_1 != 3) - 1 & 0x92af4422;
        }
        return 0x92af4421;
      }
      return 0x92af4420;
    }
  }
  return 0;
}
