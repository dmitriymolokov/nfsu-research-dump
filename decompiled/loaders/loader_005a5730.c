/* spd-match: far pct=11.36 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A5730 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00458b90();
int __cdecl FUN_005a5340();
int __cdecl FUN_005a55b0();
int __cdecl FUN_005a57f0();
int __cdecl FUN_005a58d0();
int __cdecl FUN_005a5c30();
int __cdecl FUN_005a5ef0();
int __cdecl FUN_005a6080();
void __fastcall FUN_005a5730(int obj, int *param_1, float param_2)

{
  int iVar1;
  int iVar2;

  int iVar3;
  float10 fVar4;
  
  iVar2 = (int)param_2;
  iVar3 = FUN_005a5ef0(obj,param_1);
  param_2 = 0.0;
  if (iVar3 == -1) {
    FUN_005a5340();
  }
  else {
    iVar1 = *(int *)(obj + 8 + iVar3 * 4);
    (**(code **)(**(int **)(iVar2 + 0x2c) + 0x24))();
    FUN_005a6080(iVar2);
    param_2 = *(float *)(iVar1 + 0x58);
    *(int *)(obj + 0xac) = iVar3;
  }
  if (*param_1 != 0) {
    if (*(int *)(obj + 4) == 0) {
      FUN_005a57f0(obj);
    }
    else {
      fVar4 = (float10)FUN_00458b90();
      FUN_005a58d0(obj,(float)(fVar4 + (float10)param_2));
    }
    FUN_005a55b0(iVar2);
    FUN_005a5c30(obj);
  }
  return;
}
