/* spd-match: far pct=50.85 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0054C3C0 */
#include <windows.h>
extern int DAT_0073dda0;
extern int DAT_0073dda4;
void __cdecl FUN_0054cf80(void* esi, int ecx);
void __stdcall FUN_0054c3c0(int unused, int* esi) {
  if (esi != 0) {
    if (esi[1] == 0x61757468) {
      FUN_0054cf80(esi, 0x73d868);
      if (esi[2] == 0) {
        DAT_0073dda4 = DAT_0073dda0;
        DAT_0073dda0 = 6;
      }
    }
  }
}
