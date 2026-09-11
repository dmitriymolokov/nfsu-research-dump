/* spd-match: far pct=12.88 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00573CB0 */
#include "ghidra_compat.h"
extern int FUN_00573c30(int, int*, int);
extern int FUN_0057c480(int, int);
extern int FUN_0057c5a0(int);
extern int DAT_0073459c, DAT_0073ad3c, DAT_0073b578, DAT_0078e954;
extern int *DAT_007345a4, *DAT_007345d0;
void FUN_00573cb0(void) {
  int eax, edi, esi;
  DAT_0073b578 = 0;
  if (DAT_0073459c == 0) return;
  eax = FUN_0057c5a0(2);
  edi = eax;
  if (edi > 0) {
    do {
      esi = (int)DAT_007345a4;
      if (DAT_0073459c == 0) {
        eax = 0;
      } else {
        eax = FUN_0057c480(0x13, 2);
        esi = (int)DAT_007345a4;
        if (esi != 0 && *(int*)(esi + 0x10) <= *(int*)esi && DAT_0073459c != 0) {
          DAT_007345a4 = 0;
          DAT_0073459c = 0;
        }
      }
      FUN_00573c30(eax, &DAT_0073b578, 1);
      if (DAT_0073ad3c > DAT_0078e954) DAT_0078e954 = DAT_0073ad3c;
      edi--;
    } while (edi != 0);
  }
}
