/* spd-match: far pct=8.50 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00561C50 */
#include "ghidra_compat.h"
extern int __cdecl FUN_004c96c0(int);
extern int __cdecl FUN_004f3f90(void*);
extern int __cdecl FUN_004f7660(float, float);
extern int DAT_0070649c;
extern int DAT_007064a0;
extern char DAT_007064b2;
extern int DAT_00746104;
void FUN_00561c50(int esi) {
  int i = 3;
  int* p = (int*)(esi + 0x40);
  do {
    if (*p != 0 && DAT_007064b2 != 0) {
      if (FUN_004f7660((float)(DAT_007064a0 - 0xf0), (float)(DAT_0070649c - 0x140))) {
        int val = *(int*)(*p + 0x10);
        if (val == (int)0xaa68bfc6) {
           int obj = FUN_004f3f90(&DAT_00746104);
           if (obj && *(int*)(obj + 0x18) && *(int*)(obj + 0x14)) {
             (*(void(__stdcall**)(int, int, int, int))(**(int**)(obj + 0x14) + 8))(0x911c0a4b, 0, 0, *(int*)(obj + 0x18));
           }
        } else if (val == (int)0xaa68bfd7) {
           int obj = FUN_004f3f90(&DAT_00746104);
           if (obj && *(int*)(obj + 0x18) && *(int*)(obj + 0x14)) {
             (*(void(__stdcall**)(int, int, int, int))(**(int**)(obj + 0x14) + 8))(0x72619778, 0, 0, *(int*)(obj + 0x18));
           }
        } else if (val == (int)0xc87eef52) {
          FUN_004c96c0(0xc519bfc0);
        }
      }
    }
    p++;
  } while (--i);
}
