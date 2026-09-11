/* spd-match: far pct=40.21 flags=/O1 /Gr /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00521850 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00520f80();
int __cdecl FUN_00520fd0();
int __cdecl FUN_00521010();
int __cdecl FUN_00521060();
int __cdecl FUN_005210b0();
int __cdecl FUN_005210f0();
int __cdecl FUN_00521980();
int __cdecl FUN_005219c0();
int __cdecl FUN_0064c000();
extern code *DAT_0073568c;
extern int DAT_00735690;
extern unsigned char *PTR_s_FX_TURBO_01_006f81b0;
void __fastcall FUN_00521850(undefined4 val)

{

  int iVar1;
  
  iVar1 = FUN_00521980(val);
  if (iVar1 == 0) {
    FUN_005219c0(val);
  }
  else if (DAT_0073568c != (code *)0x0) {
    (*DAT_0073568c)(DAT_00735690);
    DAT_0073568c = (code *)0x0;
    DAT_00735690 = 0;
    FUN_005210f0();
    FUN_00520f80();
    FUN_00520fd0();
    FUN_00521010();
    FUN_005210b0();
    FUN_0064c000(&PTR_s_FX_TURBO_01_006f81b0);
    FUN_00521060();
    return;
  }
  return;
}
