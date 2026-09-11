/* spd-match: far pct=7.88 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_004fa310();
extern int DAT_006cc7a4;
extern int DAT_006f8a30;
extern int DAT_00705a30;
extern int DAT_00705a34;
extern int DAT_00705a70;
extern int _DAT_006cc7bc;
extern int _DAT_006cc8b4;
extern int _DAT_006cc90c;
extern int _DAT_006ccab0;
extern int _DAT_006ccb70;
extern void LAB_004fa2ac(void);

undefined4 FUN_004fa140(int *param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  float local_38;
  uint local_34;
  float *local_30;
  uint local_2c;
  
  local_38 = 1e+30;
  local_2c = 0;
  FUN_004fa310(param_1);
  local_30 = (float *) & ((int)DAT_00705a70);
  local_34 = 0;
  do {
    if ((local_34 == 0) || ((*(uint *)((int)&((int)DAT_006f8a30) + local_34) & param_5) != 0)) {
      fVar1 = *local_30;
      uVar8 = 0;
      fVar2 = local_30[1];
      if (param_1[1] != 0) {
        do {
          iVar3 = *(int *)(*param_1 + uVar8 * 4);
          fVar6 = local_38;
          uVar7 = local_2c;
          if (((*(uint *)(iVar3 + 0x1c) & 0x4000000) == 0) && (param_2 != iVar3)) {
            FUN_004fa310(param_1);
            fVar6 = 0.0 - (fVar1 + 0.0);
            fVar4 = 0.0 - (fVar2 + 0.0);
            fVar5 = SQRT(fVar6 * fVar6 + fVar4 * fVar4);
            if (_DAT_006ccab0 <= fVar5) {
              fVar4 = fVar6 * (((int)_DAT_006cc7bc) / fVar5) * *(float *)(&((int)DAT_00705a30) + param_3 * 8) +
                      fVar4 * (((int)_DAT_006cc7bc) / fVar5) * *(float *)(&((int)DAT_00705a34) + param_3 * 8);
              if (DAT_006cc7a4 <= fVar4) {
                fVar4 = fVar4 * fVar4;
              }
              fVar6 = _DAT_006cc8b4;
              if (_DAT_006cc90c <= fVar4) {
                fVar6 = (((int)_DAT_006cc7bc) - fVar4) * ((int)_DAT_006ccb70) + fVar5;
              }
              uVar7 = uVar8;
              if (fVar6 < local_38) goto LAB_004fa2ac;
            }
            fVar6 = local_38;
            uVar7 = local_2c;
          }
LAB_004fa2ac:
          local_2c = uVar7;
          local_38 = fVar6;
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)param_1[1]);
      }
    }
    local_34 = local_34 + 4;
    local_30 = local_30 + 2;
    if (0x13 < local_34) {
      if (_DAT_006cc8b4 <= local_38) {
        return 0;
      }
      return *(undefined4 *)(*param_1 + local_2c * 4);
    }
  } while( true );
}
