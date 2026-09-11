/* spd-match: far pct=26.25 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_00549AA0 */
#include "ghidra_compat.h"
struct Obj { int pad1[26]; int val68; int pad2[136]; int val28c; int pad3[427]; int val538; int pad4[64]; int data78[2]; };
void __stdcall FUN_00549aa0(struct Obj *p) {
  int v68 = p->val68;
  if (v68) {
    FUN_00665660(v68);
    FUN_006688b0(p->val28c);
    FUN_00549ff0(1.0f);
    if (FUN_00665120(v68) == 0x400) {
      FUN_0054b1c0((int)p);
      return;
    }
  }
}
int __cdecl FUN_00549500(int a1); int __cdecl FUN_00549ff0(float a1); int __cdecl FUN_0054b1c0(int a1); int __cdecl FUN_00665120(int a1); int __cdecl FUN_00665660(int a1); int __cdecl FUN_006688b0(int a1);
