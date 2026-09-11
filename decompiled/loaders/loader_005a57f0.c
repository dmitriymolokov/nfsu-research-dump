/* spd-match: far pct=10.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A57F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005a5510();
int __cdecl FUN_005a58d0();
extern int DAT_00700680;
int unaff_EDI;
void __fastcall FUN_005a57f0(int * obj, float param_1)

{
  float fVar1;
  undefined4 uVar2;

  int iVar3;
  int unaff_EDI;
  float10 fVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = param_1;
  param_1 = 0.0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (*obj == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (int)*(short *)(*obj + 10);
  }
  FUN_005a5510(uVar2,iVar3,&param_1,&local_18,0,0);
  fVar1 = *(float *)((*(int **)(unaff_EDI + 0x2c))[1] + 0x3d4);
  param_1 = DAT_00700680;
  fVar4 = (**(float10 (**)())(**(int **)(unaff_EDI + 0x2c) + 0x50))();
  fVar4 = fVar4 * (float10)fVar1;
  if ((float10)param_1 < fVar4) {
    param_1 = (float)fVar4;
  }
  FUN_005a58d0(uVar2,param_1);
  return;
}
