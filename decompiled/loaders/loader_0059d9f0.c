/* spd-match: far pct=6.04 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0059D9F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0059cb90();
int __cdecl FUN_0059d350();
void __fastcall FUN_0059d9f0(int obj, int param_1)

{
  undefined4 uVar1;
  float fVar2;

  undefined4 *puVar3;
  float local_78;
  int local_74;
  int local_70;
  int local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_28;
  undefined4 local_18;
  
  local_78 = 0.0;
  local_74 = 0;
  if (*(short *)(obj + 0x1e) != 0) {
    local_70 = 0;
    do {
      uVar1 = *(undefined4 *)(*(int *)(obj + 0x24) + local_70);
      puVar3 = (undefined4 *)(*(int *)(obj + 0x24) + local_70);
      local_18 = puVar3[2];
      puVar3[3] = local_78;
      *puVar3 = uVar1;
      puVar3[2] = local_18;
      puVar3[1] = puVar3[1];
      *(undefined1 *)(obj + 0x18) = 1;
      fVar2 = (float)local_74;
      if (fVar2 < *(float *)(obj + 0xc)) {
        FUN_0059d350(&local_50,fVar2,0);
        local_60 = local_50;
        local_5c = local_4c;
        local_58 = local_48;
        local_68 = 1;
        if (0 < param_1) {
          do {
            FUN_0059d350(&local_40,(float)local_68 / (float)param_1 + fVar2,0);
            local_28 = local_38;
            local_68 = local_68 + 1;
            local_78 = SQRT((local_40 - local_60) * (local_40 - local_60) +
                            (local_3c - local_5c) * (local_3c - local_5c) +
                            (local_38 - local_58) * (local_38 - local_58)) + local_78;
            local_60 = local_40;
            local_5c = local_3c;
            local_58 = local_28;
          } while (local_68 <= param_1);
        }
      }
      local_74 = local_74 + 1;
      local_70 = local_70 + 0x10;
    } while (local_74 < (int)(uint)*(ushort *)(obj + 0x1e));
  }
  *(float *)(obj + 0x14) = local_78;
  FUN_0059cb90();
  *(undefined1 *)(obj + 0x18) = 0;
  return;
}
