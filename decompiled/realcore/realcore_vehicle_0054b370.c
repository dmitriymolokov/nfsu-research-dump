/* spd-match: far pct=14.89 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_0054B370 */
#include <windows.h>
#include <string.h>
extern void* DAT_007346f8;
extern void* DAT_0073d8d0;
extern int DAT_0073dda0;
extern int DAT_0073dda4;
void __cdecl FUN_0054de70(void* p);
void __cdecl FUN_00664e00(void* a, int b, char* c, void* d, int e);
void __cdecl FUN_00665660(int v);
void __cdecl FUN_0054c3c0(void);
int __cdecl FUN_0054b370(int ebx) {
  char buffer[512];
  if (*(int*)(ebx + 0x68) == 0) return -1;
  memset(buffer, 0, 512);
  FUN_0054de70(&DAT_007346f8);
  if (DAT_0073d8d0 != 0) {
    FUN_00664e00(DAT_0073d8d0, 0x61757468, buffer, FUN_0054c3c0, 0);
  }
  FUN_00665660(*(int*)(ebx + 0x68));
  DAT_0073dda4 = DAT_0073dda0;
  DAT_0073dda0 = 5;
  return 0;
}
