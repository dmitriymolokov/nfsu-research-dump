/* spd-match: far pct=20.78 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058B4D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0053e4f0();
int __cdecl FUN_0053eed0();
int __cdecl FUN_0058cac0();
int __cdecl FUN_0058cdf0();
extern int DAT_00740420;
void __fastcall FUN_0058b4d0(int val, int param_1)

{

  undefined4 uVar1;
  int unaff_ESI;
  
  uVar1 = 0;
  if (val != 0) {
    uVar1 = 4;
    FUN_0058cac0(param_1,0x40000,0);
  }
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(unaff_ESI + 0x52) = 1;
  FUN_0053eed0(&DAT_00740420,unaff_ESI + 8,FUN_0058cdf0,unaff_ESI,uVar1);
  uVar1 = FUN_0053e4f0(&DAT_00740420,unaff_ESI + 8);
  *(undefined4 *)(unaff_ESI + 0x54) = uVar1;
  return;
}
