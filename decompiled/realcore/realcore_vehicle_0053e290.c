/* spd-match: far pct=9.72 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.G.45-s0/va_0053E290 */
#include <windows.h>
extern int DAT_007364a0;
extern int DAT_0078a2fc;
extern int __cdecl FUN_00408e30(void* param);
void __fastcall FUN_0053e290(void* pThis, void* edx_unused, int eax_val, int param_2) {
  int esi = eax_val;
  int iVar1 = *(int*)((char*)pThis + 4);
  esi |= 0x10;
  if (iVar1 == 1 || iVar1 == 2) esi |= 2;
  if (DAT_007364a0 == 4 || DAT_007364a0 == 3) esi |= 1;
  if (iVar1 >= 10 && iVar1 <= 15) esi |= 0x100;
  if (DAT_0078a2fc == 0) esi |= 8;
  else if (DAT_0078a2fc == 1) esi |= 4;
  if (esi & 0x800) {
    esi |= 0x40;
    FUN_00408e30((void*)param_2);
  } else {
    if (esi & 0x1000) esi |= 0x20;
    FUN_00408e30((void*)param_2);
  }
  *(int*)((char*)param_2 + 0x84) = esi;
}
