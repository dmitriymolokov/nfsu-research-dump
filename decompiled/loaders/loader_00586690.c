/* spd-match: far pct=8.26 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00586690 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004387e0();
int __cdecl FUN_00438800();
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc9fc;
extern int _DAT_006cca38;
float10 __fastcall FUN_00586690(int * obj, float param_1)

{
  float fVar1;

  float10 fVar2;
  undefined4 local_4;
  
  fVar1 = ((float)*obj * _DAT_006cca38) / param_1;
  fVar2 = (float10)FUN_004387e0(fVar1);
  if ((float10)fVar1 < fVar2) {
    fVar2 = fVar2 - (float10)_DAT_006cc7bc;
  }
  local_4 = (float)fVar2;
  if (_DAT_006cc7dc <= fVar1 - local_4) {
    fVar2 = (float10)local_4 + (float10)_DAT_006cc7bc;
  }
  fVar2 = (float10)FUN_00438800((float)(fVar2 * (float10)param_1 * (float10)_DAT_006cc9fc));
  return fVar2 * (float10)_DAT_006cca38;
}
