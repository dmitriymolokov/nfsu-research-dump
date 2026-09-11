/* spd-match: far pct=24.14 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0057C350 */
#include <stddef.h>
int __cdecl FUN_00594c60(void* p, int a, int b);
void __cdecl FUN_00594dd0(void* p, int val);
void __cdecl FUN_00594d40(void);
void __stdcall FUN_0057c350(int* edi) {
  int val = edi[0];
  int diff = edi[4] - val;
  if (diff > 0x4000) diff = 0x4000;
  if (diff > 0) {
    int* esi = (int*)FUN_00594c60(edi + 9, 1, 1);
    if (esi) esi[2] = val;
    FUN_00594dd0(edi + 25, diff);
    FUN_00594d40();
    edi[3] = val;
    edi[2] = val + diff;
  }
}
