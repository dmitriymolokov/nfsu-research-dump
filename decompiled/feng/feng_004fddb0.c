/* spd-match: far pct=48.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FDDB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
void __fastcall FUN_004fddb0(int obj)

{
  float fVar1;

  float *pfVar2;
  uint uVar3;
  
  pfVar2 = *(float **)(obj + 0x74);
  uVar3 = 0;
  fVar1 = DAT_006cc7a4;
  if (*(int *)(obj + 0x5c) != 0) {
    do {
      pfVar2[1] = fVar1;
      fVar1 = fVar1 + *pfVar2;
      pfVar2 = pfVar2 + 3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(obj + 0x5c));
  }
  pfVar2 = *(float **)(obj + 0x78);
  uVar3 = 0;
  fVar1 = DAT_006cc7a4;
  if (*(int *)(obj + 0x60) != 0) {
    do {
      pfVar2[1] = fVar1;
      fVar1 = fVar1 + *pfVar2;
      pfVar2 = pfVar2 + 3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(obj + 0x60));
  }
  return;
}
