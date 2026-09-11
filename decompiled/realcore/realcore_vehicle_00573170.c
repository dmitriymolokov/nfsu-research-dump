/* spd-match: far pct=8.06 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00573170 */
#include "ghidra_compat.h"
extern int __cdecl FUN_00565da0(const char*, const char*);
extern const char* PTR_s_REPLAY0_BIN_006f1a04[];
void __fastcall FUN_00573170(int val, char *dst) {
  int idx = val;
  if (idx < 0 || idx > 1) idx = 0;
  if (*PTR_s_REPLAY0_BIN_006f1a04[idx] != 0) {
    int idx2 = val;
    if (idx2 < 0 || idx2 > 1) idx2 = 0;
    FUN_00565da0("REPLAY\\%s", PTR_s_REPLAY0_BIN_006f1a04[idx2]);
  } else {
    *dst = 0;
  }
}
