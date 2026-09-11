/* spd-match: far pct=4.12 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_2 */
#include "ghidra_compat.h"

extern int DAT_006eb720;
extern void LAB_00682794(void);
extern void LAB_006827aa(void);
extern void LAB_0068285e(void);
extern void LAB_00682907(void);
int unaff_retaddr;

void FUN_006826fa(int *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  int *piVar4;
  int *piVar5;
  ushort uVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  uint unaff_retaddr;
  byte local_2c;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  short local_28;
  undefined2 uStack_26;
  undefined2 local_24;
  undefined1 uStack_22;
  byte bStack_21;
  int local_20;
  int local_1c;
  int local_18;
  ushort *local_14;
  ushort *local_10;
  short *local_c;
  uint local_8;
  
  piVar5 = param_2;
  piVar4 = param_1;
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  local_1c = 0;
  local_2c = 0;
  uStack_2b = 0;
  uStack_2a = 0;
  local_28 = 0;
  uStack_26 = 0;
  local_24 = 0;
  uStack_22 = 0;
  bStack_21 = 0;
  uVar8 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar6 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar10 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar3 = uVar8 + uVar6;
  if (((uVar6 < 0x7fff) && (uVar8 < 0x7fff)) && (uVar3 < 0xbffe)) {
    if (uVar3 < 0x3fc0) goto LAB_006827aa;
    if (uVar6 == 0) {
      uVar3 = uVar3 + 1;
      uVar6 = 0;
      if ((((param_1[2] & 0x7fffffffU) != 0) || (param_1[1] != 0)) || (*param_1 != 0))
      goto LAB_00682794;
    }
    else {
LAB_00682794:
      if (((uVar8 == 0) && (uVar3 = uVar3 + 1, (param_2[2] & 0x7fffffffU) == 0)) &&
         ((param_2[1] == 0 && (*param_2 == 0)))) {
LAB_006827aa:
        param_1[2] = 0;
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
      local_18 = 0;
      local_c = &local_28;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_10 = (ushort *)(local_18 * 2 + (int)param_1);
          local_14 = (ushort *)(piVar5 + 2);
          local_20 = (int)param_2;
          do {
            iVar7 = ___addl(*(undefined4 *)(local_c + -2),(uint)*local_14 * (uint)*local_10,
                            local_c + -2);
            if (iVar7 != 0) {
              *local_c = *local_c + 1;
            }
            local_10 = local_10 + 1;
            local_14 = local_14 + -1;
            local_20 = local_20 + -1;
          } while (local_20 != 0);
        }
        local_c = local_c + 1;
        local_18 = local_18 + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (0 < (int)param_2);
      (*(unsigned short *)&(param_1)) = uVar3 + 0xc002;
      if ((short)(ushort)param_1 < 1) {
LAB_0068285e:
        (*(unsigned short *)&(param_1)) = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          uVar9 = (uint)(ushort)-(ushort)param_1;
          (*(unsigned short *)&(param_1)) = 0;
          do {
            if ((local_2c & 1) != 0) {
              local_1c = local_1c + 1;
            }
            ___shr_12(&local_2c);
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
          if (local_1c != 0) {
            local_2c = local_2c | 1;
          }
        }
      }
      else {
        do {
          if ((bStack_21 & 0x80) != 0) break;
          ___shl_12(&local_2c);
          (*(unsigned short *)&(param_1)) = (ushort)param_1 - 1;
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_0068285e;
      }
      if ((0x8000 < CONCAT11(uStack_2b,local_2c)) ||
         (sVar1 = CONCAT11(bStack_21,uStack_22), iVar2 = CONCAT22(local_24,uStack_26),
         iVar7 = CONCAT22(local_28,uStack_2a),
         (CONCAT22(uStack_2a,CONCAT11(uStack_2b,local_2c)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_28,uStack_2a) == -1) {
          iVar7 = 0;
          if (CONCAT22(local_24,uStack_26) == -1) {
            if (CONCAT11(bStack_21,uStack_22) == -1) {
              (*(unsigned short *)&(param_1)) = (ushort)param_1 + 1;
              sVar1 = -0x8000;
              iVar2 = 0;
              iVar7 = 0;
            }
            else {
              sVar1 = CONCAT11(bStack_21,uStack_22) + 1;
              iVar2 = 0;
              iVar7 = 0;
            }
          }
          else {
            sVar1 = CONCAT11(bStack_21,uStack_22);
            iVar2 = CONCAT22(local_24,uStack_26) + 1;
          }
        }
        else {
          iVar7 = CONCAT22(local_28,uStack_2a) + 1;
          sVar1 = CONCAT11(bStack_21,uStack_22);
          iVar2 = CONCAT22(local_24,uStack_26);
        }
      }
      local_28 = (short)((uint)iVar7 >> 0x10);
      uStack_2a = (undefined2)iVar7;
      local_24 = (undefined2)((uint)iVar2 >> 0x10);
      uStack_26 = (undefined2)iVar2;
      bStack_21 = (byte)((ushort)sVar1 >> 8);
      uStack_22 = (undefined1)sVar1;
      if (0x7ffe < (ushort)param_1) goto LAB_00682907;
      *(undefined2 *)piVar4 = uStack_2a;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_26,local_28);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_21,CONCAT12(uStack_22,local_24));
      uVar6 = (ushort)param_1 | uVar10;
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_00682907:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar10 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}
