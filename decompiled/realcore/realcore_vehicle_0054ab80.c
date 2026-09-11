/* spd-match: far pct=20.17 flags=/O2 /c /nologo /TP method=m39 source=m39/m39/va_0054AB80 */
#include <windows.h>
extern void* DAT_006bd3bc;
extern int DAT_0073d8d0;
extern void* FUN_0054c9e0;
extern void __stdcall FUN_00667950(void* a, int b, void* c, int d);
extern void __stdcall FUN_00664e00(int a, int b, void* c, void* d, int e);
void __fastcall FUN_0054ab80(int esi, int edx, int param_2) {
  char stack_buf[64];
  if (*(int*)(esi + 0x68)) {
    *(int*)(esi + 0x540) = 6;
    *(int*)(esi + 0x544) = param_2;
    stack_buf[0] = 0;
    FUN_00667950(stack_buf, 0x40, &DAT_006bd3bc, param_2);
    if (DAT_0073d8d0) {
      FUN_00664e00(DAT_0073d8d0, 0x6d6f7665, stack_buf, FUN_0054c9e0, 0);
    }
    *(int*)(esi + 0x53c) = *(int*)(esi + 0x538);
    *(int*)(esi + 0x538) = 0xe;
  }
}
