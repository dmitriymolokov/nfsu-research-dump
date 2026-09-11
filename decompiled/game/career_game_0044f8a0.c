/* spd-match: far pct=5.46 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0044F8A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0044d5d0();
int __cdecl FUN_00456780();
int __cdecl FUN_00457590();
int __cdecl FUN_00458f10();
int __cdecl FUN_0045b150();
int __cdecl FUN_0045d5e0();
int __cdecl FUN_00567280();
extern int DAT_007006ec;
extern int DAT_0077a4ac;
extern int _DAT_006b760c;
extern int _DAT_006cc79c;
extern int _DAT_006cc7b4;
extern int _DAT_006cca94;
undefined4 __fastcall FUN_0044f8a0(int * obj, int *param_1, int *param_2, float *param_3, undefined1 *param_4, undefined1 *param_5)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  undefined1 uVar4;
  char cVar5;

  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float local_1dc;
  undefined4 local_1d8;
  float local_1d4;
  undefined4 local_1d0 [105];
  undefined4 local_2c;
  undefined4 local_28;
  
  local_2c = 0;
  local_28 = 0;
  puVar8 = local_1d0;
  for (iVar6 = 0x70; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  piVar1 = obj + 0xe6;
  FUN_00458f10(0,0);
  FUN_00458f10(0,0);
  *param_4 = 0;
  *param_5 = 0;
  *param_3 = 99999.0;
  local_1d8 = 0xffffffff;
  local_1dc = 99999.0;
  iVar6 = FUN_00457590(&DAT_0077a4ac,*(int *)(*obj + 0x30) + 0x10,obj + 0xe3,DAT_007006ec,
                       &local_1dc);
  if ((iVar6 != 0) && (local_1dc < DAT_007006ec)) {
    *param_1 = iVar6;
    *param_3 = local_1dc;
    *param_2 = *piVar1;
    param_2[1] = obj[0xe7];
    param_2[2] = obj[0xe8];
    param_2[3] = obj[0xe9];
    uVar4 = FUN_0045b150(param_2,local_1d0,obj,DAT_007006ec,param_5,1);
    *param_4 = uVar4;
    return 300;
  }
  if ((1 < *piVar1) && (*piVar1 < 4)) {
    local_1dc = (float)obj[0xe7];
    iVar6 = 0;
    if (0 < obj[1]) {
      pfVar7 = (float *)(obj + 0xf);
      while (*pfVar7 != local_1dc) {
        iVar6 = iVar6 + 1;
        pfVar7 = pfVar7 + 0xe;
        if (obj[1] <= iVar6) {
          return local_1d8;
        }
      }
      if (((iVar6 != -1) && (piVar2 = obj + iVar6 * 0xe + 2, piVar2 != (int *)0x0)) &&
         (cVar5 = FUN_00456780(piVar2), cVar5 != '\0')) {
        local_1d4 = 99999.0;
        if (ABS((float)piVar2[1]) <= _DAT_006cc79c) {
          FUN_0044d5d0();
          fVar9 = (float10)FUN_00567280();
          fVar3 = local_1d4;
          if (fVar9 < (float10)((int)_DAT_006cca94)) {
            fVar3 = DAT_007006ec;
          }
        }
        else {
          fVar3 = ((float)piVar2[4] - (float)obj[(char)obj[0xe2] * 0xe + 6]) /
                  (float)piVar2[1] + _DAT_006cc7b4;
        }
        if (fVar3 < ((int)_DAT_006b760c) + DAT_007006ec != (fVar3 == ((int)_DAT_006b760c) + DAT_007006ec)) {
          *param_1 = obj[0xe7];
          *param_3 = fVar3;
          *param_2 = *piVar1;
          param_2[1] = obj[0xe7];
          param_2[2] = obj[0xe8];
          param_2[3] = obj[0xe9];
          *param_4 = 1;
          uVar4 = FUN_0045d5e0();
          *param_5 = uVar4;
          return 300;
        }
      }
    }
  }
  return local_1d8;
}
