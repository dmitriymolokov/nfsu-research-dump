/* spd-match: far pct=9.17 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00474DD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00567370();
int __cdecl FUN_005673e0();
int __cdecl FUN_00567540();
int __cdecl FUN_00583f20();
int __cdecl FUN_00584e00();
extern int DAT_006cc7a4;
extern int _DAT_006b71d0;
extern int _DAT_006b71d4;
extern int _DAT_006cc7bc;
extern int _DAT_006ccb7c;
extern unsigned char *PTR_DAT_00705e98;
void __fastcall FUN_00474dd0(int obj)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  float *extraout_ECX;
  float *extraout_ECX_00;
  float10 fVar8;
  
  if (*(int *)(*(int *)(obj + 0x34) + 0x38) != 1) {
    iVar3 = *(int *)(*(int *)(obj + 0x34) + 0x3cc);
    if (iVar3 < 2) {
      iVar4 = *(int *)(obj + 0x20);
      fVar8 = (float10)FUN_00583f20(&PTR_DAT_00705e98,
                                    SQRT(*(float *)(iVar4 + 200) * *(float *)(iVar4 + 200) +
                                         *(float *)(iVar4 + 0xc4) * *(float *)(iVar4 + 0xc4) +
                                         *(float *)(iVar4 + 0xc0) * *(float *)(iVar4 + 0xc0)));
      fVar8 = -(fVar8 * (float10)*(float *)(iVar4 + 0x144));
      *(float *)(iVar4 + 0x120) =
           (float)(fVar8 * (float10)*(float *)(iVar4 + 0xc0) + (float10)*(float *)(iVar4 + 0x120));
      *(float *)(iVar4 + 0x124) =
           (float)((float10)*(float *)(iVar4 + 0xc4) * fVar8) + *(float *)(iVar4 + 0x124);
      *(float *)(iVar4 + 0x128) =
           (float)((float10)*(float *)(iVar4 + 200) * fVar8) + *(float *)(iVar4 + 0x128);
    }
    if ((iVar3 == 0) && (iVar3 = *(int *)(obj + 0x34), _DAT_006b71d4 < *(float *)(iVar3 + 0xb8)))
    {
      fVar1 = *(float *)(iVar3 + 0x70);
      fVar2 = *(float *)(iVar3 + 0x74);
      fVar5 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
      if (_DAT_006ccb7c < fVar5) {
        fVar5 = _DAT_006cc7bc / fVar5;
        fVar6 = fVar5 * DAT_006cc7a4;
        FUN_00567540();
        fVar7 = ((fVar1 * fVar5 * *extraout_ECX +
                 fVar6 * extraout_ECX[2] + fVar2 * fVar5 * extraout_ECX[1]) - _DAT_006cc7bc) *
                *(float *)(*(int *)(obj + 0x20) + 0x144) * _DAT_006b71d0;
        if (_DAT_006ccb7c <= fVar7) {
          FUN_005673e0(fVar7);
        }
        FUN_00584e00();
        FUN_00567540();
        FUN_00567370();
        FUN_00567540();
        fVar1 = ((fVar1 * fVar5 * *extraout_ECX_00 +
                 fVar6 * extraout_ECX_00[2] + fVar2 * fVar5 * extraout_ECX_00[1]) - _DAT_006cc7bc) *
                *(float *)(*(int *)(obj + 0x20) + 0x144) * _DAT_006b71d0;
        if (_DAT_006ccb7c <= fVar1) {
          FUN_005673e0(fVar1);
          FUN_00584e00();
          return;
        }
        FUN_00584e00();
        return;
      }
    }
  }
  return;
}
