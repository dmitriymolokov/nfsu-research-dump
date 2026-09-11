/* spd-match: far pct=5.20 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2064 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_00440740();
int __cdecl FUN_004407b0();
int __cdecl FUN_00441030();
int __cdecl FUN_005829e0();
int __cdecl FUN_00582bf0();
extern int DAT_006cc7a4;
extern int _DAT_006b6c1c;
extern int _DAT_006cc7dc;
extern void LAB_00492c47(void);
extern void LAB_00492c57(void);
extern void LAB_00492cd9(void);
extern void LAB_0068600b(void);
void *ExceptionList;

uint __fastcall FUN_00492c00(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  float10 fVar11;
  float local_32c;
  float local_320;
  float local_31c;
  float local_318;
  float local_308;
  int local_304;
  float afStack_300 [8];
  undefined1 local_2e0 [32];
  int aiStack_2c0 [160];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0068600b;
  local_1c = ExceptionList;
  iVar9 = *(int *)(param_1 + 0x74);
  if (iVar9 == 0) {
LAB_00492c47:
    iVar9 = *(int *)(param_1 + 0x70) + -1;
  }
  else {
    if (iVar9 != 1) {
      if (iVar9 != 2) {
        local_32c = 0.0;
        goto LAB_00492c57;
      }
      goto LAB_00492c47;
    }
    iVar9 = *(int *)(param_1 + 0x70);
  }
  local_32c = (float)iVar9;
LAB_00492c57:
  ExceptionList = &local_1c;
  local_304 = param_1 + 0x6c;
  fVar11 = (float10)FUN_00582bf0();
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_308 = (float)((float10)_DAT_006b6c1c * ((float10)local_32c / fVar11));
  FUN_00440740();
  local_14 = 0;
  local_32c = 0.0;
  iVar9 = param_1 + 0x6c;
  fVar3 = DAT_006cc7a4;
  do {
    iVar2 = *(int *)(iVar9 + 8);
    if (iVar2 == 0) {
LAB_00492cd9:
      fVar4 = (float)(*(int *)(iVar9 + 4) + -1);
    }
    else if (iVar2 == 1) {
      fVar4 = (float)*(int *)(iVar9 + 4);
    }
    else {
      fVar4 = DAT_006cc7a4;
      if (iVar2 == 2) goto LAB_00492cd9;
    }
    if ((NAN(fVar3) || NAN(fVar4)) || fVar3 < fVar4 == (fVar3 == fVar4)) {
      uVar8 = 0;
      if (0 < local_40) {
        do {
          piVar1 = aiStack_2c0 + uVar8;
          uVar8 = uVar8 + 1;
          *(char *)(*piVar1 + 8) = *(char *)(*piVar1 + 8) + -1;
        } while ((int)uVar8 < local_40);
      }
      ExceptionList = local_1c;
      return uVar8 & 0xffffff00;
    }
    uVar8 = (uint)local_32c & 1;
    uVar10 = uVar8 ^ 1;
    FUN_005829e0(fVar3);
    if (0 < (int)local_32c) {
      fVar4 = (afStack_300[uVar8 * 4] - afStack_300[uVar10 * 4]) * _DAT_006cc7dc;
      fVar5 = (afStack_300[uVar8 * 4 + 1] - afStack_300[uVar10 * 4 + 1]) * _DAT_006cc7dc;
      fVar6 = (afStack_300[uVar8 * 4 + 2] - afStack_300[uVar10 * 4 + 2]) * _DAT_006cc7dc;
      local_320 = fVar4 + afStack_300[uVar10 * 4];
      local_31c = afStack_300[uVar10 * 4 + 1] + fVar5;
      local_318 = afStack_300[uVar10 * 4 + 2] + fVar6;
      FUN_004407b0(&local_320,SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6) + _DAT_006cc7dc,0)
      ;
      cVar7 = FUN_00441030(local_2e0,1,1,afStack_300 + uVar8 * 4,0x3f000000,0x3f800000);
      if (cVar7 != '\0') {
        iVar9 = 0;
        if (0 < local_40) {
          do {
            piVar1 = aiStack_2c0 + iVar9;
            iVar9 = iVar9 + 1;
            *(char *)(*piVar1 + 8) = *(char *)(*piVar1 + 8) + -1;
          } while (iVar9 < local_40);
        }
        ExceptionList = local_1c;
        return CONCAT31((int3)((uint)iVar9 >> 8),1);
      }
    }
    fVar3 = fVar3 + local_308;
    local_32c = (float)((int)local_32c + 1);
    iVar9 = local_304;
  } while( true );
}
