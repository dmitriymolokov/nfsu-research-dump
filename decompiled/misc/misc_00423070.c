/* spd-match: far pct=6.01 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_uchar_int */
#include "ghidra_compat.h"

int __cdecl FUN_00421ae0(...);
int __cdecl FUN_0047e9d0(...);
extern unsigned char *DAT_0073619c;
extern int DAT_00737074;
extern int DAT_0078a368;
extern void LAB_00423174(...);
extern void LAB_00423184(...);
extern void LAB_004231da(...);
extern void LAB_004231ea(...);
extern void LAB_006869c0(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 FUN_00423070(undefined4 param_2, undefined4 param_3);
};
undefined4 ThisCallBox::FUN_00423070(undefined4 param_2, undefined4 param_3) {
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar4 = (int *)(unsigned int)(DAT_0073619c);
  uStack_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_006869c0;
  local_c = ExceptionList;
  switch(param_2) {
  case 1:
    if (((undefined4 *)this)[0xd] == 0) {
      ExceptionList = &local_c;
      pvVar5 = _malloc(0x28);
      if (pvVar5 != (void *)0x0) {
        uVar6 = FUN_0047e9d0();
        ((undefined4 *)this)[0xd] = uVar6;
        ExceptionList = local_c;
        return 1;
      }
      ((undefined4 *)this)[0xd] = 0;
    }
    break;
  case 2:
    break;
  case 3:
    if (DAT_00737074 == 0) goto switchD_00423098_caseD_4;
    break;
  case 4:
switchD_00423098_caseD_4:
    iVar7 = 0;
    bVar9 = DAT_0078a368 == 0;
    piVar8 = (int *)(unsigned int)(DAT_0073619c + 9);
    piVar1 = (int *)(unsigned int)(DAT_0073619c + 9);
    ExceptionList = &local_c;
    *DAT_0073619c = 2;
    if (bVar9) {
      if (0 < *piVar8) {
        piVar8 = piVar4 + 0x148;
        do {
          iVar2 = *(int *)*piVar8;
          iVar3 = *(int *)(iVar2 + 0x24);
          if (0 < iVar3) {
            if (iVar3 < 3) {
LAB_004231da:
              if (*piVar4 == 4) {
                (**(code **)(**(int **)(iVar2 + 0x30) + 0x20))();
              }
              else {
LAB_004231ea:
                (**(code **)(**(int **)(iVar2 + 0x30) + 0x1c))();
              }
            }
            else if (iVar3 == 3) {
              iVar3 = *(int *)(iVar2 + 0x30);
              if (*piVar4 == 4) {
                *(undefined4 *)(iVar3 + 0x1e0) = 0;
                *(undefined4 *)(iVar3 + 0x1e4) = 0;
                *(undefined4 *)(iVar3 + 0x1dc) = 0x3f800000;
                goto LAB_004231da;
              }
              goto LAB_004231ea;
            }
          }
          iVar7 = iVar7 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar7 < *piVar1);
      }
    }
    else if (0 < *piVar8) {
      piVar8 = piVar4 + 0x148;
      do {
        iVar2 = *(int *)*piVar8;
        iVar3 = *(int *)(iVar2 + 0x24);
        if (0 < iVar3) {
          if (iVar3 < 3) {
LAB_00423174:
            if (*piVar4 == 4) {
              (**(code **)(**(int **)(iVar2 + 0x30) + 0x20))();
            }
            else {
LAB_00423184:
              (**(code **)(**(int **)(iVar2 + 0x30) + 0x1c))();
            }
          }
          else if (iVar3 == 3) {
            iVar3 = *(int *)(iVar2 + 0x30);
            if (*piVar4 == 4) {
              *(undefined4 *)(iVar3 + 0x1e0) = 0;
              *(undefined4 *)(iVar3 + 0x1e4) = 0;
              *(undefined4 *)(iVar3 + 0x1dc) = 0x3f800000;
              goto LAB_00423174;
            }
            goto LAB_00423184;
          }
        }
        iVar7 = iVar7 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar7 < *piVar1);
    }
    FUN_00421ae0(3);
    ExceptionList = local_c;
    return 1;
  case 5:
    ExceptionList = &local_c;
    ((undefined4 *)this)[7] = param_3;
    ((undefined4 *)this)[8] = *((undefined4 *)this);
    FUN_00421ae0(7);
    ExceptionList = local_c;
    return 1;
  default:
    return 0;
  }
  ExceptionList = local_c;
  return 1;
}
