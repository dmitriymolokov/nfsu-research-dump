/* spd-match: far pct=27.38 flags=/O1 /Gr /c /nologo /TP method=m39 source=m39/m39/va_00579380 */
#include <windows.h>
extern int __stdcall FUN_00567160(void* self);
extern int __stdcall FUN_00578e80(int handle, int param);
extern void LAB_00686718(void);
void FUN_00579380(void* self, int param_2) {
  int iVar1;
  __try {
    iVar1 = FUN_00567160(self);
    if (iVar1 == 0) {
      iVar1 = 0;
    } else {
      iVar1 = FUN_00578e80(iVar1, param_2);
    }
    *(int*)((char*)iVar1 + 0xd8) += 1;
  } __finally {
  }
}
