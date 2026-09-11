/* spd-match: far pct=6.46 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00441C10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00441500();
int __cdecl FUN_00441530();
int __cdecl FUN_00441660();
int __cdecl FUN_00441b90();
int __cdecl FUN_00674898();
extern int _DAT_006cc83c;
extern int _DAT_006cc8c8;
extern int _DAT_006cc8f4;
extern int _DAT_006ccce8;
int __fastcall FUN_00441c10(float * obj, undefined4 param_1, undefined4 *param_2, int param_3, float *param_4)

{

  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  float local_288;
  float local_284;
  undefined4 local_280 [160];
  
  iVar4 = 0;
  if ((((_DAT_006ccce8 < *obj) && (*param_4 < _DAT_006cc8c8)) && (_DAT_006ccce8 < obj[1])) &&
     (param_4[1] < _DAT_006cc8c8)) {
    fVar5 = (float10)FUN_00441500(param_1,obj[1]);
    local_284 = (float)fVar5;
    if (fVar5 < (float10)param_4[1] != (fVar5 == (float10)param_4[1])) {
      do {
        uVar1 = FUN_00674898();
        local_288 = (float)(int)(uVar1 & 0xffe00000) * _DAT_006cc83c;
        if (local_288 < *param_4 != (local_288 == *param_4)) {
          do {
            iVar2 = FUN_00441530(param_1,local_288,local_284,0);
            if (iVar2 != 0) {
              iVar2 = FUN_00441660(param_1,local_280 + iVar4,param_3 - iVar4);
              iVar4 = iVar4 + iVar2;
            }
            local_288 = local_288 + _DAT_006cc8f4;
          } while (local_288 < *param_4 != (local_288 == *param_4));
        }
        local_284 = local_284 + _DAT_006cc8f4;
      } while (local_284 < param_4[1] != (local_284 == param_4[1]));
    }
  }
  if (0 < iVar4) {
    iVar2 = (int)local_280 - (int)param_2;
    local_288 = (float)iVar4;
    do {
      **(undefined1 **)((int)param_2 + iVar2) = 0;
      uVar3 = FUN_00441b90(param_1);
      *param_2 = uVar3;
      param_2 = param_2 + 1;
      local_288 = (float)((int)local_288 + -1);
    } while (local_288 != 0.0);
  }
  return iVar4;
}
