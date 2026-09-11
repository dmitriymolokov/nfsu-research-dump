/* spd-match: far pct=5.98 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0045B9F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0057b480();
int __cdecl FUN_0057b520();
extern int DAT_006cc7a4;
extern int _DAT_006b74c0;
undefined4 __fastcall FUN_0045b9f0(int * obj, int param_1)

{
  int iVar1;
  int iVar2;

  int iVar3;
  int extraout_EDX;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar1 = *obj;
  if (iVar1 == 1) {
    return 1;
  }
  if ((1 < iVar1) && (iVar1 < 4)) {
    iVar2 = *(int *)(param_1 + 0x394);
    iVar3 = FUN_0057b520();
    iVar3 = *(int *)(*(int *)(param_1 + 0x3a8) + 8 + *(int *)(iVar3 + 0x30) * 4);
    fVar4 = (float10)FUN_0057b480();
    fVar5 = (float10)*(float *)(*(char *)(param_1 + 0x388) * 0x38 + 0x10 + param_1) +
            (float10)*(float *)(extraout_EDX + 8) + (float10)_DAT_006b74c0;
    if (iVar1 == 2) {
      if ((iVar2 < 0) || (4 < iVar2)) {
        if ((iVar2 < 0xb) || (0x10 < iVar2)) {
          fVar6 = (float10)DAT_006cc7a4;
        }
        else {
          fVar6 = (float10)*(float *)(iVar3 + -8 + iVar2 * 4);
        }
      }
      else {
        fVar6 = (float10)*(float *)(iVar3 + 0x20);
      }
      if (fVar6 <= fVar4 - fVar5) {
        return 1;
      }
    }
    else {
      if ((iVar2 < 0) || (4 < iVar2)) {
        if ((iVar2 < 0xb) || (0x10 < iVar2)) {
          fVar6 = (float10)DAT_006cc7a4;
        }
        else {
          fVar6 = (float10)*(float *)(iVar3 + 0x14 + iVar2 * 4);
        }
      }
      else {
        fVar6 = (float10)*(float *)(iVar3 + 0x3c);
      }
      fVar5 = fVar5 + fVar4;
      if (fVar5 < fVar6 != (fVar5 == fVar6)) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}
