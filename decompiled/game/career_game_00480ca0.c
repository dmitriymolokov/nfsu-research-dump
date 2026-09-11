/* spd-match: far pct=21.29 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_00480CA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
double __cdecl sqrt(double);
int __cdecl abs(int);

int __cdecl FUN_00480b40(...);
extern int DAT_006cc7a4;
extern int _DAT_006b6f80;
extern int _DAT_006b6fa4;
extern int _DAT_006b6fa8;

struct ThisCallBox {
  void FUN_00480ca0(int obj, float param_2);
};
void ThisCallBox::FUN_00480ca0(int obj, float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;

  fVar2 = DAT_006cc7a4;
  if (((int)this) != 0) {
    fVar2 = (float)(((int)this) + -1) * ((int)_DAT_006b6f80) + *(float *)(obj + 0xccc) + _DAT_006b6fa4;
  }
  fVar3 = (((int)_DAT_006b6fa8) + *(float *)(obj + 0xcd0)) -
          (float)((*(int *)(obj + 0xcb0) - ((int)this)) + -1) * ((int)_DAT_006b6f80);
  pfVar1 = (float *)(((int)this) * 0x4c + 0xd8 + obj);
  param_2 = param_2 + *pfVar1;
  if (fVar2 < param_2) {
    fVar2 = param_2;
  }
  if (fVar3 < fVar2) {
    fVar2 = fVar3;
  }
  *pfVar1 = fVar2;
  FUN_00480b40(((int)this));
  return;
}
