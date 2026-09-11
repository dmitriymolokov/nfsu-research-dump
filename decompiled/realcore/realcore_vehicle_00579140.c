/* spd-match: far pct=35.71 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00579140 */
#include "ghidra_compat.h"
extern int DAT_0073b0dc;
extern int *DAT_0073b0e0;
void __fastcall FUN_00579140(void *ptr) {
  char *esi = (char *)ptr;
  if (--(*(int *)(esi + 0xD8)) == 0) {
    if (*(int *)(esi + 0xE0) != 0) {
      int *a = *(int **)esi;
      int *b = *(int **)(esi + 4);
      *b = (int)a;
      *(int *)((char *)a + 4) = (int)b;
      *(int *)(esi + 0xE0) = 0;
      FUN_00579140(esi);
    }
    *(int *)(esi + 4) = (int)DAT_0073b0e0;
    *DAT_0073b0e0 = (int)esi;
    DAT_0073b0e0 = (int *)esi;
    *(int *)esi = (int)&DAT_0073b0dc;
  }
}
