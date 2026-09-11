/* spd-match: far pct=13.92 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_00417600();
int __cdecl FUN_004323f0();
int __cdecl FUN_004ac5a0();
int __cdecl FUN_004b0e50();
int __cdecl FUN_004b2330();
int __cdecl FUN_004b2480();
int __cdecl FUN_004c2d20();
int __cdecl FUN_004c3120();
int __cdecl FUN_004c3240();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f62f0();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8960();
extern unsigned char *DAT_00735e6c;
extern int DAT_00745000;
extern int DAT_00746104;
extern int DAT_00748850;
extern int DAT_0075eef8;
extern int DAT_00777b4c;
extern int _DAT_0072cc80;
extern unsigned char *PTR_LAB_006c55dc;
extern void LAB_00688a8e(void);
void *ExceptionList;

void FUN_004c2ed0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00688a8e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(param_1,param_2);
  puVar1 = param_1 + 0x10;
  *param_1 = &PTR_LAB_006c55dc;
  *puVar1 = puVar1;
  param_1[0x11] = puVar1;
  (*(unsigned char *)&(local_8)) = 1;
  (local_8 = ((unsigned int)(local_8) & 0xff));
  FUN_004f8370(param_1 + 0x13,"master_thumb","thumb");
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),2);
  FUN_00417600();
  FUN_004ac5a0(&DAT_0075eef8,0,param_1 + 0x24);
  bVar3 = false;
  if (DAT_00735e6c == (void *)0x0) {
    pvVar4 = _malloc(0xe40);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      FUN_00417600();
      FUN_00417600();
    }
    bVar3 = true;
    DAT_00735e6c = pvVar4;
  }
  FUN_004c3240(param_1);
  if (bVar3) {
    param_1[0x12] = *puVar1;
  }
  else {
    puVar2 = (undefined4 *)*puVar1;
    puVar6 = puVar2;
    if (puVar2 != puVar1) {
      puVar5 = puVar2;
      do {
        puVar6 = puVar5;
        if (*(int *)(puVar5[0x1cc] + 0xc50) == *(int *)((int)DAT_00735e6c + 0x720)) break;
        puVar5 = (undefined4 *)*puVar5;
        puVar6 = puVar2;
      } while (puVar5 != puVar1);
    }
    param_1[0x12] = puVar6;
  }
  iVar7 = param_1[0x12];
  if (*(char *)(iVar7 + 0xe60) == '\0') {
    FUN_004c2d20(param_1 + 0x24);
    *(undefined1 *)(iVar7 + 0xe60) = 1;
  }
  FUN_004323f0(&DAT_00745000,iVar7 + 0x740);
  iVar7 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,&DAT_00745000);
  _DAT_0072cc80 = 2;
  if (iVar7 != 0) {
    FUN_004b0e50(iVar7,&DAT_00748850,2);
  }
  FUN_004c3120();
  FUN_004f8960();
  iVar7 = FUN_004f3f90(&DAT_00746104);
  if (((iVar7 == 0) || (*(int *)(iVar7 + 0x18) == 0)) && (DAT_00777b4c != 4)) {
    FUN_004f62f0();
  }
  FUN_004b2480();
  *(undefined1 *)(param_1 + 8) = 1;
  ExceptionList = local_10;
  return;
}
