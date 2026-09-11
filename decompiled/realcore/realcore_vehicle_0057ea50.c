/* spd-match: far pct=34.15 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0057EA50 */
#include "ghidra_compat.h"
int __cdecl FUN_0057ea80(void);
int __fastcall FUN_0057ea50(int ecx_obj, int edx_param1, int param2) {
  int old_val;
  old_val = *(int *)(ecx_obj + edx_param1 * 4 + 0x44c);
  *(int *)(ecx_obj + edx_param1 * 4 + 0x44c) = param2;
  *(char *)(ecx_obj + edx_param1 + 0x62c) += 1;
  FUN_0057ea80();
  return old_val;
}
