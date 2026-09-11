/* spd-match: far pct=2.42 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FA3F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int unaff_ESI;
int __fastcall FUN_004fa3f0(int val, int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  int iVar4;
  int unaff_ESI;
  
  iVar4 = param_1;
  iVar1 = *(int *)(unaff_ESI + 0x68);
  iVar2 = *(int *)(unaff_ESI + 0x5c);
  if (iVar1 == 0) {
    param_1 = -1;
  }
  else {
    if (iVar1 <= val) {
      val = val % iVar1;
    }
    param_1 = val - *(int *)(unaff_ESI + 0x70);
    if ((param_1 < 0) && (param_1 = param_1 + iVar1, param_1 < 0)) {
      if (iVar2 < 2) {
        param_1 = 0;
      }
      else {
        param_1 = iVar2 - -param_1 % iVar2;
      }
    }
    else {
      param_1 = param_1 % iVar2;
    }
  }
  iVar1 = *(int *)(unaff_ESI + 0x6c);
  iVar3 = *(int *)(unaff_ESI + 0x60);
  if (iVar1 == 0) {
    iVar4 = -1;
  }
  else {
    if (iVar1 <= iVar4) {
      iVar4 = iVar4 % iVar1;
    }
    iVar4 = iVar4 - *(int *)(unaff_ESI + 0x74);
    if ((iVar4 < 0) && (iVar4 = iVar4 + iVar1, iVar4 < 0)) {
      if (iVar3 < 2) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar3 - -iVar4 % iVar3;
      }
    }
    else {
      iVar4 = iVar4 % iVar3;
    }
  }
  return (iVar2 * iVar4 + param_1) * 0x30 + *(int *)(unaff_ESI + 0x88);
}
