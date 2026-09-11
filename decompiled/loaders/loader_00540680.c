/* spd-match: far pct=6.74 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00540680 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040cb70();
int __cdecl FUN_0053e400();
int __cdecl FUN_00540630();
int __cdecl FUN_005648f0();
extern int DAT_006f41ac;
extern int DAT_007349c8;
extern int DAT_00743c58;
extern int _DAT_007301d0;
extern int _DAT_00735578;
extern void LAB_0054078e(void);
int __fastcall FUN_00540680(int obj, int param_1)

{
  undefined4 uVar1;

  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float10 fVar6;
  int local_c;
  LARGE_INTEGER local_8;
  
  QueryPerformanceCounter(&local_8);
  iVar2 = __allshr();
  if (DAT_006f41ac == 0) {
    if (DAT_00743c58 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = ((int)DAT_00743c58) + -4;
    }
    iVar4 = FUN_0040cb70();
    while (iVar3 != iVar4) {
      if (*(int *)(iVar3 + 0x10) == param_1) {
        QueryPerformanceCounter(&local_8);
        uVar1 = DAT_007349c8;
        local_c = __allshr();
        local_c = local_c - iVar2;
        if (local_c < 0) {
          local_c = 0;
        }
        bVar5 = (byte)uVar1;
        goto LAB_0054078e;
      }
      if (*(int *)(iVar3 + 4) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 4) + -4;
      }
    }
  }
  else {
    if (obj == 0) {
      iVar3 = FUN_00540630(param_1);
    }
    else {
      iVar3 = FUN_0053e400(param_1,*(undefined4 *)(obj + 0x78),0);
    }
    if (iVar3 != 0) {
      QueryPerformanceCounter(&local_8);
      __allshr();
      fVar6 = (float10)FUN_005648f0();
      _DAT_00735578 = (float)(fVar6 + (float10)((int)_DAT_00735578));
      return *(int *)(iVar3 + 4);
    }
  }
  QueryPerformanceCounter(&local_8);
  uVar1 = DAT_007349c8;
  local_c = __allshr();
  local_c = local_c - iVar2;
  if (local_c < 0) {
    local_c = 0;
  }
  bVar5 = (byte)uVar1;
  iVar3 = 0;
LAB_0054078e:
  _DAT_00735578 = (float)(1 << (bVar5 & 0x1f)) * (float)local_c * ((int)_DAT_007301d0) + _DAT_00735578;
  return iVar3;
}
