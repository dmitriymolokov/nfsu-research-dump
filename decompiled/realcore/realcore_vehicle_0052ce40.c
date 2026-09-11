/* spd-match: far pct=32.22 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0052CE40 */
#include "ghidra_compat.h"
struct State { char pad[0x18]; int val18; int val1c; int val20; int val24; };
void __fastcall FUN_0052ce40(int* obj, int dummy) {
  int* p = *(int**)(obj + 4);
  int* mid = *(int**)((char*)p + 0x234);
  int v_edx = mid[0x358/4];
  int v_ebp = mid[0x35c/4];
  int v_esi = mid[0x360/4];
  int v_edi = mid[0x354/4];
  int res_ebp = (v_edx == v_ebp) ? v_edx : obj[0x1c/4];
  int res_edi = (v_edi == v_esi) ? v_edi : obj[0x18/4];
  int cur18 = obj[0x18/4];
  int cur1c = obj[0x1c/4];
  obj[0x18/4] = res_edi;
  ((char*)obj)[0x28] = (char)(res_edi != cur18);
  obj[0x24/4] = cur1c;
  obj[0x1c/4] = res_ebp;
  ((char*)obj)[0x29] = (char)(res_ebp != cur1c);
  obj[0x20/4] = cur18;
}
