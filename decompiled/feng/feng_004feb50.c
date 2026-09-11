/* spd-match: far pct=5.68 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FEB50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

uint __fastcall FUN_004feb50(int * obj, int *param_1)

{

  if ((obj[2] <= param_1[2] + 1) && (param_1[2] + -1 <= obj[2])) {
    if ((obj[1] <= param_1[1] + 1) && (param_1[1] + -1 <= obj[1])) {
      if ((*obj <= *param_1 + 1) && (*param_1 + -1 <= *obj)) {
        if ((obj[3] <= param_1[3] + 1) && (param_1[3] + -1 <= obj[3])) {
          return 1;
        }
        return 0;
      }
    }
  }
  return (uint)obj & 0xffffff00;
}
