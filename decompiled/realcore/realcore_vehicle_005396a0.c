/* spd-match: far pct=19.78 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_005396A0 */
#include <windows.h>
int __cdecl FUN_0051cd20(int, int);
int __cdecl FUN_00539dd0(int);
struct Obj { int pad[0x230/4]; int val_230; };
int __cdecl FUN_005396a0(struct Obj* p) {
  switch(p->val_230) {
    case 0: return 0;
    case 1: return 1;
    case 2: return 2;
    case 3: return 3;
    case 4: return 4;
  }
  return -1;
}
