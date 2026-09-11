/* spd-match: far pct=6.12 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

int __cdecl FUN_00440740();
int __cdecl FUN_00440a40();
int __cdecl FUN_00455810();
int __cdecl FUN_00455ae0();
int __cdecl FUN_00455b50();
int __cdecl FUN_005a7270();
extern int DAT_006b755c;
extern int DAT_006cc7a4;
extern int DAT_00700698;
extern int _DAT_006cc8bc;
extern int _DAT_006cca0c;
extern int _DAT_006ccc0c;
extern void LAB_0068600b(void);
void *ExceptionList;

void FUN_00455d60(char *param_1,int param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int unaff_EDI;
  float10 fVar7;
  int local_330;
  int *local_32c;
  float fStack_328;
  float local_324;
  int local_31c;
  int local_318;
  undefined1 local_310 [8];
  float local_308;
  undefined1 local_300 [8];
  float local_2f8;
  undefined1 local_2f0 [8];
  float local_2e8;
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
  if (DAT_00700698 == 0) {
    if (*param_1 == '\0') {
      return;
    }
    ExceptionList = &local_1c;
    FUN_00455ae0(param_1);
  }
  else {
    ExceptionList = &local_1c;
    if (*param_1 == '\0') {
      ExceptionList = &local_1c;
      FUN_00455810(param_1);
    }
  }
  if (*param_1 != '\0') {
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    FUN_00440740();
    piVar6 = (int *)(param_1 + 0x144);
    local_32c = (int *)(param_2 + 8);
    local_14 = 0;
    local_330 = 0;
    do {
      if (local_330 < *(int *)(param_2 + 4)) {
        fVar2 = ((int)DAT_006b755c) * ((int)_DAT_006cca0c);
        piVar1 = (int *)*local_32c;
        local_324 = DAT_006b755c;
        if (param_3 == local_330) {
          iVar5 = *(int *)(piVar6[-0x50] + 8);
          pcVar4 = param_1 + 0x204;
          *(char **)(iVar5 + 0x10) = pcVar4;
          *(undefined4 *)(iVar5 + 0x14) = 1;
          iVar5 = *(int *)(piVar6[-0x28] + 8);
          *(char **)(iVar5 + 0x10) = pcVar4;
          *(undefined4 *)(iVar5 + 0x14) = 1;
          iVar5 = *(int *)(*piVar6 + 8);
          *(char **)(iVar5 + 0x10) = pcVar4;
          *(undefined4 *)(iVar5 + 0x14) = 1;
        }
        else {
          if ((char)piVar1[0x18] == '\0') {
            if ((unaff_EDI < 0) || (4 < unaff_EDI)) {
              fVar3 = DAT_006cc7a4;
              if ((10 < unaff_EDI) && (unaff_EDI < 0x11)) {
                fVar3 = (float)piVar1[unaff_EDI + -9];
              }
            }
            else {
              fVar3 = (float)piVar1[1];
            }
            if (ABS(fVar3) < _DAT_006cc8bc == (ABS(fVar3) == _DAT_006cc8bc)) {
              pcVar4 = param_1 + 0x214;
              local_324 = ((int)DAT_006b755c) * ((int)_DAT_006ccc0c);
            }
            else {
              pcVar4 = param_1 + 500;
            }
          }
          else {
            local_324 = ((int)DAT_006b755c) + DAT_006b755c;
            pcVar4 = param_1 + 0x204;
          }
          iVar5 = *(int *)(*piVar6 + 8);
          *(char **)(iVar5 + 0x10) = pcVar4;
          *(undefined4 *)(iVar5 + 0x14) = 1;
          fVar7 = (float10)(**(code **)(*piVar1 + 8))();
          if (ABS((float10)local_324 - fVar7) < (float10)((int)_DAT_006cc8bc) ==
              (ABS((float10)local_324 - fVar7) == (float10)((int)_DAT_006cc8bc))) {
            iVar5 = *(int *)(piVar6[-0x50] + 8);
            *(char **)(iVar5 + 0x10) = param_1 + 0x214;
          }
          else {
            iVar5 = *(int *)(piVar6[-0x50] + 8);
            *(char **)(iVar5 + 0x10) = param_1 + 500;
          }
          *(undefined4 *)(iVar5 + 0x14) = 1;
          if ((unaff_EDI < 0) || (4 < unaff_EDI)) {
            if ((unaff_EDI < 0xb) || (0x10 < unaff_EDI)) {
              local_32c = (int *)0x0;
            }
            else {
              local_32c = (int *)piVar1[unaff_EDI + 5];
            }
          }
          else {
            local_32c = (int *)piVar1[0xf];
          }
          fVar7 = (float10)(**(code **)(*piVar1 + 0xc))();
          if (ABS((float10)fStack_328 - fVar7) < (float10)((int)_DAT_006cc8bc) ==
              (ABS((float10)fStack_328 - fVar7) == (float10)((int)_DAT_006cc8bc))) {
            iVar5 = *(int *)(piVar6[-0x28] + 8);
            *(char **)(iVar5 + 0x10) = param_1 + 0x214;
          }
          else {
            iVar5 = *(int *)(piVar6[-0x28] + 8);
            *(char **)(iVar5 + 0x10) = param_1 + 500;
          }
          *(undefined4 *)(iVar5 + 0x14) = 1;
        }
        if ((unaff_EDI < 0) || (4 < unaff_EDI)) {
          if ((unaff_EDI < 0xb) || (0x10 < unaff_EDI)) {
            local_318 = 0;
          }
          else {
            local_318 = piVar1[unaff_EDI + -2];
          }
        }
        else {
          local_318 = piVar1[8];
        }
        FUN_005a7270(local_2f0,piVar1[0x16],local_318,unaff_EDI);
        if ((unaff_EDI < 0) || (4 < unaff_EDI)) {
          if ((unaff_EDI < 0xb) || (0x10 < unaff_EDI)) {
            local_31c = 0;
          }
          else {
            local_31c = piVar1[unaff_EDI + 5];
          }
        }
        else {
          local_31c = piVar1[0xf];
        }
        FUN_005a7270(local_310,piVar1[0x16],local_31c,unaff_EDI);
        FUN_005a7270(local_300,piVar1[0x16],0,unaff_EDI);
        fVar7 = (float10)FUN_00440a40(local_2e0,local_2f0,0,0,0);
        local_2e8 = (float)fVar7;
        fVar7 = (float10)FUN_00440a40(local_2e0,local_300,0,0,0);
        local_2f8 = (float)fVar7;
        fVar7 = (float10)FUN_00440a40(local_2e0,local_310,0,0,0);
        local_308 = (float)fVar7;
        FUN_00455b50(param_1,local_330,fVar2);
        FUN_00455b50(param_1,local_330,fVar2);
        FUN_00455b50(param_1,local_330,local_324);
      }
      else {
        *(undefined4 *)(piVar6[-0x50] + 0x10) = 0;
        *(undefined4 *)(piVar6[-0x28] + 0x10) = 0;
        *(undefined4 *)(*piVar6 + 0x10) = 0;
      }
      local_330 = local_330 + 1;
      local_32c = local_32c + 1;
      piVar6 = piVar6 + 1;
    } while (local_330 < 0x28);
    iVar5 = 0;
    if (0 < local_40) {
      do {
        piVar6 = aiStack_2c0 + iVar5;
        iVar5 = iVar5 + 1;
        *(char *)(*piVar6 + 8) = *(char *)(*piVar6 + 8) + -1;
      } while (iVar5 < local_40);
    }
  }
  ExceptionList = local_1c;
  return;
}
