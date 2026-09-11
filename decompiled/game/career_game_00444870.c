/* spd-match: far pct=4.08 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_004436d0();
int __cdecl FUN_00446fd0();
extern int DAT_006cc7a4;
extern int DAT_00736174;
extern int _DAT_006b781c;
extern int _DAT_006b7820;
extern int _DAT_006cc7dc;
extern int _DAT_006ccca0;
extern int _DAT_006ccca4;
extern void LAB_004449dd(void);
extern void LAB_00444a51(void);

undefined4 FUN_00444870(int param_1,float *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  float *pfVar11;
  int local_30;
  short asStack_28 [4];
  float local_20;
  float local_1c;
  float local_18 [6];
  
  fVar4 = SQRT(param_2[2] * param_2[2] + param_2[3] * param_2[3]);
  if (fVar4 <= _DAT_006ccca4) {
    if (((int)_DAT_006b781c) * fVar4 <= _DAT_006b7820) {
      fVar2 = ((int)_DAT_006b781c) * param_2[2] + *param_2;
      fVar3 = _DAT_006b781c;
    }
    else {
      fVar2 = (((int)_DAT_006b7820) / fVar4) * param_2[2] + *param_2;
      fVar3 = ((int)_DAT_006b7820) / fVar4;
    }
    fVar3 = fVar3 * param_2[3] + param_2[1];
  }
  else {
    fVar2 = *param_2;
    fVar3 = param_2[1];
  }
  local_20 = fVar2 - *param_2;
  local_30 = 0;
  pfVar11 = local_18;
  local_1c = fVar3 - param_2[1];
  do {
    asStack_28[local_30] = -1;
    *pfVar11 = local_20 * (float)local_30 * ((int)_DAT_006cc7dc) + *param_2;
    pfVar11[1] = local_1c * (float)local_30 * ((int)_DAT_006cc7dc) + param_2[1];
    if (_DAT_006ccca0 < fVar4) {
      iVar6 = FUN_004436d0(0);
      while (iVar6 != 0) {
        if (DAT_006cc7a4 < local_20 * *(float *)(iVar6 + 0xc) + local_1c * *(float *)(iVar6 + 0x10))
        {
          piVar7 = (int *)(iVar6 + 0x80);
          bVar5 = false;
          iVar10 = 1;
          if (*(int *)(iVar6 + 0x80) != 0) {
            do {
              if (0xd < iVar10) break;
              if (DAT_00736174 == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = (int)*(short *)(((int)DAT_00736174) + 0x6c);
              }
              if (*piVar7 == iVar8) {
                bVar5 = true;
                break;
              }
              piVar1 = piVar7 + 1;
              piVar7 = piVar7 + 1;
              iVar10 = iVar10 + 1;
            } while (*piVar1 != 0);
            if ((iVar10 != 1) && (!bVar5)) goto LAB_004449dd;
          }
          asStack_28[local_30] = *(short *)(iVar6 + 0x7c);
          break;
        }
LAB_004449dd:
        iVar6 = FUN_004436d0(0);
      }
    }
    if ((asStack_28[local_30] == -1) && (iVar6 = FUN_00446fd0(pfVar11), iVar6 != 0)) {
      if ((local_30 == 0) || (iVar10 = *(int *)(param_1 + 0x598), iVar10 == 0)) {
LAB_00444a51:
        asStack_28[local_30] = *(short *)(iVar6 + 8);
      }
      else {
        iVar8 = 0;
        if (0 < *(int *)(iVar10 + 0xc)) {
          psVar9 = (short *)(iVar10 + 0x10);
          do {
            if (*psVar9 == *(short *)(iVar6 + 8)) goto LAB_00444a51;
            iVar8 = iVar8 + 1;
            psVar9 = psVar9 + 1;
          } while (iVar8 < *(int *)(iVar10 + 0xc));
        }
      }
    }
    local_30 = local_30 + 1;
    pfVar11 = pfVar11 + 2;
    if (2 < local_30) {
      iVar6 = 1;
      do {
        if (asStack_28[iVar6] == -1) {
          return CONCAT22((short)((uint)iVar6 >> 0x10),asStack_28[iVar6 + -1]);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 3);
      return CONCAT22((short)((uint)iVar6 >> 0x10),asStack_28[2]);
    }
  } while( true );
}
