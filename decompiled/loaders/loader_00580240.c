/* spd-match: far pct=4.03 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-cefam-ce_types_code/va_00580240 */
#include "ghidra_compat.h"

#ifdef NAN
#undef NAN
#endif
#define NAN(x) ((x)!=(x))

int __cdecl FUN_0057f2b0();
float10 __cdecl FUN_00583ea0(float);
extern unsigned char *_DAT_006b5bd4;
float10 __fastcall FUN_00580240(int obj)

{
  float fVar1;

  float10 fVar2;
  undefined4 local_4;
  
  if (*(char *)(obj + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  local_4 = *(float *)(obj + 0x414);
  fVar1 = *(float *)(obj + 0x418);
  if ((!NAN(local_4) && !NAN(fVar1)) && local_4 < fVar1 != (local_4 == fVar1)) {
    do {
      fVar2 = (float10)FUN_00583ea0(local_4);
      if (fVar2 < ((float10)local_4 * (float10)*(float *)(obj + 0x2c0) * (float10)local_4) /
                  (float10)*(float *)(obj + 0x170)) break;
      local_4 = *(float *)&_DAT_006b5bd4 + local_4;
      fVar1 = *(float *)(obj + 0x418);
    } while ((!NAN(local_4) && !NAN(fVar1)) && local_4 < fVar1 != (local_4 == fVar1));
  }
  return (float10)local_4;
}
