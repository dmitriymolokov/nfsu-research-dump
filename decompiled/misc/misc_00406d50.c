/* spd-match: far pct=13.59 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00406D50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00564b10();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int _DAT_006b7cb0;
extern int _DAT_006cc79c;
extern int _DAT_006cc858;
extern int _DAT_006cca30;
extern int _DAT_006cca4c;
undefined4 __fastcall FUN_00406d50(int val)

{
  float fVar1;

  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float)val;
  if (val < 0) {
    fVar1 = fVar1 + _DAT_006cc858;
  }
  FUN_00674898(fVar1 * _DAT_006cc79c * (float)_DAT_006b7cb0 * (float)_DAT_006cca30 * _DAT_006cca4c);
  fVar2 = (float10)FUN_00564b10();
  FUN_00674898();
  fVar3 = (float10)FUN_00564b10();
  if (ABS(fVar3) < ABS((float10)(float)fVar2)) {
    if (DAT_006cc7a4 < (float)fVar2) {
      return 1;
    }
    return 0;
  }
  if ((float10)DAT_006cc7a4 < fVar3) {
    return 3;
  }
  return 2;
}
