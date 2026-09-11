/* spd-match: far pct=9.58 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_00441b90();
int __cdecl FUN_00468340();
int __cdecl FUN_00468680();
int __cdecl FUN_00473410();
int __cdecl FUN_00473480();
int __cdecl FUN_00565da0();
extern int DAT_006b7270;
extern unsigned char *DAT_0073600c;
extern unsigned char *DAT_00736014;
extern int DAT_00736034;
extern int DAT_0073603c;
extern int DAT_0077b130;
extern int DAT_0077b140;
extern unsigned char *PTR_FUN_006c8630;
extern unsigned char *PTR_FUN_006c8720;
extern void LAB_00685d59(void);
extern char stack0xfffffffc;
void *ExceptionList;

undefined4 * FUN_0046a440(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char local_48 [24];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00685d59;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_00468340(param_1,3);
  *param_1 = &PTR_FUN_006c8720;
  DAT_0073600c = DAT_0073600c + 1;
  if (DAT_00736034 < DAT_0073600c) {
    DAT_00736034 = DAT_0073600c;
  }
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  local_14 = 0;
  *param_1 = &PTR_FUN_006c8630;
  FUN_00473410();
  DAT_00736014 = DAT_00736014 + 1;
  local_14 = CONCAT31(((unsigned int)(local_14) >> 8),1);
  if (DAT_0073603c < DAT_00736014) {
    DAT_0073603c = DAT_00736014;
  }
  param_1[4] = param_1 + 0x1c;
  FUN_00565da0("TrackPolygon%d",param_3 - DAT_0077b140 >> 5);
  pcVar3 = (char *)(param_1 + 0xd);
  iVar5 = 0x28;
  iVar4 = -(int)pcVar3;
  do {
    cVar1 = pcVar3[(int)(local_48 + iVar4)];
    iVar5 = iVar5 + -1;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    pcVar3 = pcVar3 + 1;
  } while (iVar5 != 0);
  *(undefined1 *)((int)param_1 + 0x5b) = 0;
  iVar4 = FUN_00441b90(&DAT_0077b130);
  uVar2 = DAT_006b7270;
  param_1[0x18] = iVar4;
  *(undefined4 **)(iVar4 + 0x10) = param_1;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  FUN_00473480(param_1[0x18],uVar2);
  FUN_00468680(param_1,param_1[0x18] + 0x14);
  ExceptionList = local_1c;
  return param_1;
}
