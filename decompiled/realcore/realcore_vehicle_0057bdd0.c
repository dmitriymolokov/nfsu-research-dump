/* spd-match: far pct=9.69 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_00443a10();
int __cdecl FUN_00577d10();
int __cdecl FUN_00577d50();
int __cdecl FUN_00578060();
int __cdecl FUN_0057a070();
extern int DAT_006b5c14;
extern unsigned char *DAT_007345ac;
extern int DAT_007372b0;
extern int _DAT_006b5c10;
extern unsigned char *PTR_FUN_006ba438;
extern void LAB_00686e5b(void);
extern char stack0xfffffffc;
void *ExceptionList;

undefined4 * FUN_0057bdd0(undefined4 *param_1,undefined4 param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined1 local_40 [28];
  int local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = (unsigned char *)(unsigned int)&LAB_00686e5b;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_00578060(param_1,param_2,0);
  *param_1 = &PTR_FUN_006ba438;
  local_14 = 0;
  if (*(int *)(param_1[8] + 0x14) != 0) {
    *(float *)(*(int *)(param_1[8] + 0x14) + 100) = (float)(unsigned int)(DAT_007345ac) * _DAT_006b5c10;
  }
  DAT_007345ac = DAT_007345ac + 1;
  param_1[0x24] = 0;
  pcVar4 = "XO_Train_EngineA_1b_3001";
  iVar5 = -1;
  uVar3 = 0x58;
  do {
    iVar5 = iVar5 * 0x21 + uVar3;
    pbVar1 = (byte *)(pcVar4 + 1);
    uVar3 = (uint)*pbVar1;
    pcVar4 = pcVar4 + 1;
  } while (*pbVar1 != 0);
  if (iVar5 != 0) {
    FUN_00577d10(0x24cebc53);
    local_24 = FUN_00577d50();
    if (local_24 != 0) {
      iVar5 = *(int *)(local_24 + 0x20);
      iVar2 = *(int *)(iVar5 + 0x14);
      if (iVar2 != 0) {
        *(float *)(iVar2 + 100) = (float)(unsigned int)(DAT_007345ac) * _DAT_006b5c10;
      }
      FUN_0057a070(iVar5,DAT_006b5c14);
      FUN_00443a10(&DAT_007372b0,local_40);
      param_1[0x24] = 0;
      *(undefined4 **)(local_24 + 0x98 + *(int *)(local_24 + 0x90) * 4) = param_1;
      *(int *)(local_24 + 0x90) = *(int *)(local_24 + 0x90) + 1;
    }
  }
  *(undefined4 *)(param_1[0xc] + 0x18) = 1;
  ExceptionList = local_1c;
  return param_1;
}
