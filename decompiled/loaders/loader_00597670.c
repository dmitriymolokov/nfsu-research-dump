/* spd-match: far pct=20.11 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00597670 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004407b0();
int __cdecl FUN_00468ec0();
extern int DAT_00736200;
extern int _DAT_006cc7a8;
extern int _DAT_006cc964;
void __fastcall FUN_00597670(int * obj)

{

  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fStack_8;
  float local_4;
  
  if ((float)obj[0x38] <= (float)obj[0x3a]) {
    local_4 = (float)obj[0x38];
  }
  else {
    local_4 = (float)obj[0x3a];
  }
  pfVar1 = (**(float * (**)())(*obj + 0xc))();
  fStack_8 = SQRT(pfVar1[2] * pfVar1[2] + pfVar1[1] * pfVar1[1] + *pfVar1 * *pfVar1) * _DAT_006cc964
  ;
  if (_DAT_006cc7a8 <= fStack_8) {
    fStack_8 = 6.0;
  }
  uVar2 = (**(code **)(*obj + 0xc))();
  uVar3 = (**(code **)(*obj + 8))();
  FUN_004407b0(uVar3,fStack_8 + local_4,uVar2);
  if (DAT_00736200 == 0) {
    FUN_00468ec0();
  }
  return;
}
