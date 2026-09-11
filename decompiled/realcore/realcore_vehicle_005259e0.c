/* spd-match: far pct=6.28 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005259E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0064c000();
int __cdecl FUN_0064c1a0();
extern int DAT_007441d8;
extern unsigned char *PTR_s_IMPACT_WORLD_006f8170;
int unaff_ESI;
void __fastcall FUN_005259e0(int val, int param_1, int param_2, int param_3, int param_4)

{
  int *piVar1;

  int iVar2;
  int unaff_ESI;
  
  if (val < 0) {
    val = 0;
  }
  else if (0x7fff < val) {
    val = 0x7fff;
  }
  piVar1 = (int *)(unaff_ESI + 4);
  *piVar1 = val;
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (9000 < param_1) {
    param_1 = 9000;
  }
  *(int *)(unaff_ESI + 8) = param_1;
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0xffff < param_2) {
    param_2 = 0xffff;
  }
  *(int *)(unaff_ESI + 0xc) = param_2;
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (0x32 < param_3) {
    param_3 = 0x32;
  }
  *(int *)(unaff_ESI + 0x10) = param_3;
  if (param_4 < 0) {
    param_4 = 0;
  }
  else if (0x7f < param_4) {
    param_4 = 0x7f;
  }
  *(int *)(unaff_ESI + 0x14) = param_4;
  iVar2 = FUN_0064c1a0(&DAT_007441d8,piVar1);
  if (iVar2 < 0) {
    FUN_0064c000(&PTR_s_IMPACT_WORLD_006f8170);
    FUN_0064c1a0(&DAT_007441d8,piVar1);
  }
  return;
}
