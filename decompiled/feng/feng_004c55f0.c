/* spd-match: far pct=5.63 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C55F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

char * __fastcall FUN_004c55f0(uint val)

{

  if (val < 0x9db972a4) {
    if (val == 0x9db972a3) {
      return "Dirt";
    }
    if (val < 0x4fdc36fe) {
      if (val == 0x4fdc36fd) {
        return "Samantha";
      }
      if (val == 0x26cbb5b) {
        return "Klutch";
      }
      if (val == 0x1784e6a4) {
        return "TJ";
      }
    }
    else {
      if (val == 0x54f6e4eb) {
        return "Eddie";
      }
      if (val == 0x9db8dfc0) {
        return "Chad";
      }
    }
  }
  else if (val < 0x9dc2505c) {
    if (val == 0x9dc2505b) {
      return "Todd";
    }
    if (val == 0x9dbcd681) {
      return "Jose";
    }
    if (val == 0x9dbd7c56) {
      return "Kurt";
    }
  }
  else if (val == 0xd8fbe4de) {
    return "Melissa";
  }
  return "";
}
