/* spd-match: far pct=9.09 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004cd440();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8960();
int __cdecl FUN_005046d0();
int __cdecl FUN_0050ab00();
int __cdecl FUN_0050abf0();
int __cdecl FUN_0050ada0();
int __cdecl FUN_0051c830();
int __cdecl FUN_00567c70();
int __cdecl FUN_005a4480();
extern int DAT_006f889c;
extern int DAT_0073572c;
extern int DAT_0073ad3c;
extern unsigned char *DAT_00745728;
extern int DAT_00745e40;
extern int DAT_00746104;
extern int DAT_0076029c;
extern int DAT_007677ac;
extern unsigned char *PTR_FUN_006c01cc;
extern void LAB_0050a814(void);
extern void LAB_0050a84e(void);
extern void LAB_0068906e(void);
void *ExceptionList;

undefined4 * FUN_0050a5d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0068906e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(param_1,param_2);
  puVar1 = param_1 + 0x11;
  *param_1 = &PTR_FUN_006c01cc;
  *puVar1 = puVar1;
  param_1[0x12] = puVar1;
  (*(unsigned char *)&(local_8)) = 1;
  (local_8 = ((unsigned int)(local_8) & 0xff));
  FUN_004f8370(param_1 + 0x13,"master_thumb","thumb");
  uVar4 = (uint)DAT_0073572c;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),2);
  param_1[0x24] = uVar4;
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int **)(iVar3 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0xe8e61aab,0,0,*(int *)(iVar3 + 0x18));
  }
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int **)(iVar3 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0xb7fc3e,0,0,*(int *)(iVar3 + 0x18));
  }
  switch(DAT_006f889c) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  default:
    goto switchD_0050a6bd_default;
  }
  FUN_00567c70();
switchD_0050a6bd_default:
  bVar5 = DAT_007677ac == 0;
  if (DAT_00745e40 == 1) {
    iVar3 = FUN_005a4480();
    FUN_0050abf0(0,0x77f92738,iVar3 == 0);
    FUN_0050abf0(1,0x9a08dd84,iVar3 == 1);
    FUN_0050abf0(2,0x9a08dd85,iVar3 == 2);
    bVar5 = iVar3 == 3;
  }
  else {
    FUN_0050abf0(0,0x77f92738,0);
    if ((((((bVar5) && (cVar2 = FUN_0050ab00(param_1,DAT_006f889c), cVar2 == '\0')) ||
          (FUN_0050abf0(1,0x9a08dd84,0), bVar5)) &&
         (cVar2 = FUN_0050ab00(param_1,DAT_006f889c), cVar2 == '\0')) ||
        (FUN_0050abf0(2,0x9a08dd85,0), bVar5)) &&
       (cVar2 = FUN_0050ab00(param_1,DAT_006f889c), cVar2 == '\0')) goto LAB_0050a814;
    bVar5 = false;
  }
  FUN_0050abf0(3,0x9a08dd86,bVar5);
LAB_0050a814:
  iVar3 = DAT_006f889c;
  param_1[0x22] = 0;
  puVar1 = (undefined4 *)param_1[0x11];
  do {
    if (puVar1 == param_1 + 0x11) {
      param_1[0x10] = (undefined4 *)param_1[0x11];
LAB_0050a84e:
      FUN_004f8960();
      FUN_0050ada0(param_1);
      FUN_005046d0();
      iVar3 = DAT_006f889c;
      *(undefined1 *)(param_1 + 8) = 1;
      uVar4 = 0;
      param_1[0x23] = DAT_0073ad3c;
      switch(iVar3) {
      case 0:
        uVar4 = 0x4000;
        break;
      case 1:
        uVar4 = 0x400;
        break;
      case 2:
        uVar4 = 0x100;
        break;
      case 3:
        uVar4 = 0x2000;
        break;
      case 4:
        uVar4 = 0x200;
        break;
      case 5:
        uVar4 = 0x80;
        break;
      case 6:
        uVar4 = 0x1000;
        break;
      case 7:
        uVar4 = 0x800;
        break;
      case 8:
        uVar4 = 0x40;
      }
      if ((((DAT_00745e40 == 1) && (uVar4 != 0)) && ((DAT_0076029c & uVar4) == 0)) &&
         (iVar3 = FUN_004cd440(), iVar3 != -1)) {
        FUN_0051c830(0xffffffff);
        DAT_0076029c = DAT_0076029c | uVar4;
      }
      ExceptionList = local_10;
      return param_1;
    }
    if (puVar1[2] == *(int *)(&DAT_00745728 + iVar3 * 4)) {
      param_1[0x10] = puVar1;
      goto LAB_0050a84e;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}
