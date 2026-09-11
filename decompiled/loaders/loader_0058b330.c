/* spd-match: far pct=12.50 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058B330 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00448070();
int __cdecl FUN_00448110();
int __cdecl FUN_004482f0();
int __cdecl FUN_0053e4f0();
int __cdecl FUN_0053eed0();
int __cdecl FUN_0058cac0();
int __cdecl FUN_0058cdc0();
int __cdecl FUN_00594c60();
int __cdecl FUN_00594d40();
extern int DAT_00743c20;
void __fastcall FUN_0058b330(int val, int param_1)

{
  int iVar1;

  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int unaff_EDI;
  
  if (val != 0) {
    FUN_0058cac0(param_1,0x20000,0);
    *(undefined1 *)(unaff_EDI + 0x5a) = 1;
    *(undefined4 *)(param_1 + 0x14) = 1;
    FUN_0053eed0(&DAT_00743c20,unaff_EDI + 8,FUN_0058cdc0,unaff_EDI,4);
    uVar2 = FUN_0053e4f0(&DAT_00743c20,unaff_EDI + 8);
    *(undefined4 *)(unaff_EDI + 0x50) = uVar2;
    return;
  }
  iVar1 = unaff_EDI + 8;
  uVar2 = FUN_004482f0(iVar1,6,0,0,0);
  *(undefined4 *)(unaff_EDI + 0x54) = uVar2;
  iVar3 = FUN_00594c60(iVar1,1,1);
  if (iVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = ((int)*(uint *)(iVar3 + 4) < 0) - 1 & *(uint *)(iVar3 + 4);
    FUN_00594d40();
  }
  *(undefined1 *)(unaff_EDI + 0x5b) = 0;
  iVar3 = FUN_0058cac0(param_1,uVar4,0);
  if (iVar3 != 0) {
    *(undefined1 *)(unaff_EDI + 0x5b) = 1;
  }
  FUN_00448070(iVar1);
  *(undefined1 *)(unaff_EDI + 0x5a) = 1;
  *(undefined4 *)(param_1 + 0x14) = 1;
  FUN_00448110();
  return;
}
