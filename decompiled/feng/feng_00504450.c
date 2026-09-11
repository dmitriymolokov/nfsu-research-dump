/* spd-match: far pct=22.22 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00504450 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004323f0();
int __cdecl FUN_004b0e50();
int __cdecl FUN_004b2330();
int __cdecl FUN_0057ea80();
extern int DAT_00748850;
extern int _DAT_0072cc80;
void __fastcall FUN_00504450(int val, undefined4 param_1, int param_2)

{

  int iVar1;
  
  *(undefined4 *)(param_2 + 0x72c) = param_1;
  *(undefined4 *)(param_2 + 0x45c + val * 4) = param_1;
  *(char *)(param_2 + 0x63c + val) = *(char *)(param_2 + 0x63c + val) + '\x01';
  FUN_0057ea80(param_2 + 0x10);
  iVar1 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,param_2 + 0x10);
  _DAT_0072cc80 = 2;
  if (iVar1 != 0) {
    FUN_004b0e50(iVar1,&DAT_00748850,2);
  }
  return;
}
