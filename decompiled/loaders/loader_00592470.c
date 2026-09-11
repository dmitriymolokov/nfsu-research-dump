/* spd-match: far pct=10.09 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_00440740();
int __cdecl FUN_00468340();
int __cdecl FUN_00468a50();
int __cdecl FUN_00468ec0();
int __cdecl FUN_00473cf0();
int __cdecl FUN_0053f5f0();
extern unsigned char *DAT_00736010;
extern unsigned char *DAT_0073601c;
extern int DAT_00736038;
extern int DAT_00736044;
extern unsigned char *PTR_FUN_006b8d88;
extern unsigned char *PTR_FUN_006c85b8;
extern void LAB_00473d60(void);
extern void LAB_00473dd0(void);
extern void LAB_00685ecb(void);
void *ExceptionList;

undefined4 * FUN_00592470(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00685ecb;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_00468340(param_1,4);
  *param_1 = &PTR_FUN_006c85b8;
  param_1[0x19] = param_1 + 0x51;
  DAT_00736010 = DAT_00736010 + 1;
  if (DAT_00736038 < DAT_00736010) {
    DAT_00736038 = DAT_00736010;
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 1;
  param_1[0x18] = 0;
  param_1[0x4c] = 0;
  *param_1 = &PTR_FUN_006b8d88;
  local_14 = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  FUN_00440740();
  DAT_0073601c = DAT_0073601c + 1;
  local_14 = CONCAT31(((unsigned int)(local_14) >> 8),1);
  if (DAT_00736044 < DAT_0073601c) {
    DAT_00736044 = DAT_0073601c;
  }
  param_1[0x50] = param_2;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x102] = 0;
  pcVar2 = (char *)(param_1 + 0xd);
  *(undefined1 *)((int)param_1 + 0x1d) = 1;
  iVar6 = 0x28;
  iVar5 = (int)"World Object" - (int)pcVar2;
  do {
    cVar1 = pcVar2[iVar5];
    iVar6 = iVar6 + -1;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    pcVar2 = pcVar2 + 1;
  } while (iVar6 != 0);
  *(undefined1 *)((int)param_1 + 0x5b) = 0;
  FUN_0053f5f0();
  pvVar3 = _malloc(0x40);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    *(undefined1 **)((int)pvVar3 + 8) = &LAB_00473dd0;
    *(undefined1 **)((int)pvVar3 + 0xc) = &LAB_00473d60;
    *(undefined4 *)((int)pvVar3 + 0x10) = 3;
    *(undefined4 *)((int)pvVar3 + 0x14) = 8;
    uVar4 = FUN_00473cf0(local_40,local_3c,local_38,local_30,local_2c,local_28);
  }
  param_1[4] = uVar4;
  FUN_00468a50();
  FUN_00468ec0();
  ExceptionList = local_1c;
  return param_1;
}
