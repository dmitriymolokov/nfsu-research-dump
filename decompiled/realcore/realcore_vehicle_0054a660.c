/* spd-match: far pct=14.10 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_0054A660 */
#include <windows.h>
extern int DAT_007346c8; extern int DAT_0073d8d0; extern int LAB_0054c480; extern int DAT_006b9172;
extern int __cdecl FUN_00664d40(int, int, int); extern int __cdecl FUN_00666ea0(int, int);
extern void __cdecl FUN_00667d70(void*, int, const char*, const char*);
extern void __cdecl FUN_00664e00(int, int, void*, int*, int);
void __fastcall FUN_0054a660(int edx, int esi) {
  char buf[512];
  int res;
  if (*(int*)(esi + 0x68) != 0 && DAT_007346c8 != 0 && *(int*)(esi + 0x294) != -1) {
    *(int*)(esi + 0x540) = 0x11;
    *(int*)(esi + 0x544) = edx;
    res = FUN_00666ea0(*(int*)(esi + 0x74), FUN_00664d40(*(int*)(esi + 0x68), 5, *(int*)(esi + 0x294)));
    if (res == 0) {
      FUN_00667d70(buf, 0x200, "NAME=%s", (const char*)&DAT_006b9172);
    } else {
      FUN_00667d70(buf, 0x200, "NAME=%s", (const char*)(res + 4));
    }
    if (DAT_0073d8d0 != 0) {
      FUN_00664e00(DAT_0073d8d0, 0x67737461, buf, &LAB_0054c480, 0);
    }
  }
}
