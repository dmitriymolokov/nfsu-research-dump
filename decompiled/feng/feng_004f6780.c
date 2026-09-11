/* spd-match: far pct=15.69 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_004F6780 */
#include <windows.h>
extern int (*DAT_007304b8)(void);
extern int (*DAT_007304bc)(void);
extern char* DAT_00730508;
extern int __cdecl FUN_00565df0(int, int);
extern void __cdecl FUN_0041f060(void*, void*);
extern char DAT_0078f1d8;
extern char DAT_0078f1d7;
int __fastcall FUN_004f6780(int param_1, int esi_reg) {
  int iVar1;
  if (esi_reg == 0) return 0;
  DAT_007304b8 = (int(*)())0x005669d0;
  DAT_007304bc = (int(*)())0x005669f0;
  DAT_00730508 = &DAT_0078f1d8;
  iVar1 = FUN_00565df0(0, param_1);
  if (iVar1 != -1) *DAT_00730508 = 0;
  if (*(int*)(esi_reg + 0x64) < 0x400) {
    *(&DAT_0078f1d7 + *(int*)(esi_reg + 0x64)) = 0;
  }
  FUN_0041f060((void*)esi_reg, &DAT_0078f1d8);
  *(unsigned int*)(esi_reg + 0x1c) |= 2;
  return iVar1;
}
