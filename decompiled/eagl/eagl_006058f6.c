/* spd-match: far pct=12.50 flags=/Og /c /nologo /TP method=m39 source=m39/m39/va_006058F6 */
#include <windows.h>
struct Context { int pad[100]; int field_30; int field_14; int field_98; int field_10; int field_18; int field_94; int field_58; };
int __stdcall FUN_006139d8(int a, int b, void* c, void* d, void* e, void* f, int g);
int __stdcall FUN_005f7709(void);
int __stdcall FUN_005f7760(int a, int b, int c, int d);
void __stdcall FUN_005f7186(int a);
int __stdcall FUN_005f7a42(int a);
int __stdcall FUN_006058f6(struct Context* this_ptr, int param_2) {
  int eax, ecx, esi, edi, ebx;
  edi = (int)this_ptr;
  eax = *(int*)(edi + 0x30);
  if ((eax & 0xffff) > 0x103) return 1;
  if ((*(unsigned int*)(*(int*)(edi + 0x98)) & 0xffffff) != 3) return 1;
  return 0;
}
