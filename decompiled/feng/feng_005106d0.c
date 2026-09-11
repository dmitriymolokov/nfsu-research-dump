/* spd-match: far pct=5.56 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004f3f90();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8960();
int __cdecl FUN_00510900();
int __cdecl FUN_005117b0();
int __cdecl FUN_00567c70();
extern int DAT_00735748;
extern int DAT_0073574c;
extern int DAT_00746104;
extern unsigned char *PTR_FUN_006c0254;
extern void LAB_00510811(void);
extern void LAB_00688f1e(void);
void *ExceptionList;

undefined4 * FUN_005106d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688f1e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004f78e0(param_1,param_2);
  puVar1 = param_1 + 0x11;
  *param_1 = &PTR_FUN_006c0254;
  *puVar1 = puVar1;
  param_1[0x12] = puVar1;
  (*(unsigned char *)&(local_4)) = 1;
  (local_4 = ((unsigned int)(local_4) & 0xff));
  FUN_004f8370(param_1 + 0x13,"master_thumb","thumb");
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),2);
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (*(int **)(iVar2 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0xe8e61aab,0,0,*(int *)(iVar2 + 0x18));
  }
  uVar3 = DAT_00735748;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x89) = 0;
  switch(uVar3) {
  default:
    goto switchD_00510773_caseD_0;
  case 4:
    uVar4 = 0;
    uVar3 = 0x8c1ed0ae;
    FUN_00567c70(0x8c1ed0ae,0);
    FUN_005117b0(0,uVar3,uVar4);
    break;
  case 5:
    uVar4 = 0;
    uVar3 = 0x8c1ed0ae;
    FUN_00567c70(0x8c1ed0ae,0);
    FUN_005117b0(0,uVar3,uVar4);
    break;
  case 6:
    uVar4 = 0;
    uVar3 = 0x8c1ed0ae;
    FUN_00567c70(0x8c1ed0ae,0);
    FUN_005117b0(0,uVar3,uVar4);
  }
  uVar4 = 0;
  uVar3 = 0x8c1ed0af;
  FUN_00567c70(0x8c1ed0af,0);
  FUN_005117b0(1,uVar3,uVar4);
switchD_00510773_caseD_0:
  puVar1 = (undefined4 *)param_1[0x11];
  do {
    if (puVar1 == param_1 + 0x11) {
      param_1[0x10] = (undefined4 *)param_1[0x11];
LAB_00510811:
      FUN_004f8960();
      FUN_00510900();
      *(undefined1 *)(param_1 + 8) = 1;
      ExceptionList = pvStack_c;
      return param_1;
    }
    if (puVar1[2] == DAT_0073574c) {
      param_1[0x10] = puVar1;
      goto LAB_00510811;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}
