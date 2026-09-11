/* spd-match: far pct=44.44 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0063C700 */
#include "ghidra_compat.h"
extern int DAT_006e761c;
extern void* UNK_0063c5a0;
int __cdecl FUN_0063a190(int p1, int p2, void* p3);
void __cdecl FUN_0063aad0(void* p1, int p2);
void __cdecl FUN_0063c700(int p1, int p2) {
  int buf[5];
  int r;
  buf[0] = p1;
  buf[1] = p2;
  buf[2] = 0;
  r = FUN_0063a190(p1, DAT_006e761c, (void*)buf);
  FUN_0063aad0((void*)UNK_0063c5a0, r);
}
