/* spd-match: far pct=5.08 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0045A5B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0045a8c0();
extern int DAT_006cc7a4;
extern int DAT_0073ad34;
extern int _DAT_006b7538;
extern int _DAT_006cc7bc;
void __fastcall FUN_0045a5b0(float * obj, char *param_1, int param_2, float *param_3, float *param_4)

{
  float fVar1;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  char *extraout_ECX;
  char *pcVar9;
  float *pfVar10;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  if (*(int *)(param_1 + 0x1a8) != DAT_0073ad34) {
    *(int *)(param_1 + 0x1a8) = DAT_0073ad34;
    local_40 = *param_3;
    local_3c = param_3[1];
    local_38 = *obj;
    local_34 = obj[1];
    fVar5 = *param_4;
    fVar6 = param_4[1];
    local_48 = 0.0;
    fVar7 = SQRT(obj[2] * obj[2] + obj[1] * obj[1] + *obj * *obj);
    if ((_DAT_006cc7bc <= fVar7) && (DAT_006cc7a4 < _DAT_006b7538)) {
      pcVar9 = param_1 + param_2 * 2 + 0x164;
      pfVar10 = (float *)(param_1 + param_2 * 0x10 + 0x14);
      do {
        if (*param_1 <= param_2) {
          return;
        }
        if (param_2 == param_1[0x1a0]) {
          fVar8 = *param_3 - pfVar10[-1];
          fVar1 = param_3[1];
        }
        else {
          fVar8 = pfVar10[-5] - pfVar10[-1];
          fVar1 = pfVar10[-4];
        }
        fVar1 = SQRT(fVar8 * fVar8 + (fVar1 - *pfVar10) * (fVar1 - *pfVar10)) / fVar7;
        local_48 = fVar1 + local_48;
        local_38 = fVar5 * fVar1 + local_38;
        local_34 = fVar6 * fVar1 + local_34;
        local_40 = local_38 * fVar1 + local_40;
        local_3c = local_34 * fVar1 + local_3c;
        fVar1 = local_48 / _DAT_006b7538;
        if (_DAT_006cc7bc <= local_48 / _DAT_006b7538) {
          fVar1 = _DAT_006cc7bc;
        }
        fVar8 = _DAT_006cc7bc - fVar1;
        uVar4 = *(undefined2 *)pcVar9;
        cVar2 = param_1[param_2 + 0x18c];
        cVar3 = param_1[param_2 + 0x150];
        if (-1 < param_2) {
          *pfVar10 = local_3c * fVar8 + fVar1 * *pfVar10;
          pfVar10[-1] = fVar8 * local_40 + fVar1 * pfVar10[-1];
          pfVar10[1] = 0.0;
          param_1[param_2 + 0x150] = cVar3;
          *(undefined2 *)pcVar9 = uVar4;
          param_1[param_2 + 0x18c] = cVar2;
          param_1[0x1a4] = '\0';
          param_1[0x1a5] = '\0';
          param_1[0x1a6] = '\0';
          param_1[0x1a7] = '\0';
          FUN_0045a8c0();
          param_1 = extraout_ECX;
        }
        param_2 = param_2 + 1;
        pcVar9 = pcVar9 + 2;
        pfVar10 = pfVar10 + 4;
      } while (local_48 < _DAT_006b7538);
    }
  }
  return;
}
