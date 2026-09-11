/* spd-match: far pct=9.72 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00476240 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00584e30();
extern int DAT_006cc7a4;
extern int _DAT_006f073c;
float10 __fastcall FUN_00476240(int obj, int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;

  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float local_ac;
  float *local_a8;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float local_7c;
  float local_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_5c;
  float fStack_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_38;
  float fStack_28;
  float fStack_20;
  
  iVar5 = 0;
  local_a8 = (float *)(obj + 0x2f0);
  pfVar4 = (float *)(param_1 + 0x34);
  local_ac = 0.0;
  pfVar6 = (float *)(param_1 + 0xe8);
  do {
    if (DAT_006cc7a4 < pfVar4[0x25]) {
      pfVar1 = *(float **)(param_1 + 0x18);
      local_7c = -pfVar1[1];
      local_78 = -pfVar1[2];
      local_50 = -*pfVar1 + *(float *)(iVar5 + 0x10 + (int)pfVar1);
      local_4c = *(float *)(iVar5 + 0x14 + (int)pfVar1) + local_7c;
      local_38 = *(float *)(iVar5 + 0x18 + (int)pfVar1) + local_78;
      local_48 = local_38 + *pfVar4;
      FUN_00476240(&local_90,&local_50,*(int *)(param_1 + 0x14) + 0x30);
      iVar2 = *(int *)(param_1 + 0x14);
      fStack_5c = local_90 * *(float *)(iVar2 + 200) - fStack_88 * *(float *)(iVar2 + 0xc0);
      fStack_58 = fStack_8c * *(float *)(iVar2 + 0xc0) - local_90 * *(float *)(iVar2 + 0xc4);
      fStack_20 = (fStack_88 * *(float *)(iVar2 + 0xc4) - fStack_8c * *(float *)(iVar2 + 200)) +
                  *(float *)(iVar2 + 0xa0);
      fStack_28 = *(float *)(iVar2 + 0xa8) + fStack_58;
      fVar3 = -(pfVar6[-2] * fStack_20 +
               pfVar6[-1] * (*(float *)(iVar2 + 0xa4) + fStack_5c) + *pfVar6 * fStack_28);
      if (DAT_006cc7a4 < fVar3) {
        fVar3 = _DAT_006f073c * fVar3 * *(float *)(iVar2 + 0x144);
        fStack_70 = pfVar6[-2] * fVar3;
        fStack_6c = pfVar6[-1] * fVar3;
        fStack_68 = *pfVar6 * fVar3;
        FUN_00584e30();
        *local_a8 = fVar3 + *local_a8;
        local_ac = fVar3 + local_ac;
      }
    }
    pfVar4 = pfVar4 + 1;
    local_a8 = local_a8 + 1;
    iVar5 = iVar5 + 0x30;
    pfVar6 = pfVar6 + 4;
  } while (iVar5 < 0xc0);
  return (float10)local_ac;
}
