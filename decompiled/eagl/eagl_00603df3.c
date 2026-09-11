/* spd-match: far pct=10.94 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00603DF3 */
#include <windows.h>
extern int __fastcall FUN_005fb6af(int a1, int a2, int a3);
extern int __fastcall FUN_0060254c(int a1, int a2, int a3);
int __fastcall FUN_00603df3(int this) {
  int iVar5 = FUN_005fb6af(*(int*)(this + 0x60), 3, 0x200);
  if (iVar5 < 0) return iVar5;
  iVar5 = FUN_005fb6af(*(int*)(this + 0x64), 6, 0x201);
  if (iVar5 < 0) return iVar5;
  iVar5 = FUN_0060254c(*(int*)(this + 0x60), *(int*)(this + 0x70), 1);
  if (iVar5 < 0) return iVar5;
  iVar5 = FUN_0060254c(*(int*)(this + 0x64), *(int*)(this + 0x74), 1);
  if (iVar5 < 0) return iVar5;
  if ((*(unsigned int*)(this + 0x30) & 0xffff0000) == 0x46580000) {
    iVar5 = FUN_005fb6af(*(int*)(this + 0x54), 0x100, 0xc0);
    if (iVar5 < 0) return iVar5;
  }
  return 0;
}
