/* spd-match: far pct=29.57 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0053CD70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0064c000();
int __cdecl FUN_0064c1a0();
extern int DAT_0073d7d4;
extern unsigned char *PTR_s_TCAR_MONO_STREAM_006f2228;
int unaff_EBX;
int unaff_ESI;
void __fastcall FUN_0053cd70(int val, int param_1, int param_2, int param_3)

{
  int *piVar1;

  int iVar2;
  int unaff_EBX;
  int unaff_ESI;
  
  if (val < 0) {
    val = 0;
  }
  else if (7 < val) {
    val = 7;
  }
  piVar1 = (int *)(unaff_ESI + 4);
  *piVar1 = val;
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (0xf < param_1) {
    param_1 = 0xf;
  }
  *(int *)(unaff_ESI + 8) = param_1;
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0x7fff < param_2) {
    param_2 = 0x7fff;
  }
  *(int *)(unaff_ESI + 0xc) = param_2;
  if (unaff_EBX < 0) {
    unaff_EBX = 0;
  }
  else if (0x1fff < unaff_EBX) {
    unaff_EBX = 0x1fff;
  }
  *(int *)(unaff_ESI + 0x10) = unaff_EBX;
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (0xffff < param_3) {
    param_3 = 0xffff;
  }
  *(int *)(unaff_ESI + 0x14) = param_3;
  iVar2 = FUN_0064c1a0(&DAT_0073d7d4,piVar1);
  if (iVar2 < 0) {
    FUN_0064c000(&PTR_s_TCAR_MONO_STREAM_006f2228);
    FUN_0064c1a0(&DAT_0073d7d4,piVar1);
  }
  return;
}
