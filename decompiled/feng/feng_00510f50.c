/* spd-match: far pct=11.04 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004acce0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8960();
int __cdecl FUN_00506160();
int __cdecl FUN_00507020();
int __cdecl FUN_00510dc0();
int __cdecl FUN_00510e70();
int __cdecl FUN_005117b0();
int __cdecl FUN_005118b0();
int __cdecl FUN_0051be40();
int __cdecl FUN_00567c70();
extern int DAT_00706530;
extern int DAT_00734588;
extern int DAT_00735748;
extern int DAT_0073574c;
extern int DAT_00735750;
extern int DAT_00746104;
extern unsigned char *PTR_FUN_006c017c;
extern void LAB_00511165(void);
extern void LAB_005115d2(void);
extern void LAB_0068906e(void);
void *ExceptionList;

undefined4 * FUN_00510f50(undefined4 *param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0068906e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(param_1,param_2);
  puVar3 = param_1 + 0x11;
  *param_1 = &PTR_FUN_006c017c;
  *puVar3 = puVar3;
  param_1[0x12] = puVar3;
  (*(unsigned char *)&(local_8)) = 1;
  (local_8 = ((unsigned int)(local_8) & 0xff));
  FUN_004f8370(param_1 + 0x13,"master_thumb","thumb");
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),2);
  iVar5 = FUN_004f3f90(&DAT_00746104);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x18) != 0)) && (*(int **)(iVar5 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar5 + 0x14) + 8))(0xe8e61aab,0,0,*(int *)(iVar5 + 0x18));
  }
  cVar4 = FUN_00506160();
  switch(DAT_00735748) {
  default:
    goto switchD_00510ffa_caseD_0;
  case 2:
    if (cVar4 == '\0') {
      uVar10 = 0;
      uVar8 = 0x6bc2ecf0;
      FUN_00567c70(0x6bc2ecf0,0);
      FUN_005117b0(0,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf1;
      FUN_00567c70(0x6bc2ecf1,0);
      FUN_005117b0(1,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf2;
      FUN_00567c70(0x6bc2ecf2,0);
      FUN_005117b0(2,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf3;
      FUN_00567c70(0x6bc2ecf3,0);
      FUN_005117b0(3,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf4;
      FUN_00567c70(0x6bc2ecf4,0);
      FUN_005117b0(4,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf5;
      FUN_00567c70(0x6bc2ecf5,0);
      FUN_005117b0(5,uVar8,uVar10);
      goto switchD_00510ffa_caseD_0;
    }
    iVar5 = FUN_00510dc0(2);
    if (iVar5 < 1) {
      FUN_00507020(param_1);
    }
    else {
      uVar10 = 0;
      uVar8 = 0x6bc2ecf0;
      FUN_00510e70(0x6bc2ecf0,0);
      FUN_005117b0(0,uVar8,uVar10);
    }
    if (1 < iVar5) {
      uVar10 = 0;
      uVar8 = 0x6bc2ecf1;
      FUN_00510e70(0x6bc2ecf1,0);
      FUN_005117b0(1,uVar8,uVar10);
    }
    if (2 < iVar5) {
      uVar10 = 0;
      uVar8 = 0x6bc2ecf2;
      FUN_00510e70(0x6bc2ecf2,0);
      FUN_005117b0(2,uVar8,uVar10);
    }
    if (3 < iVar5) {
      uVar10 = 0;
      uVar8 = 0x6bc2ecf3;
      FUN_00510e70(0x6bc2ecf3,0);
      FUN_005117b0(3,uVar8,uVar10);
    }
    if (4 < iVar5) {
      uVar10 = 0;
      uVar8 = 0x6bc2ecf4;
      FUN_00510e70(0x6bc2ecf4,0);
      FUN_005117b0(4,uVar8,uVar10);
    }
    if (iVar5 < 6) goto switchD_00510ffa_caseD_0;
    uVar9 = 0;
    uVar10 = 0x6bc2ecf5;
    FUN_00510e70(0x6bc2ecf5,0);
    uVar8 = 5;
    break;
  case 3:
    if (cVar4 == '\0') {
      uVar10 = 0;
      uVar8 = 0x6bc2ecf0;
      FUN_00567c70(0x6bc2ecf0,0);
      FUN_005117b0(0,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf1;
      FUN_00567c70(0x6bc2ecf1,0);
      FUN_005117b0(1,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf2;
      FUN_00567c70(0x6bc2ecf2,0);
      FUN_005117b0(2,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf3;
      FUN_00567c70(0x6bc2ecf3,0);
      FUN_005117b0(3,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf4;
      FUN_00567c70(0x6bc2ecf4,0);
      FUN_005117b0(4,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf5;
      FUN_00567c70(0x6bc2ecf5,0);
      FUN_005117b0(5,uVar8,uVar10);
      goto switchD_00510ffa_caseD_0;
    }
    iVar5 = FUN_00510dc0(3);
    if (iVar5 < 1) {
      FUN_00507020(param_1);
    }
    else {
      uVar10 = 0;
      uVar8 = 0x6bc2ecf0;
      FUN_00510e70(0x6bc2ecf0,0);
      FUN_005117b0(0,uVar8,uVar10);
    }
    if (1 < iVar5) {
      uVar10 = 0;
      uVar8 = 0x6bc2ecf1;
      FUN_00510e70(0x6bc2ecf1,0);
      FUN_005117b0(1,uVar8,uVar10);
    }
    if (2 < iVar5) {
      uVar10 = 0;
      uVar8 = 0x6bc2ecf2;
      FUN_00510e70(0x6bc2ecf2,0);
      FUN_005117b0(2,uVar8,uVar10);
    }
    if (3 < iVar5) {
      uVar10 = 0;
      uVar8 = 0x6bc2ecf3;
      FUN_00510e70(0x6bc2ecf3,0);
      FUN_005117b0(3,uVar8,uVar10);
    }
    if (4 < iVar5) {
      uVar10 = 0;
      uVar8 = 0x6bc2ecf4;
      FUN_00510e70(0x6bc2ecf4,0);
      FUN_005117b0(4,uVar8,uVar10);
    }
    if (iVar5 < 6) goto switchD_00510ffa_caseD_0;
    uVar9 = 0;
    uVar10 = 0x6bc2ecf5;
    FUN_00510e70(0x6bc2ecf5,0);
    uVar8 = 5;
    break;
  case 4:
    if (cVar4 == '\0') {
      if (DAT_0073574c == 0) {
        uVar10 = 0;
        uVar8 = 0x6bc2ecf0;
        FUN_00567c70(0x6bc2ecf0,0);
        FUN_005117b0(0,uVar8,uVar10);
        goto switchD_00510ffa_caseD_0;
      }
      if (DAT_0073574c != 1) goto switchD_00510ffa_caseD_0;
      uVar10 = 0;
      uVar8 = 0x6bc2ecf0;
      FUN_00567c70(0x6bc2ecf0,0);
      FUN_005117b0(0,uVar8,uVar10);
      goto LAB_005115d2;
    }
    iVar5 = FUN_00510dc0(4);
    if (iVar5 < 1) {
      FUN_00507020(param_1);
    }
    else {
      uVar10 = 0;
      uVar8 = 0x6bc2ecf0;
      FUN_00567c70(0x6bc2ecf0,0);
      FUN_005117b0(0,uVar8,uVar10);
    }
    if (iVar5 < 2) goto switchD_00510ffa_caseD_0;
    uVar9 = 0;
    uVar10 = 0x6bc2ecf1;
    FUN_00567c70(0x6bc2ecf1,0);
    uVar8 = 1;
    break;
  case 5:
    if (cVar4 == '\0') {
      if (DAT_0073574c == 0) {
        uVar10 = 0;
        uVar8 = 0x6bc2ecf0;
        FUN_00567c70(0x6bc2ecf0,0);
        FUN_005117b0(0,uVar8,uVar10);
        goto switchD_00510ffa_caseD_0;
      }
      if (DAT_0073574c != 1) goto switchD_00510ffa_caseD_0;
      uVar10 = 0;
      uVar8 = 0x6bc2ecf0;
      FUN_00567c70(0x6bc2ecf0,0);
      FUN_005117b0(0,uVar8,uVar10);
    }
    else {
      piVar6 = &DAT_00706530;
      do {
        if (*piVar6 == 0xc) break;
        piVar6 = piVar6 + 7;
      } while ((int)piVar6 < 0x70669c);
      iVar5 = FUN_004acce0();
      pcVar7 = (char *)(iVar5 * 0xc90 + DAT_00734588);
      if (pcVar7 == (char *)0x0) {
        param_2 = 0xffffffff;
        FUN_00507020(param_1);
      }
      else {
        cVar2 = *pcVar7;
        while (cVar2 != '\0') {
          pcVar1 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
          cVar2 = *pcVar1;
        }
        param_2 = FUN_0051be40(cVar4 == '\x01');
        param_2 = param_2 & 0xff;
        if (param_2 == 0) {
          FUN_00507020(param_1);
        }
        else {
          uVar10 = 0;
          uVar8 = 0x6bc2ecf0;
          FUN_00567c70(0x6bc2ecf0,0);
          FUN_005117b0(0,uVar8,uVar10);
        }
      }
      if ((int)param_2 < 2) goto switchD_00510ffa_caseD_0;
    }
LAB_005115d2:
    uVar10 = 0;
    uVar8 = 0x6bc2ecf1;
    FUN_00567c70(0x6bc2ecf1,0);
    FUN_005117b0(1,uVar8,uVar10);
    goto switchD_00510ffa_caseD_0;
  case 6:
    if (DAT_0073574c == 0) {
      uVar10 = 0;
      uVar8 = 0x6bc2ecf0;
      FUN_00567c70(0x6bc2ecf0,0);
      FUN_005117b0(0,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf1;
      FUN_00567c70(0x6bc2ecf1,0);
      FUN_005117b0(1,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf2;
      FUN_00567c70(0x6bc2ecf2,0);
      FUN_005117b0(2,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf3;
      FUN_00567c70(0x6bc2ecf3,0);
      FUN_005117b0(3,uVar8,uVar10);
    }
    else if (DAT_0073574c == 1) {
      uVar10 = 0;
      uVar8 = 0x6bc2ecf0;
      FUN_00567c70(0x6bc2ecf0,0);
      FUN_005117b0(0,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf1;
      FUN_00567c70(0x6bc2ecf1,0);
      FUN_005117b0(1,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf2;
      FUN_00567c70(0x6bc2ecf2,0);
      FUN_005117b0(2,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf3;
      FUN_00567c70(0x6bc2ecf3,0);
      FUN_005117b0(3,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf4;
      FUN_00567c70(0x6bc2ecf4,0);
      FUN_005117b0(4,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf5;
      FUN_00567c70(0x6bc2ecf5,0);
      FUN_005117b0(5,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf6;
      FUN_00567c70(0x6bc2ecf6,0);
      FUN_005117b0(6,uVar8,uVar10);
      uVar10 = 0;
      uVar8 = 0x6bc2ecf7;
      FUN_00567c70(0x6bc2ecf7,0);
      FUN_005117b0(7,uVar8,uVar10);
    }
    goto switchD_00510ffa_caseD_0;
  }
  FUN_005117b0(uVar8,uVar10,uVar9);
switchD_00510ffa_caseD_0:
  puVar3 = (undefined4 *)param_1[0x11];
  do {
    if (puVar3 == param_1 + 0x11) {
      param_1[0x10] = (undefined4 *)param_1[0x11];
LAB_00511165:
      FUN_004f8960();
      FUN_005118b0();
      *(undefined1 *)(param_1 + 8) = 1;
      ExceptionList = local_10;
      return param_1;
    }
    if (puVar3[2] == DAT_00735750) {
      param_1[0x10] = puVar3;
      goto LAB_00511165;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}
