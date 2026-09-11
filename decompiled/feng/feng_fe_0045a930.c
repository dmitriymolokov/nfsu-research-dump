/* spd-match: far pct=8.85 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_09/attempt1_baseline */
#include "ghidra_compat.h"

int __cdecl FUN_00401cd0();
int __cdecl FUN_004454d0();
int __cdecl FUN_00567160();
int __cdecl FUN_00579190();
extern int DAT_0073781c;
extern unsigned char *DAT_00737820;
extern void LAB_0068657b(void);
void *ExceptionList;

void  FUN_0045a930(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [36];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *pvStack_28;
  undefined4 uStack_20;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_0068657b;
  pvStack_1c = ExceptionList;
  local_94 = *(float *)(param_2 + 0x40) + *(float *)(param_2 + 0x40);
  local_a0 = *(float *)(param_2 + 0x10) * local_94;
  local_9c = *(float *)(param_2 + 0x14) * local_94;
  local_98 = *(float *)(param_2 + 0x18) * local_94;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_94 = *(float *)(param_2 + 0x1c) * local_94;
  local_64 = 0x3f800000;
  local_e0 = 0x3f800000;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_84 = *(float *)(param_2 + 0x44) + *(float *)(param_2 + 0x44);
  local_d0 = 0;
  local_cc = 0x3f800000;
  local_c8 = 0;
  local_90 = *(float *)(param_2 + 0x20) * local_84;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0x3f800000;
  local_b4 = 0;
  local_8c = *(float *)(param_2 + 0x24) * local_84;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0x3f800000;
  local_88 = *(float *)(param_2 + 0x28) * local_84;
  local_84 = *(float *)(param_2 + 0x2c) * local_84;
  local_74 = *(float *)(param_2 + 0x48) + *(float *)(param_2 + 0x48);
  local_80 = *(float *)(param_2 + 0x30) * local_74;
  local_7c = *(float *)(param_2 + 0x34) * local_74;
  local_78 = *(float *)(param_2 + 0x38) * local_74;
  local_74 = local_74 * *(float *)(param_2 + 0x3c);
  ExceptionList = &pvStack_1c;
  FUN_0045a930(local_60,&local_a0,&local_e0);
  uStack_34 = param_1[2];
  uStack_3c = *param_1;
  uStack_38 = param_1[1];
  if (*(int *)(param_2 + 0x4c) == 0) {
    puVar3 = (undefined4 *)FUN_00567160();
    uStack_20 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      pcVar6 = "DEBUG_CUBE";
      do {
        pcVar1 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar1 != '\0');
      iVar4 = FUN_00567160();
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004454d0();
      }
      puVar3[2] = uVar5;
      puVar3[3] = 0;
      puVar3[5] = 1;
      puVar3[6] = 0;
      puVar3[4] = 0;
      puVar3[0x18] = 0;
      *DAT_00737820 = puVar3;
      puVar2 = puVar3;
      puVar3[1] = DAT_00737820;
      DAT_00737820 = puVar2;
      *puVar3 = &DAT_0073781c;
      *(undefined1 *)(puVar3 + 7) = 0;
    }
    uStack_20 = 0xffffffff;
    *(undefined4 **)(param_2 + 0x4c) = puVar3;
  }
  iVar4 = *(int *)(*(int *)(param_2 + 0x4c) + 0x60);
  *(undefined4 *)(*(int *)(param_2 + 0x4c) + 0x10) = 1;
  if (iVar4 == 0) {
    FUN_00401cd0();
  }
  else {
    FUN_00401cd0();
    if (*(int *)(iVar4 + 0xe4) == 0) {
      FUN_00579190();
      ExceptionList = pvStack_28;
      return;
    }
  }
  ExceptionList = pvStack_28;
  return;
}
