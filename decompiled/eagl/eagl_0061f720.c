/* spd-match: far pct=23.33 flags=/O1 /c /nologo /TP method=m39 source=m39/m39/va_0061F720 */
#include "ghidra_compat.h"
extern uint DAT_006e29b4;
extern void* DAT_00709d80;
int __fastcall FUN_0061f720(void* p_this, int edx, byte b) {
  *(byte*)((char*)p_this + 0x99) = b;
  unsigned int val = b;
  if (DAT_006e29b4 != val) {
    DAT_006e29b4 = val;
    void* p = DAT_00709d80;
    if (p != 0) {
      void** vtbl = *(void***)p;
      ((void (__stdcall *)(void*, int, int))vtbl[50])(p, 0xe, (int)*(byte*)((char*)p_this + 0x99));
    }
  }
  return 1;
}
