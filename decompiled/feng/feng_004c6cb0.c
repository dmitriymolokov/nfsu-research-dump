/* spd-match: far pct=9.05 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_00495f00();
int __cdecl FUN_004ac5a0();
int __cdecl FUN_004b2480();
int __cdecl FUN_004c6c00();
int __cdecl FUN_004c7150();
int __cdecl FUN_004eede0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8730();
int __cdecl FUN_004f8960();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_0051ba80();
int __cdecl FUN_0051c830();
int __cdecl FUN_005a1550();
extern int DAT_006fad68;
extern unsigned char *DAT_0073578c;
extern int DAT_00744ff8;
extern int DAT_00745000;
extern int DAT_00745720;
extern int DAT_00745e40;
extern int DAT_00746104;
extern int DAT_0075eef8;
extern unsigned char *DAT_0075f204;
extern int DAT_00777b4c;
extern unsigned char *PTR_FUN_006c51b4;
extern void LAB_004c6e58(void);
extern void LAB_004c6eae(void);
extern void LAB_0068906e(void);
void *ExceptionList;

undefined4 * FUN_004c6cb0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0068906e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(param_1,param_2);
  puVar1 = param_1 + 0x11;
  *param_1 = &PTR_FUN_006c51b4;
  *puVar1 = puVar1;
  param_1[0x12] = puVar1;
  (*(unsigned char *)&(local_8)) = 1;
  (local_8 = ((unsigned int)(local_8) & 0xff));
  FUN_004f8370(param_1 + 0x13,"master_thumb","car_thumb");
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),2);
  *(undefined1 *)((int)param_1 + 0x8b) = 1;
  uVar2 = FUN_0051ba80();
  *(undefined1 *)((int)param_1 + 0x89) = uVar2;
  *(undefined1 *)((int)param_1 + 0x8a) = 0;
  param_2 = &DAT_006fad68;
  do {
    iVar6 = param_2[-2];
    cVar3 = FUN_005a1550(&DAT_0075eef8,iVar6);
    if ((cVar3 != '\0') && (*(int *)(&DAT_0075f204 + param_2[-1] * 4) == 0)) {
      iVar7 = *param_2;
      iVar8 = param_2[1];
      iVar4 = FUN_004f8730(param_1 + 0x13,iVar6,0,1);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x24) != iVar7)) {
        *(int *)(iVar4 + 0x24) = iVar7;
        *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x400000;
      }
      piVar5 = _malloc(0x14);
      piVar5[4] = iVar8;
      piVar5[2] = iVar6;
      piVar5[3] = iVar6;
      puVar1 = (undefined4 *)param_1[0x12];
      *puVar1 = piVar5;
      param_1[0x12] = piVar5;
      piVar5[1] = (int)puVar1;
      *piVar5 = (int)(param_1 + 0x11);
    }
    param_2 = param_2 + 4;
  } while ((int)param_2 < 0x6fadf8);
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x10] = param_1[0x11];
  FUN_004f8960();
  FUN_00495f00(*(undefined4 *)(param_1[0x10] + 0x10));
  *(undefined1 *)(param_1 + 8) = 1;
  iVar6 = FUN_004f3f90(&DAT_00746104);
  if (((iVar6 == 0) || (*(int *)(iVar6 + 0x18) == 0)) && (DAT_0073578c != 0)) {
    iVar7 = *(int *)(DAT_0073578c + 8);
    iVar6 = iVar7 + 0xdc;
    if (iVar6 != 0) {
      iVar6 = FUN_004fd1e0(iVar6);
      if (iVar6 != 0) goto LAB_004c6e58;
    }
    FUN_004eede0(iVar7,"MU_HorizontalBrowserBack.fng",0x10,0);
  }
LAB_004c6e58:
  iVar6 = FUN_004f3f90(&DAT_00746104);
  if (((iVar6 == 0) || (*(int *)(iVar6 + 0x18) == 0)) && (DAT_0073578c != 0)) {
    iVar7 = *(int *)(DAT_0073578c + 8);
    iVar6 = iVar7 + 0xdc;
    if (iVar6 != 0) {
      iVar6 = FUN_004fd1e0(iVar6);
      if (iVar6 != 0) goto LAB_004c6eae;
    }
    FUN_004eede0(iVar7,"GarageMain.fng",0x10,0);
  }
LAB_004c6eae:
  iVar6 = FUN_004f3f90(&DAT_00746104);
  if (((iVar6 != 0) && (*(int *)(iVar6 + 0x18) != 0)) && (*(int **)(iVar6 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar6 + 0x14) + 8))(0x6c6603df,0,0,*(int *)(iVar6 + 0x18));
  }
  iVar6 = FUN_004f3f90(&DAT_00746104);
  if (((iVar6 != 0) && (*(int *)(iVar6 + 0x18) != 0)) && (*(int **)(iVar6 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar6 + 0x14) + 8))(0xb7fc3e,0,0,*(int *)(iVar6 + 0x18));
  }
  if (DAT_00777b4c == 4) {
    iVar6 = FUN_004f3f90(&DAT_00746104);
    if (((iVar6 != 0) && (*(int *)(iVar6 + 0x18) != 0)) && (*(int **)(iVar6 + 0x14) != (int *)0x0))
    {
      (**(code **)(**(int **)(iVar6 + 0x14) + 8))(0x18883f75,0,0,*(int *)(iVar6 + 0x18));
    }
  }
  else {
    iVar6 = FUN_004f3f90(&DAT_00746104);
    if (((iVar6 != 0) && (*(int *)(iVar6 + 0x18) != 0)) && (*(int **)(iVar6 + 0x14) != (int *)0x0))
    {
      (**(code **)(**(int **)(iVar6 + 0x14) + 8))(0x18883f75,0,0,*(int *)(iVar6 + 0x18));
    }
  }
  FUN_004b2480();
  iVar6 = FUN_004c6c00();
  if (iVar6 != -1) {
    FUN_0051c830(0xffffffff);
  }
  if (DAT_0073578c != 0) {
    iVar6 = FUN_004f3f90(&DAT_00746104);
    if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
      iVar7 = *(int *)(iVar6 + 0x88);
      iVar8 = 0;
      if (iVar7 != 0) {
        piVar5 = *(int **)(iVar6 + 0x84);
        do {
          if (*(int *)(*piVar5 + 0x10) == -0x15619cfe) {
            iVar8 = *piVar5;
          }
          piVar5 = piVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        if (iVar8 != 0) {
          *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | 0x4000000;
        }
      }
    }
  }
  DAT_00744ff8 = &DAT_0075eef8;
  FUN_004ac5a0(&DAT_0075eef8,0,&DAT_00745000);
  FUN_004ac5a0(DAT_00744ff8,0,&DAT_00745720);
  FUN_004c7150();
  DAT_00745e40 = 1;
  ExceptionList = local_10;
  return param_1;
}
