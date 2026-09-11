/* spd-match: far pct=31.11 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_0046D700 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_007361a8;
extern int DAT_0078a344;

struct ThisCallBox {
  float10 FUN_0046d700(int obj, int param_2);
};
float10 ThisCallBox::FUN_0046d700(int obj, int param_2)

{
  float fVar1;
  float fVar2;

  float10 fVar3;
  
  if (((char)this) == '\0') {
    fVar1 = *(float *)(obj + 0x78);
  }
  else {
    fVar1 = *(float *)(obj + 200);
  }
  fVar1 = fVar1 + *(float *)(obj + 0x80 + param_2 * 4);
  if ((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) {
    fVar2 = *(float *)(*(int *)(*(int *)(obj + 0x20) + 0x18) + 4);
  }
  else {
    fVar2 = *(float *)(*(int *)(*(int *)(obj + 0x20) + 0x18) + 8);
  }
  fVar3 = (float10)fVar2;
  if ((float10)fVar1 <= fVar3) {
    fVar3 = (float10)fVar1;
  }
  return fVar3;
}
