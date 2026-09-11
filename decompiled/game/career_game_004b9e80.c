/* spd-match: far pct=6.52 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004b9370();
int __cdecl FUN_004eebf0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f7b50();
int __cdecl FUN_004f84d0();
extern int DAT_0073578c;
extern int DAT_00746104;
extern unsigned char *PTR_LAB_006c5ba8;
extern void LAB_0068737c(void);
void *ExceptionList;

void FUN_004b9e80(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0068737c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_006c5ba8;
  iVar2 = DAT_0073578c;
  local_4 = 3;
  if (((DAT_0073578c != 0) && (iVar4 = FUN_004f3f90(&DAT_00746104), iVar4 != 0)) &&
     (*(int *)(iVar4 + 0x18) != 0)) {
    FUN_004eebf0(*(undefined4 *)(iVar2 + 8),*(int *)(iVar4 + 0x18));
  }
  (*(unsigned char *)&(local_4)) = 2;
  FUN_004b9370();
  FUN_004f84d0();
  piVar1 = (int *)param_1[0x10];
  local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
  while (piVar1 != param_1 + 0x10) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    if (piVar1 + -1 != (int *)0x0) {
      (**(code **)piVar1[-1])(1);
    }
    piVar1 = (int *)param_1[0x10];
  }
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = pvStack_c;
  return;
}
