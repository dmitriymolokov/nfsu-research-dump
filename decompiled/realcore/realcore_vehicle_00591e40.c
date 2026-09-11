/* spd-match: far pct=9.58 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_00591E40 */
#include "ghidra_compat.h"
int __cdecl FUN_00401010(void);
int __cdecl FUN_00401cd0(void);
int __cdecl FUN_0040c910(void);
int __cdecl FUN_005437f0(void);
int __cdecl FUN_00545180(void);
int __cdecl FUN_005791c0(void);
int __cdecl FUN_00591b40(void);
extern int DAT_006b5aac;
extern int DAT_00700e8c;
void __cdecl FUN_00591e40(unsigned int val, int param_1, int param_2) {
  int iVar4, iVar5, iVar2;
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = 0;
  if (((val & 0x800) != 0) && (*(int *)(param_1 + 0xc) == 0)) return;
  if (iVar4 == 0 || *(int *)(iVar4 + 0xc) == 0) return;
  iVar2 = *(int *)(param_1 + 0x60);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0xe4) != 0) FUN_005791c0();
    iVar5 = *(int *)(iVar2 + 0xe8);
    if (DAT_00700e8c == 0) {
      if (iVar5 != 0) return;
    } else if (iVar5 != 0) {
      FUN_00591e40(0, iVar5 + 0x40, iVar2 + 0x10);
      return;
    }
  }
  FUN_00401cd0();
}
