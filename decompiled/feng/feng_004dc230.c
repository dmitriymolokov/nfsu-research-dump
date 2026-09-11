/* spd-match: far pct=28.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004DC230 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004dc230(int obj)

{

  if (*(int *)(obj + 0xb0c) < 0) {
    *(undefined4 *)(obj + 0xb0c) = 0;
  }
  if (*(int *)(obj + 0xb04) <= *(int *)(obj + 0xb0c)) {
    *(int *)(obj + 0xb0c) = *(int *)(obj + 0xb04) + -1;
  }
  if (*(int *)(obj + 0xb10) < 0) {
    *(undefined4 *)(obj + 0xb10) = 0;
  }
  if (*(int *)(obj + 0xb08) <= *(int *)(obj + 0xb10)) {
    *(int *)(obj + 0xb10) = *(int *)(obj + 0xb08) + -1;
  }
  return;
}
