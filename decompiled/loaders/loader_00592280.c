/* spd-match: far pct=8.42 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_00440740();
int __cdecl FUN_00468340();
int __cdecl FUN_00468a50();
int __cdecl FUN_00468ec0();
int __cdecl FUN_00473cf0();
extern unsigned char *DAT_00736010;
extern unsigned char *DAT_0073601c;
extern int DAT_00736038;
extern int DAT_00736044;
extern int DAT_00779bd8;
extern unsigned char *PTR_FUN_006b8d88;
extern unsigned char *PTR_FUN_006c85b8;
extern void LAB_00473d60(void);
extern void LAB_00473dd0(void);
extern void LAB_00592414(void);
extern void LAB_00685ef5(void);
void *ExceptionList;

undefined4 * FUN_00592280(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00685ef5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
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
  local_4 = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  FUN_00440740();
  DAT_0073601c = DAT_0073601c + 1;
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
  if (DAT_00736044 < DAT_0073601c) {
    DAT_00736044 = DAT_0073601c;
  }
  pcVar3 = (char *)(param_1 + 0xd);
  param_1[0x50] = param_2;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 1;
  param_1[0x102] = 0;
  iVar7 = 0x28;
  iVar8 = (int)"World Object" - (int)pcVar3;
  do {
    cVar1 = pcVar3[iVar8];
    iVar7 = iVar7 + -1;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    pcVar3 = pcVar3 + 1;
  } while (iVar7 != 0);
  *(undefined1 *)((int)param_1 + 0x5b) = 0;
  puVar2 = DAT_00779bd8;
  puVar4 = (undefined4 *)FUN_0040a880();
  do {
    if (puVar2 == puVar4) {
      param_1[0x101] = 1;
      pvVar5 = _malloc(0x40);
      if (pvVar5 == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        *(undefined1 **)((int)pvVar5 + 8) = &LAB_00473dd0;
        *(undefined1 **)((int)pvVar5 + 0xc) = &LAB_00473d60;
        *(undefined4 *)((int)pvVar5 + 0x10) = 3;
        *(undefined4 *)((int)pvVar5 + 0x14) = 8;
        uVar6 = FUN_00473cf0(0xc00de354,0xbf789375,0xbe4ccccd,0x400a8f5c,0x3f789375,0x3f1fbe77);
      }
      param_1[4] = uVar6;
LAB_00592414:
      FUN_00468a50();
      FUN_00468ec0();
      ExceptionList = local_c;
      return param_1;
    }
    if (puVar2[6] == param_3) {
      param_1[0x101] = 0;
      param_1[4] = puVar2;
      goto LAB_00592414;
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}
