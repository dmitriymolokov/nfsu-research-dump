/* spd-match: far pct=25.48 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00525AA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0064c000();
int __cdecl FUN_0064c1a0();
extern int DAT_00744218;
extern unsigned char *PTR_s_FX_TURBO_01_006f81b0;
int unaff_EDI;
int unaff_ESI;
void __fastcall FUN_00525aa0(int val, int param_1, int param_2, int param_3, int param_4)

{
  int *piVar1;

  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  if (val < 0) {
    val = 0;
  }
  else if (5 < val) {
    val = 5;
  }
  piVar1 = (int *)(unaff_ESI + 4);
  *piVar1 = val;
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (0x7fff < param_1) {
    param_1 = 0x7fff;
  }
  *(int *)(unaff_ESI + 8) = param_1;
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0x2000 < param_2) {
    param_2 = 0x2000;
  }
  *(int *)(unaff_ESI + 0xc) = param_2;
  if (unaff_EDI < 0) {
    unaff_EDI = 0;
  }
  else if (0xffff < unaff_EDI) {
    unaff_EDI = 0xffff;
  }
  *(int *)(unaff_ESI + 0x10) = unaff_EDI;
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (0x400 < param_3) {
    param_3 = 0x400;
  }
  *(int *)(unaff_ESI + 0x14) = param_3;
  if (param_4 < 0) {
    param_4 = 0;
  }
  else if (10000 < param_4) {
    param_4 = 10000;
  }
  *(int *)(unaff_ESI + 0x18) = param_4;
  iVar2 = FUN_0064c1a0(&DAT_00744218,piVar1);
  if (iVar2 < 0) {
    FUN_0064c000(&PTR_s_FX_TURBO_01_006f81b0);
    FUN_0064c1a0(&DAT_00744218,piVar1);
  }
  return;
}
