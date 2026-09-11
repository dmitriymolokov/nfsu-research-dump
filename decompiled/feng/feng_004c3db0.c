/* spd-match: far pct=12.77 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004323f0();
int __cdecl FUN_004b0e50();
int __cdecl FUN_004b2330();
int __cdecl FUN_004b2480();
int __cdecl FUN_004c42d0();
int __cdecl FUN_004c44c0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f62f0();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_0051c830();
extern int DAT_006fa7f0;
extern int DAT_00746104;
extern int DAT_00748850;
extern int DAT_0076029c;
extern int DAT_00777b4c;
extern int _DAT_0072cc80;
extern unsigned char *PTR_FUN_006c5460;
extern void LAB_00688a8e(void);
void *ExceptionList;

undefined4 * FUN_004c3db0(undefined4 *param_1,undefined4 param_2)

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
  *param_1 = &PTR_FUN_006c5460;
  *puVar1 = puVar1;
  param_1[0x11] = puVar1;
  (*(unsigned char *)&(local_8)) = 1;
  (local_8 = ((unsigned int)(local_8) & 0xff));
  FUN_004f8370(param_1 + 0x13,"master_thumb","thumb");
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),2);
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0x78;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0x3c;
  param_1[0x27] = 0;
  FUN_004c42d0(param_1);
  iVar3 = param_1[0x12];
  iVar2 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,iVar3 + 0x10);
  _DAT_0072cc80 = 2;
  if (iVar2 != 0) {
    FUN_004b0e50(iVar2,&DAT_00748850,2);
  }
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x18) == 0)) {
    FUN_004f62f0();
  }
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
  FUN_004c44c0();
  *(undefined1 *)(param_1 + 8) = 1;
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int **)(iVar3 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0x6c6603df,0,0,*(int *)(iVar3 + 0x18));
  }
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int **)(iVar3 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0x56aa7e46,0,0,*(int *)(iVar3 + 0x18));
  }
  if ((DAT_0076029c & 0x200000) == 0) {
    iVar3 = 0;
    do {
      if ((&DAT_006fa7f0)[iVar3 * 2] == 0x200000) {
        if (*(int *)(iVar3 * 8 + 0x6fa7f4) == -1) {
          ExceptionList = local_10;
          return param_1;
        }
        FUN_0051c830(0xffffffff);
        DAT_0076029c = DAT_0076029c | 0x200000;
        ExceptionList = local_10;
        return param_1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x19);
  }
  ExceptionList = local_10;
  return param_1;
}
