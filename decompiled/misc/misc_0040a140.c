/* spd-match: far pct=11.40 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0040A140 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_0040b780();
int __cdecl FUN_0041ff50();
int __cdecl FUN_0047d070();
int __cdecl FUN_00567370();
int __cdecl FUN_00674898();
extern int DAT_006b7c94;
extern int DAT_00702c90;
extern int DAT_00735f5c;
extern unsigned char *DAT_007361f0;
extern int DAT_007361f8;
extern int DAT_0073d6d8;
extern int DAT_0077a920;
extern int _DAT_006b7c98;
extern int _DAT_006b7c9c;
extern int _DAT_006b7ca0;
extern int _DAT_006b7ca4;
extern int _DAT_006b7ca8;
void __fastcall FUN_0040a140(int val, int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;

  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 extraout_ST0;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 fVar8;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_78;
  float local_68;
  float local_60;
  undefined1 local_50 [76];
  
  puVar7 = DAT_0073d6d8;
  iVar2 = *(int *)(param_1 + 0x40);
  if (DAT_0077a920 == 3) {
    if (((undefined4 **)DAT_0073d6d8 != &DAT_0073d6d8) &&
       (puVar5 = (undefined4 *)FUN_0040a880(), puVar7 != puVar5)) {
      do {
        if ((*(int *)(param_1 + 4) + -7 == puVar7[0x1cc]) && (puVar7[0x267] == 0)) {
          local_8c = (float)puVar7[0x1d5];
          local_60 = (float)puVar7[0x1d4] * ((int)_DAT_006b7ca0);
          local_88 = (float)puVar7[0x1d6];
          local_a0 = (float)puVar7[0x1dc];
          local_68 = ((int)_DAT_006b7ca0) * local_88;
          local_9c = (float)puVar7[0x1dd];
          local_98 = (float)puVar7[0x1de];
          local_b0 = (float)puVar7[0x1d4];
          local_ac = (float)puVar7[0x1d5];
          local_a8 = (float)puVar7[0x1d6];
          local_78 = ((int)_DAT_006b7ca4) * local_98;
          local_d0 = ((int)_DAT_006b7ca4) * local_a0 + local_60 + (float)puVar7[0x1d0];
          local_cc = ((int)_DAT_006b7ca4) * local_9c + ((int)_DAT_006b7ca0) * local_8c + (float)puVar7[0x1d1];
          local_c8 = local_78 + local_68 + (float)puVar7[0x1d2];
        }
        puVar7 = (undefined4 *)*puVar7;
      } while (puVar7 != puVar5);
    }
  }
  else if (((DAT_0077a920 == 6) && (*DAT_007361f0 != 1)) && (val < *(int *)(((int)DAT_007361f8) + 0x1c))
          ) {
    iVar6 = FUN_0041ff50();
    fVar1 = *(float *)(iVar6 + 0x58);
    iVar6 = FUN_0041ff50();
    local_ac = *(float *)(iVar6 + 0x94);
    local_b0 = *(float *)(iVar6 + 0x90);
    local_a8 = *(float *)(iVar6 + 0x98);
    iVar6 = FUN_0041ff50();
    local_bc = *(float *)(iVar6 + 0x94);
    local_b8 = *(float *)(iVar6 + 0x98);
    fVar8 = extraout_ST1;
    iVar6 = FUN_0041ff50();
    local_9c = *(float *)(iVar6 + 0xb4);
    local_98 = *(float *)(iVar6 + 0xb8);
    local_a0 = *(float *)(iVar6 + 0xb0);
    local_78 = local_98 * ((int)_DAT_006b7c9c);
    local_d0 = local_a0 * ((int)_DAT_006b7c9c) +
               (float)((float10)(float)(extraout_ST0 * (float10)((int)_DAT_006b7c98)) + fVar8);
    local_cc = (float)((float10)local_9c * (float10)((int)_DAT_006b7c9c) +
                      (float10)local_bc * (float10)((int)_DAT_006b7c98) + extraout_ST1_00);
    local_c8 = local_78 + local_b8 * ((int)_DAT_006b7c98) + fVar1;
  }
  local_a8 = local_a8 - _DAT_006b7ca8;
  local_c0 = 0;
  local_bc = 0.0;
  local_b8 = 1.0;
  FUN_00567370();
  local_90 = local_b0 + local_d0;
  local_8c = local_ac + local_cc;
  local_88 = local_a8 + local_c8;
  FUN_0040b780(&local_c0);
  FUN_0047d070(iVar2,local_50,0);
  iVar6 = DAT_00735f5c;
  if (DAT_00735f5c == 0) {
    *(undefined4 *)(iVar2 + 0x284) = 0;
    *(undefined4 *)(iVar2 + 0xb4) = 0;
  }
  uVar3 = DAT_00702c90;
  *(undefined4 *)(iVar2 + 0xbc) = DAT_006b7c94;
  *(undefined4 *)(iVar2 + 0xc0) = uVar3;
  if (iVar6 == 0) {
    uVar4 = FUN_00674898();
    *(undefined2 *)(iVar2 + 0xc4) = uVar4;
  }
  return;
}
