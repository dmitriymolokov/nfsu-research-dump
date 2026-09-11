/* spd-match: far pct=6.83 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005411B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int _DAT_006cc7bc;
void __fastcall FUN_005411b0(int obj, int param_1, int param_2, float param_3, float param_4, float param_5)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  float local_14;
  
  if (*(char *)(param_2 + 7) == '\x01') {
    cVar1 = *(char *)(param_2 + 4);
    fVar4 = ABS(param_3 - *(float *)(param_2 + 0x10));
    fVar5 = ABS(param_4 - *(float *)(param_2 + 0x14));
    fVar3 = ABS(param_5 - *(float *)(param_2 + 0x18));
    fVar6 = *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x1c);
    fVar4 = fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3;
    if (fVar4 < fVar6) {
      local_14 = 1.0;
      fVar3 = *(float *)(param_2 + 0x30) * *(float *)(param_2 + 0x30);
      if (fVar3 < fVar4) {
        local_14 = _DAT_006cc7bc - (fVar4 - fVar3) / (fVar6 - fVar3);
      }
      if (cVar1 == '\0') {
        uVar2 = *(uint *)(param_2 + 0xc);
        fVar5 = (float)(uVar2 >> 8 & 0xff);
        fVar6 = (float)(uVar2 >> 0x10 & 0xff);
        fVar3 = *(float *)(param_2 + 0x2c);
        if (*(char *)(param_2 + 5) == '\x02') {
          if (*(float **)(param_1 + 0xb4) < *(float **)(param_1 + 0xb8)) {
            **(float **)(param_1 + 0xb4) = (float)(uVar2 & 0xff) * local_14;
            *(float *)(*(int *)(param_1 + 0xb4) + 4) = fVar5 * local_14;
            *(float *)(*(int *)(param_1 + 0xb4) + 8) = fVar6 * local_14;
            *(float *)(*(int *)(param_1 + 0xb4) + 0xc) = fVar3 * local_14;
            if (DAT_006cc7a4 < local_14) {
              *(float *)(param_1 + 0xbc) = local_14 + *(float *)(param_1 + 0xbc);
              *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 0x10;
              return;
            }
          }
        }
        else if (fVar4 < *(float *)(param_1 + 0xc0)) {
          **(float **)(param_1 + 0xb0) = (float)(uVar2 & 0xff);
          *(float *)(*(int *)(param_1 + 0xb0) + 4) = fVar5;
          *(float *)(*(int *)(param_1 + 0xb0) + 8) = fVar6;
          *(float *)(*(int *)(param_1 + 0xb0) + 0xc) = fVar3;
          *(float *)(param_1 + 0xc0) = fVar4;
          return;
        }
      }
      else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
        *(int *)(obj + *(int *)(param_1 + 200) * 4) = param_2;
        *(float *)(obj + 0x28 + *(int *)(param_1 + 200) * 4) = local_14;
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
        return;
      }
    }
  }
  return;
}
