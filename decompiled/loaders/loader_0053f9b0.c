/* spd-match: far pct=10.20 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_0053F9B0 */
#include <stddef.h>
struct LoaderData { char pad1[25]; char count; char pad2[2]; int* array; };
extern int __stdcall FUN_005461c0(int param1, int param2, int param3);
void __fastcall FUN_0053f9b0(struct LoaderData* ebx) {
  int esi = 0;
  char limit = ebx->count;
  if (limit > 0) {
    do {
      int* base = ebx->array;
      int* entry = base + (esi * 2);
      entry[1] = FUN_005461c0(entry[0], 1, 0);
      esi++;
    } while (esi < (int)limit);
  }
}
