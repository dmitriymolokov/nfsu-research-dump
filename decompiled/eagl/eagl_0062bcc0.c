/* spd-match: far pct=26.39 flags=/O2 /c /nologo /TP method=m39 source=m39/m4g0-s01/va_0062BCC0 */
#include <windows.h>
extern void __cdecl LAB_0062bc80();
extern void __cdecl LAB_0062bb70();
extern void __cdecl LAB_0062bae0();
struct Context { int pad1; int offset4; int offset8; int table[1]; };
void __fastcall FUN_0062bcc0(void* ecx, void* edx, int arg_p2, int arg_p3, int arg_p4, int arg_p5, int arg_p6) {
  Context* ctx = (Context*)ecx;
  int* iter = (int*)((char*)ctx + 0x10 + ctx->offset4 * 4);
  int* end = iter + ctx->offset4;
  int base_p3 = (int)ctx + (ctx->offset8 * arg_p3 + (ctx->offset4 * 2 + 4)) * 4;
  int base_p4 = (int)ctx + (ctx->offset8 * arg_p4 + (ctx->offset4 * 2 + 4)) * 4;
  int base_v = arg_p5 + 0x10;
  if (arg_p6 == 0) {
    while(iter < end) {
      int count = *iter++;
      while(count-- > 0) {
        void (__cdecl *func)(int, int*, int*, int) = (void(__cdecl*)(int,int*,int*,int))*iter++;
        func(arg_p2, &base_p3, &base_p4, base_v);
      }
      base_v += 0x30;
    }
  }
}
