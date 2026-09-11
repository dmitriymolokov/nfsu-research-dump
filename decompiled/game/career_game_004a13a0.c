/* spd-match: far pct=3.47 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A13A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041ffe0();
int __cdecl FUN_0042a6b0();
int __cdecl FUN_004a1460();
int __cdecl FUN_004a14d0();
int __cdecl FUN_004f6a70();
extern int DAT_006fbf14;
extern int DAT_007361a8;
extern int DAT_0078a344;
void __fastcall FUN_004a13a0(int obj, int param_1)

{

  float10 fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((DAT_006fbf14 == 0) && (*(int *)(obj + 0x10) == 0)) {
    FUN_0041ffe0();
  }
  fVar1 = (float10)FUN_0042a6b0();
  if ((*(uint *)(param_1 + 0x18) & *(uint *)(param_1 + 0x10)) != 0 ||
      (*(uint *)(param_1 + 0x1c) & *(uint *)(param_1 + 0x14)) != 0) {
    FUN_004a14d0();
    if ((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) {
      uVar3 = 0x435b0000;
      uVar2 = 0x41f00000;
    }
    else {
      uVar3 = 0x42700000;
      uVar2 = 0x43960000;
    }
    fVar1 = (float10)FUN_004a1460(param_1,(float)fVar1,uVar2,uVar3);
    FUN_004f6a70((float)fVar1);
  }
  return;
}
