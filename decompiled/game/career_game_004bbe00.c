/* spd-match: far pct=6.39 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_00495f00();
int __cdecl FUN_004b2480();
int __cdecl FUN_004bc170();
int __cdecl FUN_004c6970();
int __cdecl FUN_004e6ac0();
int __cdecl FUN_004eede0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f62f0();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8000();
int __cdecl FUN_004f8370();
int __cdecl FUN_004fd1e0();
extern int DAT_0073578c;
extern int DAT_00746104;
extern int DAT_00748f70;
extern int DAT_00777b4c;
extern unsigned char *PTR_FUN_006c5b60;
extern void LAB_004bbea4(void);
extern void LAB_0068921e(void);
void *ExceptionList;

undefined4 * FUN_004bbe00(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0068921e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004f78e0(param_1,param_2);
  puVar1 = param_1 + 0x10;
  *param_1 = &PTR_FUN_006c5b60;
  *puVar1 = puVar1;
  param_1[0x11] = puVar1;
  (*(unsigned char *)&(local_4)) = 1;
  (local_4 = ((unsigned int)(local_4) & 0xff));
  FUN_004f8370(param_1 + 0x14,"car_thumb3","car_thumb");
  iVar3 = DAT_0073578c;
  bVar4 = DAT_0073578c != 0;
  param_1[0x24] = 0;
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),2);
  param_1[0x24] = 0;
  if (bVar4) {
    iVar2 = *(int *)(iVar3 + 8);
    iVar3 = iVar2 + 0xdc;
    if (iVar3 != 0) {
      iVar3 = FUN_004fd1e0(iVar3);
      if (iVar3 != 0) goto LAB_004bbea4;
    }
    FUN_004eede0(iVar2,"MU_HorizontalBrowserBack.fng",0x11,0);
  }
LAB_004bbea4:
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int **)(iVar3 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0x1c2d8258,0,0,*(int *)(iVar3 + 0x18));
  }
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int **)(iVar3 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0x50fe8c15,0,0,*(int *)(iVar3 + 0x18));
  }
  FUN_004bc170(param_1);
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if (((iVar3 == 0) || (*(int *)(iVar3 + 0x18) == 0)) && (DAT_00777b4c != 4)) {
    FUN_004f62f0();
  }
  DAT_00748f70 = 1;
  FUN_004c6970();
  if (DAT_00777b4c == 4) {
    iVar3 = FUN_004f3f90(&DAT_00746104);
    if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int **)(iVar3 + 0x14) != (int *)0x0))
    {
      (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0x18883f75,0,0,*(int *)(iVar3 + 0x18));
    }
  }
  else {
    iVar3 = FUN_004f3f90(&DAT_00746104);
    if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int **)(iVar3 + 0x14) != (int *)0x0))
    {
      (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0x18883f75,0,0,*(int *)(iVar3 + 0x18));
    }
  }
  FUN_004b2480();
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((int)param_1 + 0x95) = 0;
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int **)(iVar3 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0x6c6603df,0,0,*(int *)(iVar3 + 0x18));
  }
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int **)(iVar3 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0x56aa7e46,0,0,*(int *)(iVar3 + 0x18));
  }
  if (DAT_00777b4c == 8) {
    FUN_00495f00(0xfec88958);
    param_1[0x28] = 0x6c40847c;
  }
  else {
    FUN_00495f00(0x5aca5feb);
    param_1[0x28] = 0x4a9c06b2;
  }
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x14) != 0)) {
    FUN_004f8000(param_1);
    FUN_004e6ac0();
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
  ExceptionList = pvStack_c;
  return param_1;
}
