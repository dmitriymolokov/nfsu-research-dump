/* spd-match: far pct=8.75 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-c2198-005850a0/va_005850A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00565230();
int unaff_ESI;
int __cdecl FUN_005abda2();
int __cdecl FUN_005ac68f();
void __fastcall FUN_005850a0(float * obj, float *param_1, float *param_2, undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  int unaff_ESI;
  int iStack_118;
  int iStack_114;
  undefined1 auStack_dc [4];
  float local_d8;
  undefined1 local_d0 [52];
  undefined1 auStack_9c [52];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [88];
  
  fVar1 = *(float *)(unaff_ESI + 0x74);
  fVar2 = obj[1];
  fVar3 = *(float *)(unaff_ESI + 0x78);
  fVar4 = obj[2];
  local_d8 = *param_1 * obj[1] - *obj * param_1[1];
  *param_2 = (*(float *)(unaff_ESI + 0x70) + *obj) * *(float *)(unaff_ESI + 0x148);
  param_2[1] = (fVar1 + fVar2) * *(float *)(unaff_ESI + 0x148);
  param_2[2] = (fVar3 + fVar4) * *(float *)(unaff_ESI + 0x148);
  iStack_114 = 0x585145;
  FUN_00565230();
  iStack_118 = unaff_ESI + 400;
  if (*(int *)(unaff_ESI + 0x138) == 0) {
    iStack_118 = unaff_ESI + 0x150;
  }
  iStack_114 = unaff_ESI + 0x30;
  FUN_005ac68f(local_d0);
  FUN_005ac68f(auStack_5c,auStack_9c,auStack_dc);
  FUN_005abda2(param_3,&iStack_118,auStack_68);
  return;
}
