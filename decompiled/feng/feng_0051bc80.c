/* spd-match: far pct=10.18 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0051BC80 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0051bac0();
int __cdecl FUN_0051bad0();
int __cdecl FUN_0053e9e0();
int __cdecl FUN_005461c0();
extern int DAT_00740420;
void __fastcall FUN_0051bc80(int val, int param_1, int param_2)

{

  int iVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  iVar2 = param_2;
  FUN_0051bad0(unaff_ESI);
  if (val != 0) {
    iVar1 = FUN_005461c0();
    if (iVar1 == 0) {
      val = 0;
    }
  }
  if (param_1 != 0) {
    iVar1 = FUN_005461c0(param_1,0,1);
    if (iVar1 == 0) {
      param_1 = 0;
    }
  }
  if (iVar2 != 0) {
    iVar1 = FUN_005461c0(iVar2,0,1);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
  }
  if (((val == 0) && (param_1 == 0)) && (iVar2 == 0)) {
    *unaff_ESI = 1;
    return;
  }
  unaff_ESI[1] = val;
  unaff_ESI[2] = param_1;
  unaff_ESI[3] = iVar2;
  if (val != 0) {
    param_2 = val;
    FUN_0053e9e0(&DAT_00740420,&param_2,1,FUN_0051bac0,unaff_ESI,0);
  }
  if (param_1 != 0) {
    param_2 = param_1;
    FUN_0053e9e0(&DAT_00740420,&param_2,1,FUN_0051bac0,unaff_ESI,0);
  }
  if (iVar2 != 0) {
    param_2 = iVar2;
    FUN_0053e9e0(&DAT_00740420,&param_2,1,FUN_0051bac0,unaff_ESI,0);
  }
  return;
}
