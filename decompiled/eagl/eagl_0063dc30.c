/* spd-match: far pct=20.78 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0063DC30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

uint __fastcall FUN_0063dc30(byte * obj, int param_1)

{

  if (param_1 == 1) {
    return (uint)*obj;
  }
  if (param_1 == 2) {
    return (uint)CONCAT11(*obj,obj[1]);
  }
  if (param_1 == 3) {
    return (uint)CONCAT21(CONCAT11(*obj,obj[1]),obj[2]);
  }
  if (param_1 == 4) {
    return CONCAT31(CONCAT21(CONCAT11(*obj,obj[1]),obj[2]),obj[3]);
  }
  return 0;
}
