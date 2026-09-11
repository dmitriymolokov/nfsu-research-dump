/* spd-match: far pct=29.49 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0053F4B0 */
#include "ghidra_compat.h"
extern int DAT_00743c70; extern int *DAT_00743c74;
void __fastcall FUN_0053f4b0(int *eax, int *esi) {
  int ecx = eax[2];
  if (ecx && esi != (int *)eax[3]) {
    int *p_head = (int *)*eax;
    int *p_next = (int *)eax[1];
    *p_next = (int)p_head;
    *(int **)((int)p_head + 4) = p_next;
    if (esi) {
      int *edx = *(int **)((char *)esi + 0x8c);
      *edx = (int)eax;
      *(int **)((char *)esi + 0x8c) = eax;
      eax[1] = (int)edx;
      *eax = (int)esi + 0x88;
      eax[3] = (int)esi;
    } else {
      int *ptr = DAT_00743c74;
      *ptr = (int)eax;
      DAT_00743c74 = eax;
      eax[1] = (int)&DAT_00743c74;
      *eax = (int)&DAT_00743c70;
      eax[3] = 0;
    }
  }
}
