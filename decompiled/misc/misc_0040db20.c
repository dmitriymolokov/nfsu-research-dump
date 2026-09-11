/* spd-match: far pct=6.07 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0040DB20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040da30();
extern int DAT_006cc7a4;
extern int _DAT_006cc7dc;
char __fastcall FUN_0040db20(int val, float *param_1, float *param_2, int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;

  float *pfVar7;
  int iVar8;
  float local_40;
  float local_3c;
  float local_38;
  float local_20;
  float local_1c;
  float local_18;
  
  local_1c = param_2[1];
  local_18 = param_2[2];
  local_20 = *param_2;
  local_40 = *param_1;
  local_3c = param_1[1];
  local_38 = param_1[2];
  if (val != 0) {
    FUN_0040da30(&local_20,&local_40);
  }
  bVar6 = false;
  iVar8 = 1;
  fVar1 = (local_40 + local_20) * _DAT_006cc7dc;
  pfVar7 = (float *)(*param_3 + 0xc4);
  fVar2 = (local_3c + local_1c) * _DAT_006cc7dc;
  fVar3 = (local_38 + local_18) * _DAT_006cc7dc;
  do {
    fVar4 = ABS(*pfVar7) * (local_3c - fVar2) +
            ABS(pfVar7[-1]) * (local_40 - fVar1) + ABS(pfVar7[1]) * (local_38 - fVar3);
    fVar5 = fVar2 * *pfVar7 + fVar1 * pfVar7[-1] + fVar3 * pfVar7[1] + pfVar7[2];
    if (fVar5 + fVar4 < DAT_006cc7a4) {
      return '\0';
    }
    if (fVar5 - fVar4 < DAT_006cc7a4) {
      bVar6 = true;
    }
    iVar8 = iVar8 + 1;
    pfVar7 = pfVar7 + 4;
  } while (iVar8 < 7);
  return !bVar6 + '\x01';
}
