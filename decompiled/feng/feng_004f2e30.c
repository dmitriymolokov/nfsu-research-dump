/* spd-match: far pct=7.56 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.G.2-n5/va_004F2E30 */
#include "ghidra_compat.h"
extern "C" int __cdecl FUN_004f1810(int, int, int, float);
void __stdcall FUN_004f2e30(int pThis, int val, int param_2) {
  int iVar1 = (((unsigned short)pThis) * 0xd0) + val + 0x20;
  FUN_004f1810(val, iVar1, *(unsigned short*)(param_2 + 0x20), 1.0f);
  *(unsigned char*)(iVar1 + 0xc0) = 1;
  if (*(int*)(iVar1 + 0x50) != param_2) {
    *(int*)(iVar1 + 0x50) = param_2;
    *(int*)(iVar1 + 0x54) = 0;
    int iVar2 = *(int*)(param_2 + 0x60);
    while (iVar2) {
      if ((*(int*)(iVar2 + 0x18) == 1 || *(int*)(iVar2 + 0x18) == 9) && (*(unsigned char*)(iVar2 + 0x1c) & 4)) {
        *(int*)(iVar1 + 0x54) = iVar2;
        break;
      }
      iVar2 = *(int*)(iVar2 + 4);
    }
  }
}
