/* spd-match: far pct=12.09 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_004CCC90 */
#include <windows.h>
extern int DAT_00746bfc;
extern int DAT_00746c00;
extern int DAT_00746c04;
extern int DAT_00746c08;
extern int DAT_00746c0c;
int __fastcall FUN_004ccc90(int eax, int ecx) {
  int* table[] = { &DAT_00746bfc, &DAT_00746c00, &DAT_00746c04, &DAT_00746c08, &DAT_00746c0c };
  if (ecx < 0 || ecx > 12) return -1;
  if (ecx < 5) return *(int*)((char*)table[ecx] + eax * 28);
  if (ecx == 5) return 5;
  if (ecx == 6) return 9;
  if (ecx == 7) return 8;
  if (ecx == 8) return 10;
  return -1;
}
