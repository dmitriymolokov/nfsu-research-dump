/* spd-match: far pct=9.34 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004323f0();
int __cdecl FUN_004b0e50();
int __cdecl FUN_004b2330();
int __cdecl FUN_004b2480();
int __cdecl FUN_004c66d0();
int __cdecl FUN_004c6970();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f62f0();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
extern int DAT_00746104;
extern int DAT_00748850;
extern int DAT_00777b4c;
extern int _DAT_0072cc80;
extern unsigned char *PTR_FUN_006c52b8;
extern void LAB_004c65f5(void);
extern void LAB_004c6661(void);
extern void LAB_00688a8e(void);
void *ExceptionList;

undefined4 * FUN_004c6530(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00688a8e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(param_1,param_2);
  puVar1 = param_1 + 0x10;
  *param_1 = &PTR_FUN_006c52b8;
  *puVar1 = puVar1;
  param_1[0x11] = puVar1;
  (*(unsigned char *)&(local_8)) = 1;
  (local_8 = ((unsigned int)(local_8) & 0xff));
  FUN_004f8370(param_1 + 0x13,"car_thumb3","car_thumb");
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),2);
  param_1[0x22] = 0;
  FUN_004c66d0(param_1);
  iVar3 = param_1[0x12];
  iVar2 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,iVar3 + 0x10);
  _DAT_0072cc80 = 1;
  if (iVar2 != 0) {
    FUN_004b0e50(iVar2,&DAT_00748850,1);
  }
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x18) == 0)) {
    if (DAT_00777b4c != 4) {
      FUN_004f62f0();
      goto LAB_004c65f5;
    }
  }
  else {
LAB_004c65f5:
    if (DAT_00777b4c != 4) {
      iVar3 = FUN_004f3f90(&DAT_00746104);
      if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int **)(iVar3 + 0x14) != (int *)0x0)
         ) {
        (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0x18883f75,0,0,*(int *)(iVar3 + 0x18));
      }
      goto LAB_004c6661;
    }
  }
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int **)(iVar3 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0x18883f75,0,0,*(int *)(iVar3 + 0x18));
  }
LAB_004c6661:
  FUN_004b2480();
  FUN_004c6970();
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int **)(iVar3 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0x6c6603df,0,0,*(int *)(iVar3 + 0x18));
  }
  ExceptionList = local_10;
  return param_1;
}
