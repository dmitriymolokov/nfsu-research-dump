/* spd-match: far pct=6.69 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0059D540 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0059cb90();
int __cdecl FUN_0059ce10();
int __cdecl FUN_0059d350();
extern int DAT_006cc7a4;
extern int _DAT_006cc7dc;
float10 __fastcall FUN_0059d540(int obj, float *param_1, float param_2, float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  float10 fVar5;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_48;
  int local_44;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  if (*(char *)(obj + 0x18) != '\0') {
    FUN_0059cb90();
    *(undefined1 *)(obj + 0x18) = 0;
  }
  if (*(short *)(obj + 0x1e) != 0) {
    local_50 = param_2;
    local_60 = 1.0;
    local_58 = 0.0;
    local_48 = 0.0;
    local_44 = 0x3e6;
    do {
      FUN_0059d350(&local_30,local_50,0);
      fVar4 = local_28;
      fVar3 = local_2c;
      fVar1 = local_30;
      FUN_0059d350(&local_20,local_50,1);
      fVar2 = SQRT(local_20 * local_20 + local_1c * local_1c + local_18 * local_18);
      if (((fVar2 == DAT_006cc7a4) ||
          (fVar1 = ((*param_1 - fVar1) * local_20 +
                   (param_1[1] - fVar3) * local_1c + (param_1[2] - fVar4) * local_18) / fVar2,
          ABS(fVar1) < param_3)) ||
         ((local_58 != DAT_006cc7a4 &&
          (fVar2 = -((fVar1 - local_48) / local_58), fVar2 == DAT_006cc7a4)))) {
        return (float10)local_50;
      }
      local_5c = fVar1 / fVar2;
      if (fVar1 / fVar2 <= -local_60) {
        local_5c = -local_60;
      }
      if (local_60 < local_5c) {
        local_5c = local_60;
      }
      fVar5 = (float10)FUN_0059ce10(local_5c + local_50);
      local_50 = (float)fVar5;
      if (local_5c * local_58 < DAT_006cc7a4) {
        local_60 = local_60 * _DAT_006cc7dc;
      }
      local_58 = local_5c;
      local_44 = local_44 + -1;
      local_48 = fVar1;
    } while (local_44 != 0);
    return (float10)local_50;
  }
  return (float10)DAT_006cc7a4;
}
