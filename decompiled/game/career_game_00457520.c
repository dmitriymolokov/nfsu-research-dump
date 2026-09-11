/* spd-match: far pct=26.56 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00457520 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00578730();
int __cdecl FUN_005791c0();
float10 __fastcall FUN_00457520(int obj)

{
  int iVar1;

  float *pfVar2;
  
  iVar1 = *(int *)(*(int *)(obj + 0x1d4) + 0x1c);
  if (*(int *)(iVar1 + 0xe4) != 0) {
    FUN_005791c0();
  }
  pfVar2 = (float *)FUN_00578730();
  return (float10)*(float *)(iVar1 + 0x90) * (float10)*pfVar2 +
         (float10)*(float *)(iVar1 + 0x94) * (float10)pfVar2[1] +
         (float10)*(float *)(iVar1 + 0x98) * (float10)pfVar2[2];
}
