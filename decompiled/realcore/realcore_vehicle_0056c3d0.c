/* spd-match: far pct=8.04 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_0056C3D0 */
#include "ghidra_compat.h"
#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif
int __cdecl WideCharToMultiByte(void);
int __cdecl lstrcmpiA(const char *, const char *);
char *__cdecl _strncpy(char *, const char *, unsigned int);
long __cdecl __ftol(void);
extern int DAT_006bbc1d, DAT_006bbc34, DAT_006bbc3c, DAT_006bbc4c, DAT_006bbc54, DAT_006bbc5c, DAT_006bd3bc, DAT_0073d764;
extern char s_MEDIUM_006bc44c[], s_SQUARE_006cc124[];
void FUN_0056c3d0(int param_1, int param_2) {
  int i, iVar9, iVar14;
  unsigned int uVar6;
  int *piVar7, *piVar13;
  const char *pc = "DEFAULTALPHA";
  uVar6 = 0x44; iVar9 = -1;
  while(*pc) { iVar9 = iVar9 * 33 + (unsigned char)*pc++; }
  piVar13 = &DAT_0073d764;
  piVar7 = (int *)(param_1 + 0x900);
  for(i = 0; i < 8; i++) {
    piVar7[-1] = piVar13[-1];
    if (iVar9 != *piVar7) { *piVar7 = iVar9; piVar7[1] = -1; }
    piVar7 += 0x24; piVar13 += 9;
  }
}
