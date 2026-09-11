/* spd-match: far pct=5.12 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005413E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_005411b0();
int __cdecl FUN_0058dc50();
int __cdecl FUN_0058dca0();
extern int DAT_00740a68;
extern int DAT_00743c10;
extern int _DAT_006cc7bc;
int __fastcall FUN_005413e0(undefined4 * obj, undefined4 *param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;

  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  float **ppfVar11;
  int extraout_ECX;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float *local_d0 [2];
  float *local_c8 [38];
  float *local_30;
  float **local_2c;
  float **local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  *param_1 = 0;
  param_1[10] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  puVar10 = DAT_00740a68;
  uVar2 = *obj;
  uVar3 = obj[1];
  uVar4 = obj[2];
  local_28 = &local_30;
  local_30 = &local_e0;
  local_24 = 0.0;
  local_20 = 0x7f7fffff;
  local_1c = 0;
  local_18 = 0;
  local_e0 = 0.0;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0x3f800000;
  local_2c = local_d0;
  puVar8 = (undefined4 *)FUN_0040a880();
  ppfVar11 = local_d0;
  puVar5 = DAT_00743c10;
  do {
    DAT_00743c10 = puVar5;
    if (((puVar10 == puVar8) || (9 < local_18)) || (local_28 <= ppfVar11)) {
      puVar10 = (undefined4 *)FUN_0040a880();
      local_f8 = local_24;
      for (; puVar5 != puVar10; puVar5 = (undefined4 *)*puVar5) {
        local_24 = local_f8;
        if (puVar5[10] != 0) {
          for (puVar8 = (undefined4 *)puVar5[0xb];
              (puVar8 != (undefined4 *)0x0 && (puVar8 != puVar5 + 0xb));
              puVar8 = (undefined4 *)*puVar8) {
            FUN_005411b0(uVar2,uVar3,uVar4);
          }
        }
        ppfVar11 = local_2c;
        local_f8 = local_24;
      }
      local_f4 = _DAT_006cc7bc - local_f8;
      if (_DAT_006cc7bc < local_f8) {
        local_f4 = 0.0;
        local_f8 = _DAT_006cc7bc / local_f8;
      }
      fVar6 = local_f4 * *local_30;
      fVar7 = local_f4 * local_30[1];
      local_f0 = local_f4 * local_30[2];
      local_ec = local_f4 * local_30[3];
      if (local_d0 < ppfVar11) {
        iVar9 = ((uint)((int)ppfVar11 + (-1 - (int)local_d0)) >> 4) + 1;
        ppfVar11 = local_d0 + 2;
        do {
          iVar9 = iVar9 + -1;
          fVar6 = local_f8 * (float)(unsigned int)(ppfVar11[-2]) + fVar6;
          fVar7 = local_f8 * (float)(unsigned int)(ppfVar11[-1]) + fVar7;
          local_f0 = local_f8 * (float)(unsigned int)(*ppfVar11) + local_f0;
          local_ec = local_f8 * (float)(unsigned int)(ppfVar11[1]) + local_ec;
          ppfVar11 = ppfVar11 + 4;
        } while (iVar9 != 0);
      }
      param_1[0x14] = fVar6;
      param_1[0x17] = local_ec;
      param_1[0x15] = fVar7;
      param_1[0x16] = local_f0;
      return local_18;
    }
    if ((*(int *)puVar10[3] != 0) && (iVar9 = FUN_0058dc50(uVar2,uVar3,uVar4), iVar9 != 0)) {
      iVar9 = extraout_ECX;
      if (0 < *(short *)(extraout_ECX + 0xe)) {
        iVar9 = FUN_0058dca0(extraout_ECX,uVar2,uVar3,uVar4);
      }
      if (iVar9 != 0) {
        sVar1 = *(short *)(iVar9 + 0xe);
        iVar9 = 0;
        if (0 < -(int)sVar1) {
          do {
            if (9 < local_18) break;
            FUN_005411b0(uVar2,uVar3,uVar4);
            iVar9 = iVar9 + 1;
          } while (iVar9 < -(int)sVar1);
        }
      }
    }
    puVar10 = (undefined4 *)*puVar10;
    ppfVar11 = local_2c;
    puVar5 = DAT_00743c10;
  } while( true );
}
