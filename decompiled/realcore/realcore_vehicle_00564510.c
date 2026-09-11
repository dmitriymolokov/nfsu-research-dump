/* spd-match: far pct=18.18 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/m39/va_00564510 */
#include "ghidra_compat.h"
extern int __cdecl FUN_00564110(void);
struct ThisCallBox { int _[19]; int val; };
void __fastcall FUN_00564510(int obj, int param_1) {
  struct ThisCallBox* p = (struct ThisCallBox*)obj;
  if (param_1 == (int)0x9120409e) p->val--;
  else if (param_1 == (int)0xb5971bf1) p->val++;
  if (p->val < 0) {
    p->val = 0;
    FUN_00564110();
  } else {
    if (p->val > 3) p->val = 3;
    FUN_00564110();
  }
}
