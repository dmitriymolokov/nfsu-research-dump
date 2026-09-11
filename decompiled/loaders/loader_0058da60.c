/* spd-match: far pct=5.91 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058DA60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0058d5d0();
int __cdecl FUN_0058d9e0();
extern int DAT_006cc7a4;
extern int _DAT_006b5ae0;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7cc;
void __fastcall FUN_0058da60(int obj, float param_1, float param_2, float param_3)

{
  float fVar1;
  int iVar2;

  int iVar3;
  
  iVar2 = (int)param_1;
  fVar1 = (float)*(byte *)(obj + 0x14 + (int)param_1) * _DAT_006cc7cc;
  param_2 = param_2 + fVar1;
  param_1 = DAT_006cc7a4;
  if ((DAT_006cc7a4 < param_2) && (param_1 = param_2, _DAT_006cc7bc < param_2)) {
    param_1 = 1.0;
  }
  if (fVar1 != param_1) {
    FUN_0058d5d0(param_1);
    iVar3 = FUN_0058d9e0(iVar2);
    if (iVar3 != *(int *)(iVar2 + 0xe0)) {
      if (param_3 < _DAT_006b5ae0) {
        FUN_0058d5d0(fVar1);
        return;
      }
      *(int *)(iVar2 + 0xe0) = iVar3;
    }
  }
  return;
}
