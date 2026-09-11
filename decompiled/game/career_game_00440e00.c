/* spd-match: far pct=5.72 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00440E00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00438800();
int __cdecl FUN_004407b0();
int __cdecl FUN_00440d30();
int __cdecl FUN_00674898();
extern int _DAT_006b7828;
extern int _DAT_006cc7dc;
undefined4 __fastcall FUN_00440e00(undefined4 val, float *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;

  undefined4 uVar4;
  int iVar5;
  float *unaff_ESI;
  int local_70;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_1c;
  float local_18;
  
  fVar2 = SQRT((*param_1 - *unaff_ESI) * (*param_1 - *unaff_ESI) +
               (param_1[1] - unaff_ESI[1]) * (param_1[1] - unaff_ESI[1]) +
               (param_1[2] - unaff_ESI[2]) * (param_1[2] - unaff_ESI[2]));
  if (fVar2 < _DAT_006b7828) {
    local_60 = (*param_1 + *unaff_ESI) * _DAT_006cc7dc;
    local_5c = (unaff_ESI[1] + param_1[1]) * _DAT_006cc7dc;
    local_58 = (unaff_ESI[2] + param_1[2]) * _DAT_006cc7dc;
    FUN_004407b0(&local_60,fVar2 * _DAT_006cc7dc,0);
    uVar4 = FUN_00440d30(val,param_1,unaff_ESI,0x3f000000);
    return uVar4;
  }
  FUN_00438800(fVar2 / _DAT_006b7828);
  iVar5 = FUN_00674898();
  local_40 = *unaff_ESI;
  local_3c = unaff_ESI[1];
  local_38 = unaff_ESI[2];
  local_70 = 1;
  local_30 = *param_1 - *unaff_ESI;
  local_2c = param_1[1] - unaff_ESI[1];
  local_28 = param_1[2] - unaff_ESI[2];
  if (0 < iVar5) {
    fVar2 = (fVar2 / (float)iVar5) * _DAT_006cc7dc;
    do {
      fVar1 = (float)local_70 / (float)iVar5;
      local_1c = local_2c * fVar1;
      local_18 = local_28 * fVar1;
      local_50 = local_30 * fVar1 + *unaff_ESI;
      local_4c = local_1c + unaff_ESI[1];
      local_48 = local_18 + unaff_ESI[2];
      local_60 = (local_50 + local_40) * _DAT_006cc7dc;
      local_5c = (local_4c + local_3c) * _DAT_006cc7dc;
      local_58 = (local_48 + local_38) * _DAT_006cc7dc;
      FUN_004407b0(&local_60,fVar2,0);
      cVar3 = FUN_00440d30(val,&local_50,&local_40,0x3f000000);
      if (cVar3 != '\0') {
        return 1;
      }
      local_3c = local_4c;
      local_38 = local_48;
      local_70 = local_70 + 1;
      local_40 = local_50;
    } while (local_70 <= iVar5);
    return 0;
  }
  return 0;
}
