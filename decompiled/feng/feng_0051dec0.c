/* spd-match: far pct=7.06 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2110 */
#include "ghidra_compat.h"

int __cdecl FUN_0051cc10();
int __cdecl FUN_0051ce40();
int __cdecl FUN_00520320();
int __cdecl FUN_00532bb0();
int __cdecl FUN_005374a0();
int __cdecl FUN_00537930();
int __cdecl FUN_00537a60();
extern int DAT_006ee6f0;
extern int DAT_006f1dd8;
extern int DAT_006f1ddc;
extern int DAT_006f1de0;
extern int DAT_006f1de4;
extern int DAT_006f1de8;
extern int DAT_006f4f78;
extern int DAT_006f65b0;
extern int DAT_006f6b48;
extern unsigned char *DAT_006f8100;
extern int DAT_00734658;
extern int DAT_007356a8;
extern int DAT_007356c0;
extern int DAT_007356c4;
extern int DAT_007356fc;
extern int DAT_007361a0;
extern int DAT_007361a4;
extern int DAT_007361a8;
extern int DAT_007588fc;
extern int DAT_0078a2f0;
extern int DAT_0078a320;
extern int DAT_0078a324;
extern int DAT_0078a328;
extern int DAT_0078a32c;
extern int DAT_0078a344;
extern int DAT_0078a345;
extern int DAT_0078a346;
extern int DAT_0078a418;
extern int DAT_0078a41c;
extern int _DAT_007356dc;
extern unsigned char *PTR_DAT_006f6d44;
extern unsigned char *PTR_DAT_006f6f9c;
extern unsigned char *PTR_DAT_006f6fa0;
extern unsigned char *PTR_DAT_006f6fa4;
extern unsigned char *PTR_DAT_006f6fd4;
extern unsigned char *PTR_DAT_006f6fdc;
extern void LAB_0051e0df(void);
extern void LAB_0051e3c4(void);
extern void LAB_0051e47b(void);
extern void LAB_0051e5c5(void);
extern void LAB_00689633(void);
void *ExceptionList;

void FUN_0051dec0(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int extraout_ECX;
  int extraout_ECX_00;
  char *pcVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  bool bVar14;
  undefined8 uVar15;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar3 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00689633;
  local_c = ExceptionList;
  if (DAT_006f1dd8 == 0) {
    return;
  }
  ExceptionList = &local_c;
  *(undefined4 **)(param_1 + 8) = &DAT_007588fc;
  if (*(undefined4 **)(param_1 + 0xb4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xb4))(1);
  }
  FUN_00532bb0();
  FUN_0051ce40();
  (**(code **)(**(int **)(param_1 + 0xc0) + 8))();
  *(undefined4 *)(*(int *)(param_1 + 0x78) * 0x1c + 0x1e8 + param_1) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x78) * 0x1c + 0x1f0 + param_1) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x78) * 0x1c + 0x1ec + param_1) = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0x78) * 0x1c + 500 + param_1) = 0;
  *(undefined4 *)((*(int *)(param_1 + 0x78) + 0x12) * 0x1c + param_1) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x78) * 0x1c + 0x1fc + param_1) = 0xffffffff;
  iVar12 = DAT_007356a8;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  *(undefined4 *)(iVar12 + 0xf8) = 5;
  DAT_007356c4 = 0;
  DAT_007356c0 = 0;
  _DAT_007356dc = 0;
  if ((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) {
    *(undefined4 *)(iVar12 + 0xf8) = 2;
  }
  if ((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) {
    *(undefined4 *)(iVar12 + 0xf8) = 3;
  }
  if ((DAT_0078a346 != '\0') || (DAT_007361a0 != 0)) {
    *(undefined4 *)(iVar12 + 0xf8) = 4;
  }
  iVar12 = ((int)DAT_0078a328) + ((int)DAT_0078a32c) + ((int)DAT_0078a324) + (int)DAT_0078a320;
  param_1 = 0;
  iStack_28 = 0;
  iStack_20 = 0;
  iStack_24 = 0;
  if (0 < iVar12) {
    iStack_18 = 0;
    iStack_14 = iVar12;
    do {
      iVar9 = ((int)DAT_0078a418) + iStack_18;
      uVar15 = FUN_00520320(iVar3);
      iVar8 = (int)((ulonglong)uVar15 >> 0x20);
      iVar4 = *(int *)(&DAT_006f8100 + (int)uVar15 * 4);
      if ((*(int *)(iVar9 + 4) == 1) && (*(char *)(iVar9 + 0x734) == '\0')) {
        if (DAT_00734658 == 0) {
          iStack_28 = *(int *)(iVar9 + 0x20);
          iVar7 = *(int *)(iVar9 + 0x24);
          if (*(int *)(iVar9 + 0x24) < iStack_20) {
            iVar7 = iStack_20;
          }
          iStack_1c = *(int *)(iVar9 + 0x28);
          if (*(int *)(iVar9 + 0x28) < iVar8) {
            iStack_1c = iVar8;
          }
          iVar8 = *(int *)(iVar9 + 0x34);
          iStack_20 = iVar7;
          if (*(int *)(iVar9 + 0x34) < iStack_24) {
            iVar8 = iStack_24;
          }
        }
        else {
          iStack_28 = 3;
          iStack_20 = 3;
          iStack_1c = 3;
          iStack_24 = 3;
          iVar8 = iStack_24;
        }
        iStack_24 = iVar8;
        if (param_1 == 1) {
          if ((*(int *)(*(int *)(iVar3 + 0x68) + 8) == iVar4) &&
             (*(int *)(*(int *)(iVar3 + 0x68) + 4) == iStack_28)) goto LAB_0051e3c4;
LAB_0051e0df:
          *(int *)(iVar3 + 0x68 + param_1 * 4) = *(int *)(iVar3 + 0x78) * 0x1c + 0x1e8 + iVar3;
        }
        else if (param_1 < 2) goto LAB_0051e0df;
        *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1e8 + iVar3) = 0xc;
        *(int *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = iVar4;
        *(int *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = iStack_28;
        *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
        *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
        *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = 0xffffffff;
        iVar8 = *(int *)(iVar3 + 0x78) + 1;
        *(int *)(iVar3 + 0x78) = iVar8;
        *(undefined4 *)(iVar8 * 0x1c + 0x1e8 + iVar3) = 0xd;
        *(int *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = iVar4;
        *(int *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = iStack_28;
        *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
        *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
        *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = DAT_007356fc;
        iVar4 = *(int *)(iVar3 + 0x78) + 1;
        param_1 = param_1 + 1;
        *(int *)(iVar3 + 0x78) = iVar4;
        if (param_1 < 2) {
          *(undefined4 *)(iVar4 * 0x1c + 0x1e8 + iVar3) = 8;
          *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = 2;
          *(int *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = iStack_28;
          *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
          *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
          *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = 0xffffffff;
          iVar4 = *(int *)(iVar3 + 0x78) + 1;
          *(int *)(iVar3 + 0x78) = iVar4;
          *(undefined4 *)(iVar4 * 0x1c + 0x1e8 + iVar3) = 8;
          *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = 1;
          *(int *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = iStack_28;
          *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
          *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
          *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = 0xffffffff;
          iVar4 = *(int *)(iVar3 + 0x78) + 1;
          *(int *)(iVar3 + 0x78) = iVar4;
          if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
            bVar1 = 0;
          }
          else {
            bVar1 = 1;
          }
          *(undefined4 *)(iVar4 * 0x1c + 0x1e8 + iVar3) = 7;
          *(uint *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = (uint)bVar1;
          *(int *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = iStack_24;
          *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
          *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
          *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = 0xffffffff;
          iVar4 = *(int *)(iVar3 + 0x78) + 1;
          *(int *)(iVar3 + 0x78) = iVar4;
          iVar9 = (int)*(char *)(iVar9 + 0x435);
          if (iVar9 < 1) {
            iVar9 = 0;
          }
          else if (3 < iVar9) {
            iVar9 = 3;
          }
          *(undefined4 *)(iVar4 * 0x1c + 0x1e8 + iVar3) = 0xe;
          *(int *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = iVar9;
          *(int *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = iStack_20;
          *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
          *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
          *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = 0xffffffff;
          iVar9 = *(int *)(iVar3 + 0x78) + 1;
          *(int *)(iVar3 + 0x78) = iVar9;
          *(undefined4 *)(iVar9 * 0x1c + 0x1e8 + iVar3) = 8;
          *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = 0;
          *(int *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = iStack_1c;
          *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
          *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
          *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = 0xffffffff;
          *(int *)(iVar3 + 0x78) = *(int *)(iVar3 + 0x78) + 1;
        }
      }
LAB_0051e3c4:
      iStack_18 = iStack_18 + 0x750;
      iStack_14 = iStack_14 + -1;
    } while (iStack_14 != 0);
    if (1 < param_1) goto LAB_0051e5c5;
  }
  iVar9 = -1;
  iStack_24 = -1;
  iStack_18 = 0;
  if (iVar12 < 1) {
LAB_0051e47b:
    iVar9 = -1;
    iVar4 = 0;
    iStack_24 = -1;
    if (iVar12 < 1) goto LAB_0051e5c5;
    piVar13 = (int *)(((int)DAT_0078a418) + 0x20);
    do {
      if (piVar13[-7] == 2) {
        iVar8 = 3;
        if (DAT_00734658 == 0) {
          iVar8 = *piVar13;
        }
        if (iStack_24 < iVar8) {
          iVar9 = iVar4;
          iStack_24 = iVar8;
        }
      }
      iVar4 = iVar4 + 1;
      piVar13 = piVar13 + 0x1d4;
    } while (iVar4 < iVar12);
    if (iVar9 == -1) goto LAB_0051e5c5;
  }
  else {
    pcVar10 = (char *)(((int)DAT_0078a418) + 0x734);
    do {
      if ((*(int *)(pcVar10 + -0x730) != 1) || (*pcVar10 != '\0')) {
        uVar15 = FUN_00520320(iVar3);
        pcVar10 = (char *)((ulonglong)uVar15 >> 0x20);
        iVar4 = 3;
        if (DAT_00734658 == 0) {
          iVar4 = *(int *)(pcVar10 + -0x714);
        }
        iVar9 = extraout_ECX;
        if (((iStack_24 < iVar4) && (iVar9 = extraout_ECX, 0 < param_1)) &&
           (iVar9 = extraout_ECX,
           *(int *)(&DAT_006f8100 + (int)uVar15 * 4) != *(int *)(*(int *)(iVar3 + 0x68) + 8))) {
          iVar9 = iStack_18;
          iStack_24 = iVar4;
        }
      }
      iStack_18 = iStack_18 + 1;
      pcVar10 = pcVar10 + 0x750;
    } while (iStack_18 < iVar12);
    if (iVar9 == -1) goto LAB_0051e47b;
  }
  iVar12 = FUN_00520320(iVar3);
  uVar6 = *(undefined4 *)(&DAT_006f8100 + iVar12 * 4);
  uVar11 = 3;
  if (DAT_00734658 == 0) {
    uVar11 = *(undefined4 *)(extraout_ECX_00 + 0x20);
  }
  *(int *)(iVar3 + 0x68 + param_1 * 4) = *(int *)(iVar3 + 0x78) * 0x1c + 0x1e8 + iVar3;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1e8 + iVar3) = 0xc;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = uVar6;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = uVar11;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
  *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = 0xffffffff;
  iVar12 = *(int *)(iVar3 + 0x78) + 1;
  *(int *)(iVar3 + 0x78) = iVar12;
  *(undefined4 *)(iVar12 * 0x1c + 0x1e8 + iVar3) = 0xd;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = uVar6;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = uVar11;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
  uVar6 = DAT_007356fc;
  *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = uVar6;
  *(int *)(iVar3 + 0x78) = *(int *)(iVar3 + 0x78) + 1;
LAB_0051e5c5:
  if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1e8 + iVar3) = 3;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = 1;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = 0xffffffff;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
    *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = 0xffffffff;
    iVar12 = *(int *)(iVar3 + 0x78) + 1;
    *(int *)(iVar3 + 0x78) = iVar12;
    *(undefined4 *)(iVar12 * 0x1c + 0x1e8 + iVar3) = 3;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = 0;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = 0xffffffff;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
    *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = 0xffffffff;
    *(int *)(iVar3 + 0x78) = *(int *)(iVar3 + 0x78) + 1;
  }
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1e8 + iVar3) = 6;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = 0;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
  *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = 0xffffffff;
  iVar12 = *(int *)(iVar3 + 0x78) + 1;
  *(int *)(iVar3 + 0x78) = iVar12;
  *(undefined4 *)(iVar12 * 0x1c + 0x1e8 + iVar3) = 7;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = 2;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = 0;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
  *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = 0xffffffff;
  iVar12 = *(int *)(iVar3 + 0x78) + 1;
  *(int *)(iVar3 + 0x78) = iVar12;
  *(undefined4 *)(iVar12 * 0x1c + 0x1e8 + iVar3) = 6;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = 1;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
  *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = 0xffffffff;
  iVar12 = *(int *)(iVar3 + 0x78) + 1;
  *(int *)(iVar3 + 0x78) = iVar12;
  *(undefined4 *)(iVar12 * 0x1c + 0x1e8 + iVar3) = 3;
  if (iStack_28 < 2) {
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = 2;
  }
  else {
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = 3;
  }
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
  *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
  *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = 0xffffffff;
  *(int *)(iVar3 + 0x78) = *(int *)(iVar3 + 0x78) + 1;
  iVar12 = DAT_0078a2f0;
  if (DAT_006f1ddc != 0) {
    pvVar5 = _malloc(0x2d0);
    if (pvVar5 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_00537930();
    }
    *(undefined4 *)(iVar3 + 0x104) = uVar6;
    *(undefined4 *)(iVar3 + 0xf0) = 0;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1e8 + iVar3) = 1;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = 0;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = 0xffffffff;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
    *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = 0xffffffff;
    iVar9 = *(int *)(iVar3 + 0x78) + 1;
    *(int *)(iVar3 + 0x78) = iVar9;
    *(undefined4 *)(iVar9 * 0x1c + 0x1e8 + iVar3) = 1;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = 1;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = 0xffffffff;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
    *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = 0xffffffff;
    iVar9 = *(int *)(iVar3 + 0x78) + 1;
    *(int *)(iVar3 + 0x78) = iVar9;
    *(undefined4 *)(iVar9 * 0x1c + 0x1e8 + iVar3) = 1;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = 2;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = 0xffffffff;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
    *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = 0xffffffff;
    iVar9 = *(int *)(iVar3 + 0x78) + 1;
    *(int *)(iVar3 + 0x78) = iVar9;
    *(undefined4 *)(iVar9 * 0x1c + 0x1e8 + iVar3) = 1;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = 3;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = 0xffffffff;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
    *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
    uVar6 = DAT_006ee6f0;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = 0xffffffff;
    iVar9 = *(int *)(iVar3 + 0x78) + 1;
    *(int *)(iVar3 + 0x78) = iVar9;
    switch(uVar6) {
    case 1:
      uVar6 = 5;
      break;
    case 2:
      uVar6 = 6;
      break;
    case 3:
      uVar6 = 7;
      break;
    case 4:
      uVar6 = 8;
      break;
    default:
      uVar6 = 4;
      break;
    case 9:
      uVar6 = 9;
    }
    *(int *)(iVar3 + 0x56c) = iVar9;
    *(undefined4 *)(iVar3 + 0x568) = uVar6;
    *(undefined4 *)(iVar9 * 0x1c + 0x1e8 + iVar3) = 1;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1f0 + iVar3) = uVar6;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1ec + iVar3) = 0xffffffff;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 500 + iVar3) = 0;
    *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = 0;
    *(undefined4 *)(*(int *)(iVar3 + 0x78) * 0x1c + 0x1fc + iVar3) = 0xffffffff;
    bVar14 = DAT_006f1de8 == 1;
    *(int *)(iVar3 + 0x78) = *(int *)(iVar3 + 0x78) + 1;
    if (bVar14) {
      FUN_00537a60(0,1,(&PTR_DAT_006f6fdc)[*(int *)(iVar3 + 0xf0)],
                   (&PTR_DAT_006f6f9c)[*(int *)(iVar3 + 0xf0)]);
    }
    puVar2 = PTR_DAT_006f6fa0;
    if (((DAT_006f1de4 == 1) && (iVar9 = *(int *)(iVar3 + 0x104), *(int *)(iVar9 + 0x8c) < 6)) &&
       (*(int *)(iVar9 + 0x18) == 0)) {
      pvVar5 = _malloc(0x610);
      uStack_4 = 1;
      if (pvVar5 == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_005374a0(pvVar5);
      }
      *(undefined4 *)(iVar9 + 0x18) = uVar6;
      *(undefined4 *)(iVar9 + 0x2c) = 1;
      uStack_4 = 0xffffffff;
      (**(code **)(**(int **)(iVar9 + 0x18) + 0x1c))(1,4,1,0x1f,0x6400,&DAT_006f4f78,puVar2);
      *(int *)(iVar9 + 0x8c) = *(int *)(iVar9 + 0x8c) + 1;
      (**(code **)(**(int **)(iVar9 + 0x18) + 0xc))(0);
      (**(code **)(**(int **)(iVar9 + 0x18) + 8))(0);
      (**(code **)(**(int **)(iVar9 + 0x18) + 0x14))(iVar9 + 0x1b0);
    }
    if (DAT_006f1de0 == 1) {
      FUN_00537a60(2,0x16,&DAT_006f65b0,PTR_DAT_006f6fa4);
    }
    FUN_00537a60(3,9,&DAT_006f6b48,PTR_DAT_006f6fd4);
    FUN_00537a60(4,0x5f,PTR_DAT_006f6d44,PTR_DAT_006f6fa0);
    piVar13 = *(int **)(*(int *)(iVar3 + 0x104) + 0x18);
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 0x20))(0x3ffe);
    }
    piVar13 = *(int **)(*(int *)(iVar3 + 0x104) + 0x1c);
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 0x20))(0x7ffe);
    }
    piVar13 = *(int **)(*(int *)(iVar3 + 0x104) + 0x20);
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 0x20))(0x7ffe);
    }
    if (iVar12 == 0x4b1) {
      *(undefined1 *)(iVar3 + 0x70) = 0;
    }
  }
  iVar12 = *(int *)(iVar3 + 0x78) + -1;
  *(int *)(iVar3 + 0x78) = iVar12;
  *(undefined4 *)(iVar12 * 0x1c + 500 + iVar3) = param_2;
  *(undefined4 *)((*(int *)(iVar3 + 0x78) + 0x12) * 0x1c + iVar3) = param_3;
  *(int *)(iVar3 + 0x78) = *(int *)(iVar3 + 0x78) + 1;
  *(undefined4 *)(((int)DAT_007356a8) + 0xfc) = DAT_0078a41c;
  FUN_0051cc10(iVar3);
  if (*(int **)(iVar3 + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(iVar3 + 0xa0) + 8))();
  }
  ExceptionList = local_c;
  return;
}
