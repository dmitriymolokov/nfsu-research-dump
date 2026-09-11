/* spd-match: far pct=11.11 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0052A890 */
#include "ghidra_compat.h"
extern int __cdecl FUN_0052cea0(void);
extern int __cdecl FUN_0052cf20(void);
struct GlobalStruct { char pad[0x234]; unsigned char b0, b1, b2, b3; };
struct Obj { int v0; struct GlobalStruct *gptr; char pad[0x240]; int v1; int v2; };
void __fastcall FUN_0052a890(struct Obj *esi) {
  struct GlobalStruct *ebx = esi->gptr;
  unsigned char c1 = ebx->b0, c2 = ebx->b1, c3 = ebx->b2, c4 = ebx->b3;
  unsigned char flag1 = (c1 | c4) != 0;
  unsigned char flag2 = (c2 | c3) != 0;
  if (*(unsigned char*)((char*)ebx + 0x12e8)) {
    int val = FUN_0052cea0();
    esi->v2 = val;
    if (val == 5 && esi->v1 == 5) esi->v2 = 6;
    FUN_0052cf20();
  }
}
