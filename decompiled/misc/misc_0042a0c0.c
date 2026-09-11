/* spd-match: far pct=44.71 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042A0C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00583f20();
extern int DAT_006cc7a4;
extern int DAT_0073ad34;
extern int _DAT_006b7bf4;
extern int _DAT_006cca38;
extern unsigned char *PTR_DAT_00706470;
float10 __fastcall FUN_0042a0c0(int obj)

{
  int iVar1;
  float fVar2;

  float10 fVar3;
  
  iVar1 = *(int *)(*(int *)(obj + 0x3c) + 0x14c);
  if ((iVar1 != 0) && (iVar1 != 0x7fffffff)) {
    fVar2 = (float)(DAT_0073ad34 - iVar1) * _DAT_006cca38;
    if (fVar2 < _DAT_006b7bf4) {
      fVar3 = (float10)FUN_00583f20(&PTR_DAT_00706470,fVar2);
      return fVar3;
    }
  }
  return (float10)DAT_006cc7a4;
}
