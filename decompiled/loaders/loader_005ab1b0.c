/* spd-match: far pct=4.40 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005AB1B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int DAT_0077af30;
float10 __fastcall FUN_005ab1b0(int * obj)

{
  float fVar1;

  int iVar2;
  int iVar3;
  float10 fVar4;
  
  iVar2 = *obj;
  if ((iVar2 < 0) || (iVar3 = (&DAT_0077af30)[iVar2], iVar3 == 0)) {
    fVar4 = (float10)DAT_006cc7a4;
  }
  else {
    if (iVar2 < 0) {
      iVar3 = 0;
    }
    iVar2 = ((int)*(short *)(iVar3 + 0x10) / 2) * 0x88;
    fVar4 = (float10)*(float *)(iVar2 + 0x2a4 + iVar3);
    fVar1 = *(float *)(iVar2 + 0x2a0 + iVar3);
    if (fVar4 < (float10)fVar1) {
      return (float10)fVar1;
    }
  }
  return fVar4;
}
