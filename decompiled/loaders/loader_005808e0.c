/* spd-match: far pct=5.24 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005808E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0057f2b0();
extern int _DAT_006cc7dc;
extern int _DAT_006cc920;
extern int _DAT_006cca94;
extern int _DAT_006ccc50;
extern int _DAT_006ccc54;
extern int _DAT_006f0d58;
extern int _DAT_006f0d5c;
int unaff_ESI;
undefined4 __fastcall FUN_005808e0(int obj)

{
  float fVar1;
  float fVar2;

  undefined4 uVar3;
  int unaff_ESI;
  
  if (*(char *)(obj + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  fVar1 = (*(float *)(obj + 0x428) - _DAT_006f0d58) * _DAT_006cca94;
  fVar2 = _DAT_006f0d5c - _DAT_006f0d58;
  if (*(char *)(unaff_ESI + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  fVar1 = ((*(float *)(unaff_ESI + 0x428) - _DAT_006f0d58) * _DAT_006cca94) /
          (_DAT_006f0d5c - _DAT_006f0d58) - fVar1 / fVar2;
  if (fVar1 < _DAT_006ccc50) {
    return 0xfffffffe;
  }
  if (fVar1 < _DAT_006cc920) {
    return 0xffffffff;
  }
  if (fVar1 < _DAT_006cc7dc) {
    return 0;
  }
  uVar3 = 1;
  if (_DAT_006ccc54 <= fVar1) {
    uVar3 = 2;
  }
  return uVar3;
}
