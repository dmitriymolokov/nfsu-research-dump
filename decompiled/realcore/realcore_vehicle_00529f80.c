/* spd-match: far pct=70.59 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00529F80 */
#include <windows.h>
extern float DAT_006b6670;
struct Obj { char pad[0x18F0]; };
unsigned char __fastcall FUN_00529f80(struct Obj *p) {
  if (*(int*)((char*)p + 0x18e8) != 5) {
    if (*(float*)((char*)p + 0x18dc) > DAT_006b6670) {
      return 1;
    }
  }
  return 0;
}
