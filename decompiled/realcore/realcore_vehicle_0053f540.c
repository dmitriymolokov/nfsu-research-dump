/* spd-match: far pct=21.26 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_0053F540 */
#include "ghidra_compat.h"
extern int __cdecl FUN_005461c0(int a, int b, int c);
void __fastcall FUN_0053f540(int obj) {
  int *p = (int *)obj;
  int *ebp = (int *)p[3];
  int *esi = (int *)p[4];
  int edi = p[5];
  int i, j;
  char limit = *(char *)((char *)ebp + 0x19);
  if (esi && edi) {
    int *ptr = esi + 2;
    for (i = 0; i < edi; i++) {
      if (*ptr == -1) *ptr = FUN_005461c0(ptr[-1], 1, 0);
      ptr += 4;
    }
    if (limit > 0) {
      int *base = (int *)*(int *)((char *)ebp + 0x2c);
      for (i = 0; i < limit; i++) {
        int *row = base + (i * 2);
        for (j = 0; j < edi; j++) {
          int *col = esi + (j * 4);
          if (col[1] && *col == *row) {
            int tmp = row[1];
            row[1] = col[2];
            col[3] = (int)(row + 1);
            col[2] = tmp;
            break;
          }
        }
      }
    }
  }
}
