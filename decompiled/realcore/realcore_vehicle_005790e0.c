/* spd-match: far pct=21.79 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_005790E0 */
#include <stddef.h>
extern void __fastcall FUN_005790c0(int arg);
extern int *DAT_0073b0e0;
extern int DAT_0073b0dc;
void __fastcall FUN_005790e0(void *esi, void *edx) {
  int **edi = (int **)((char *)esi + 8);
  if (*edi != (int *)edi) {
    do {
      int *p = *edi;
      int *prev = (int *)p[0];
      int *next = (int *)p[1];
      *next = (int)prev;
      *(int **)((int)prev + 4) = next;
      p[0x38] = 0;
      if (--((int *)esi)[0x36] == 0) {
        if (((int *)esi)[0x38] != 0) FUN_005790c0(((int *)esi)[0x38]);
        ((int *)esi)[1] = (int)DAT_0073b0e0;
        DAT_0073b0e0 = (int *)esi;
        *(int **)esi = &DAT_0073b0dc;
      }
    } while (*edi != (int *)edi);
  }
}
