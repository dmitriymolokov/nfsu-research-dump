/* spd-match: far pct=28.57 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005047D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004323f0();
int __cdecl FUN_004ac5a0();
int __cdecl FUN_004b0e50();
int __cdecl FUN_004b2330();
int __cdecl FUN_005044b0();
int __cdecl FUN_00504550();
int __cdecl FUN_00504630();
int __cdecl FUN_0051aed0();
int __cdecl FUN_0057ea80();
int __cdecl FUN_0057f2b0();
extern int DAT_00748850;
extern int _DAT_0072cc80;
void __fastcall FUN_005047d0(int val, undefined4 param_1, int param_2)

{
  int iVar1;

  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(*(int *)(param_2 + 8) + 0x2e0 + val * 4) = param_1;
  if (val == 8) {
    uVar4 = 0;
    uVar2 = FUN_00504550(param_1,0);
    FUN_005044b0(uVar2,uVar4);
  }
  iVar1 = param_2 + 0x730;
  FUN_004ac5a0(*(undefined4 *)(param_2 + 8),0,iVar1);
  iVar3 = FUN_00504630(0xc,*(undefined4 *)(param_2 + 0x740));
  if (iVar3 != 0) {
    *(int *)(param_2 + 0xbac) = iVar3;
    *(char *)(param_2 + 0xd68) = *(char *)(param_2 + 0xd68) + '\x01';
    FUN_0057ea80(iVar1);
  }
  FUN_0057f2b0(1);
  FUN_004323f0(param_2 + 0x10,iVar1);
  iVar3 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,iVar1);
  _DAT_0072cc80 = 2;
  if (iVar3 != 0) {
    FUN_004b0e50(iVar3,&DAT_00748850,2);
  }
  FUN_0051aed0();
  return;
}
