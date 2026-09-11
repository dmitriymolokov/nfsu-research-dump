/* spd-match: far pct=14.60 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00479160 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006ffe54;
extern int _DAT_006cc7bc;
extern int _DAT_006cca20;
void __fastcall FUN_00479160(int obj, float param_1)

{
  float fVar1;

  if (DAT_006ffe54 == 0) {
    param_1 = _DAT_006cc7bc;
  }
  fVar1 = param_1;
  if ((*(char *)(*(int *)(obj + 0x5c) + 0x86c) != '\0') &&
     (*(char *)(*(int *)(*(int *)(obj + 0x5c) + 0x3c) + 0x1c) != '\0')) {
    fVar1 = _DAT_006cca20 * param_1;
  }
  *(float *)(*(int *)(obj + 0x48) + 0xa0) = fVar1;
  *(float *)(*(int *)(obj + 0x20) + 0x1e8) = param_1;
  *(float *)(*(int *)(obj + 0x50) + 8) = param_1;
  *(float *)(*(int *)(obj + 0x50) + 0xc) =
       _DAT_006cc7bc - *(float *)(*(int *)(obj + 0x5c) + 0x47c);
  *(float *)(*(int *)(obj + 0x38) + 0x17c) = param_1;
  *(float *)(*(int *)(obj + 0x3c) + 0x17c) = param_1;
  *(float *)(*(int *)(obj + 0x40) + 0x17c) = param_1;
  *(float *)(*(int *)(obj + 0x44) + 0x17c) = param_1;
  return;
}
