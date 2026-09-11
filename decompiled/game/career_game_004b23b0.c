/* spd-match: far pct=13.33 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004B23B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004323f0();
int __cdecl FUN_004b0e50();
int __cdecl FUN_004b2330();
extern int DAT_00748120;
extern int DAT_00748850;
extern int _DAT_0072cc7c;
extern int _DAT_0072cc80;
void __fastcall FUN_004b23b0(int val, undefined4 param_1, undefined4 param_2)

{

  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_004b2330();
  puVar2 = (undefined4 *)&DAT_00748120;
  if (val != 1) {
    puVar2 = &DAT_00748850;
  }
  FUN_004323f0(puVar2,param_1);
  if (puVar2 == &DAT_00748850) {
    _DAT_0072cc80 = param_2;
  }
  else if (puVar2 == (undefined4 *)&DAT_00748120) {
    _DAT_0072cc7c = param_2;
  }
  if (iVar1 != 0) {
    FUN_004b0e50(iVar1,puVar2,param_2);
  }
  return;
}
