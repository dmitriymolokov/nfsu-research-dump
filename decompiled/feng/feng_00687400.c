/* spd-match: matched pct=100.00 flags=/O1 /c /nologo /TC method=m39 source=m39/3.9.254/va_00687400 */
/* M3.9.254: FEng SEH unwind thunk — DEFINE_FENG_UNWIND_THUNK (Path A DIR32 mask).
 * ORIG: push 0; push "OptionsScreen"; mov eax,[ebp-0x10]; call FUN_00594fe0; add esp,8; ret
 * EAX = parent-frame object ptr (not a normal cdecl arg). Do not rewrite as 3-arg cdecl.
 */
#include "feng_tracker.h"

DEFINE_FENG_UNWIND_THUNK(FUN_00687400, "OptionsScreen", -0x10)
