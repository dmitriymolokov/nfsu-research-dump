/* spd-match: far pct=33.33 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_005682A0 */
#include "ghidra_compat.h"
void __stdcall FUN_005682d0(void *);
void __fastcall FUN_005a0ce0(void *, int);
void __fastcall FUN_005a0f60(int);
extern char DAT_0075eef8;
void __fastcall FUN_005682a0(int val, void *ret_ptr)
{
  if ((unsigned int)val < 0x100) {
    FUN_005a0ce0(&DAT_0075eef8, val);
    FUN_005a0f60(val);
  }
  FUN_005682d0(ret_ptr);
}
