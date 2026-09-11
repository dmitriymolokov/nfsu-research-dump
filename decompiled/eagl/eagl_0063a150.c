/* spd-match: close pct=88.00 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0063A150 */
#include <windows.h>
extern void __cdecl FUN_00642450(const char* fmt, ...);
void __cdecl FUN_0063a150(char* buffer) {
  DWORD len;
  SetLastError(0);
  len = GetCurrentDirectoryA(0x1ff, buffer);
  if (len == 0 || len > 0x1ff) {
    FUN_00642450("getdirectory - FAILED TO FETCH, OR WAS TOO LONG (%D CHAR).\n", len);
  }
}
