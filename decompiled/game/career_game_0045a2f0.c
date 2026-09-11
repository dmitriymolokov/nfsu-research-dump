/* spd-match: far pct=8.80 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_0045A2F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00456de0(...);
int __cdecl FUN_00458f10(...);
int __cdecl FUN_004594d0(...);
extern int DAT_006cc7a4;
extern int _DAT_006b7534;
extern int _DAT_006cca08;

struct ThisCallBox {
  void FUN_0045a2f0(float * obj, float param_2, float *param_3, float *param_4, undefined4 param_5);
};
void ThisCallBox::FUN_0045a2f0(float * obj, float param_2, float *param_3, float *param_4, undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  int local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_38;
  float local_34;
  
  FUN_00458f10(0,0);
  local_48 = *param_3;
  local_44 = param_3[1];
  fVar1 = param_4[1];
  fVar2 = *param_4;
  local_4c = 0.0;
  if (SQRT(local_48 * local_48 + local_44 * local_44) * ((int)_DAT_006cca08) <
      SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
    FUN_00456de0(param_2,param_5);
    return;
  }
  local_50 = 0;
  local_38 = *obj;
  local_34 = obj[1];
  if (DAT_006cc7a4 < param_2) {
    while ((*((char *)this) < '\x14' && (local_50 < 0x14))) {
      local_48 = ((int)_DAT_006b7534) * fVar2 + local_48;
      local_44 = fVar1 * ((int)_DAT_006b7534) + local_44;
      fVar3 = ((int)_DAT_006b7534) * local_48 + local_38;
      fVar4 = local_44 * ((int)_DAT_006b7534) + local_34;
      FUN_004594d0(0xffffffff,0xffffffff,0xffffffff,1);
      local_38 = local_38 - fVar3;
      local_34 = local_34 - fVar4;
      local_50 = local_50 + 1;
      local_4c = SQRT(local_34 * local_34 + local_38 * local_38) + local_4c;
      if (local_48 * *param_3 + local_44 * param_3[1] < DAT_006cc7a4) {
        return;
      }
      local_38 = fVar3;
      local_34 = fVar4;
      if (param_2 <= local_4c) {
        return;
      }
    }
  }
  return;
}
