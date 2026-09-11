/* spd-match: far pct=3.55 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00434150 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
void __fastcall FUN_00434150(int obj)

{
  float fVar1;

  float *pfVar2;
  int iVar3;
  
  iVar3 = 0;
  pfVar2 = (float *)(obj + 0xe4);
  fVar1 = DAT_006cc7a4;
  do {
    if (fVar1 <= pfVar2[-1]) {
      fVar1 = pfVar2[-1];
    }
    if (fVar1 <= *pfVar2) {
      fVar1 = *pfVar2;
    }
    if (fVar1 <= pfVar2[1]) {
      fVar1 = pfVar2[1];
    }
    if (fVar1 <= pfVar2[2]) {
      fVar1 = pfVar2[2];
    }
    if (fVar1 <= pfVar2[3]) {
      fVar1 = pfVar2[3];
    }
    if (fVar1 <= pfVar2[4]) {
      fVar1 = pfVar2[4];
    }
    if (fVar1 <= pfVar2[5]) {
      fVar1 = pfVar2[5];
    }
    if (fVar1 <= pfVar2[6]) {
      fVar1 = pfVar2[6];
    }
    iVar3 = iVar3 + 8;
    pfVar2 = pfVar2 + 8;
  } while (iVar3 < 4);
  if (iVar3 < 0xb) {
    pfVar2 = (float *)(obj + 0xe0 + iVar3 * 4);
    iVar3 = 0xb - iVar3;
    do {
      if (fVar1 <= *pfVar2) {
        fVar1 = *pfVar2;
      }
      pfVar2 = pfVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}
