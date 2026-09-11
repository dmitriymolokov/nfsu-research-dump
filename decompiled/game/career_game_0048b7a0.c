/* spd-match: far pct=9.38 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0048B7A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00424ba0();
int __cdecl FUN_00567370();
int unaff_ESI;
int __fastcall FUN_0048b7a0(int * obj)

{
  float fVar1;
  float fVar2;
  char cVar3;

  int iVar4;
  float *unaff_ESI;
  
  cVar3 = (**(code **)(*obj + 0x24))();
  if (cVar3 != '\0') {
    *unaff_ESI = 1.0;
    unaff_ESI[1] = 0.0;
    unaff_ESI[2] = 0.0;
    unaff_ESI[3] = 0.0;
    unaff_ESI[4] = 0.0;
    unaff_ESI[5] = 1.0;
    unaff_ESI[6] = 0.0;
    unaff_ESI[7] = 0.0;
    unaff_ESI[8] = 0.0;
    unaff_ESI[9] = 0.0;
    unaff_ESI[10] = 1.0;
    unaff_ESI[0xb] = 0.0;
    unaff_ESI[0xc] = 0.0;
    unaff_ESI[0xd] = 0.0;
    unaff_ESI[0xe] = 0.0;
    unaff_ESI[0xf] = 1.0;
    FUN_00567370();
    unaff_ESI[4] = unaff_ESI[9] * unaff_ESI[2] - unaff_ESI[1] * unaff_ESI[10];
    unaff_ESI[5] = unaff_ESI[10] * *unaff_ESI - unaff_ESI[8] * unaff_ESI[2];
    unaff_ESI[6] = unaff_ESI[1] * unaff_ESI[8] - unaff_ESI[9] * *unaff_ESI;
    unaff_ESI[8] = unaff_ESI[6] * unaff_ESI[1] - unaff_ESI[2] * unaff_ESI[5];
    unaff_ESI[9] = unaff_ESI[4] * unaff_ESI[2] - unaff_ESI[6] * *unaff_ESI;
    unaff_ESI[10] = *unaff_ESI * unaff_ESI[5] - unaff_ESI[1] * unaff_ESI[4];
    iVar4 = obj[0xb];
    fVar1 = *(float *)(iVar4 + 0x54);
    fVar2 = *(float *)(iVar4 + 0x58);
    unaff_ESI[0xc] = *(float *)(iVar4 + 0x50);
    unaff_ESI[0xd] = fVar1;
    unaff_ESI[0xf] = 1.0;
    unaff_ESI[0xe] = fVar2;
    return iVar4 + 0x50;
  }
  iVar4 = FUN_00424ba0();
  return iVar4;
}
