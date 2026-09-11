/* spd-match: far pct=52.78 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00448560 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern void LAB_00449250(void);
void __fastcall FUN_00448560(int * obj)

{

  if (*obj != 0) {
    *obj = 0;
  }
  obj[2] = (int)"LoadingTrackCommon";
  *obj = (int)&LAB_00449250;
  if ((char)obj[5] != '\0') {
    *(undefined1 *)(obj + 5) = 0;
  }
  return;
}
