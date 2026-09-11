/* spd-match: far pct=10.14 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005AADF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc798;
extern void LAB_005aae17(void);
void __fastcall FUN_005aadf0(int obj, int param_1, int param_2, undefined4 param_3, float param_4)

{
  float fVar1;
  short sVar2;

  int iVar3;
  int iVar4;
  
  if (*(int *)(*(int *)(obj + 0x14) + 4) == 3) {
    sVar2 = *(short *)(obj + 10);
    iVar3 = 0;
    do {
      if (*(char *)(param_2 + 4 + iVar3) == param_1) goto LAB_005aae17;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    iVar3 = -1;
LAB_005aae17:
    iVar4 = (sVar2 + -0x32) * 0x10 + param_2;
    *(undefined4 *)(iVar4 + 0x18) = param_3;
    *(undefined1 *)(iVar4 + 0x10) = 1;
    *(float *)(iVar4 + 0x1c) = param_4;
    *(int *)(iVar4 + 0x14) = iVar3;
    if (iVar3 == -1) {
      *(undefined1 *)(iVar4 + 0x10) = 0;
    }
    else {
      iVar4 = (int)*(char *)(iVar3 + 6 + param_2);
      fVar1 = _DAT_006cc798;
      if (iVar4 != -1) {
        fVar1 = *(float *)(iVar4 * 0x10 + -0x304 + param_2);
      }
      if (param_4 < fVar1) {
        *(char *)(iVar3 + 6 + param_2) = (char)sVar2;
        return;
      }
    }
  }
  return;
}
