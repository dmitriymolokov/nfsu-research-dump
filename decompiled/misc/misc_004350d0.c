/* spd-match: far pct=11.39 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-cefam-ce_types_code/va_004350D0 */
#include "ghidra_compat.h"

int __cdecl FUN_00421a30(...);
int __cdecl FUN_00425fe0(...);
int __cdecl FUN_0042c1f0(...);
int __cdecl FUN_0042d520(...);
int __cdecl FUN_00432e40(...);
int __cdecl FUN_004337a0(...);
int __cdecl FUN_00433e20(...);
int __cdecl FUN_00435bd0(...);
int __cdecl FUN_00435c10(...);
int __cdecl FUN_00439930(...);
int __cdecl FUN_0043a2e0(...);
int __cdecl FUN_0043b850(...);
int __cdecl FUN_0043be30(...);
int __cdecl FUN_00586690(...);
int __cdecl FUN_00674898(...);
extern int DAT_006b79e8;
extern int DAT_006b7b58;
extern int DAT_006f227c;
extern int DAT_0073619c;
extern int DAT_007361a4;
extern int DAT_0073ad34;
extern int DAT_0077b244;
extern int DAT_0078a30c;
extern int DAT_0078a345;
extern void LAB_0043514a(...);
extern void LAB_004352bc(...);

struct ThisCallBox {
  void FUN_004350d0(int val, int param_2, undefined4 param_3, int param_4);
};
void ThisCallBox::FUN_004350d0(int val, int param_2, undefined4 param_3, int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;

  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_4;
  
  piVar1 = *(int **)(((int)this) + 0x520 + val * 4);
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    local_4 = 0;
  }
  else {
    local_4 = *(int *)(iVar2 + 0x18);
  }
  if (param_4 == 4) {
    piVar1[0x44] = DAT_0073ad34 - *(int *)(((int)this) + 0x10);
LAB_0043514a:
    FUN_00586690(0x3c23d70a);
    iVar6 = FUN_00674898();
    piVar1[0x44] = iVar6;
  }
  else if (param_4 == 5) {
    iVar6 = FUN_00674898();
    piVar1[0x44] = iVar6;
    goto LAB_0043514a;
  }
  *(short *)(piVar1 + 4) = (short)param_4;
  piVar1[8] = piVar1[5];
  FUN_004337a0(1);
  cVar4 = FUN_0043a2e0();
  iVar6 = DAT_0077b244;
  if (cVar4 == '\0') {
    if (param_2 == 0) {
      if ((int)*(char *)((int)piVar1 + 9) == *(int *)(((int)this) + 0x530)) {
        uVar5 = FUN_00435bd0(((int)this));
        iVar6 = DAT_0073619c;
        *(undefined1 *)(piVar1 + 3) = uVar5;
        piVar1[0x44] = piVar1[*(char *)(iVar6 + 0x53f) + 9] - *(int *)(((int)this) + 0x10);
        goto LAB_004352bc;
      }
      uVar5 = FUN_00435bd0(((int)this));
      *(undefined1 *)(piVar1 + 3) = uVar5;
    }
    else if ((param_2 < 0) || (*(char *)(piVar1 + 3) = (char)param_2, DAT_0078a30c != 3))
    goto LAB_004352bc;
    FUN_00433e20(piVar1,*(undefined4 *)(((int)this) + 0x530),((int)this) + 0x10);
  }
  else {
    if ((((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) &&
        (*(int *)(*(int *)(*piVar1 + 0x14) + 4) == 1)) &&
       (((*(char *)(*(int *)(*piVar1 + 0x14) + 0x734) == '\0' && (param_4 == 9)) &&
        (iVar7 = FUN_00439930(4), *(int *)(iVar6 + 0x18c + iVar7 * 4) == 0)))) {
      param_4 = 1;
      *(undefined2 *)(piVar1 + 4) = 1;
    }
    if ((char)piVar1[3] == '\0') {
      if (param_4 == 1) {
        uVar5 = FUN_00435bd0(((int)this));
      }
      else {
        uVar5 = FUN_00435c10();
      }
      *(undefined1 *)(piVar1 + 3) = uVar5;
    }
    if ((int)*(char *)((int)piVar1 + 9) == *(int *)(((int)this) + 0x530)) {
      piVar1[0x44] = piVar1[*(char *)(DAT_0073619c + 0x53f) + 9] - *(int *)(((int)this) + 0x10);
    }
    else {
      piVar1[0x44] = DAT_0073ad34 - *(int *)(((int)this) + 0x10);
    }
    cVar4 = FUN_0043be30((int)*(short *)(iVar2 + 10),(int)(char)piVar1[3],param_3,param_4);
    if (cVar4 == '\0') {
      *(undefined2 *)(piVar1 + 4) = 0;
      return;
    }
    iVar6 = *piVar1;
    if (((*(int *)(*(int *)(iVar6 + 0x14) + 4) == 1) && (param_4 == 1)) &&
       ((char)piVar1[3] == '\x01')) {
      iVar7 = FUN_00421a30();
      if (((iVar7 == 0) && (iVar6 = FUN_0043b850((int)*(short *)(iVar6 + 10)), iVar6 != 0)) &&
         (cVar4 = FUN_00432e40(), uVar3 = DAT_006b79e8, cVar4 != '\0')) {
        *(int *)(((int)this) + 0x1c) = *(int *)(iVar6 + 0x34) + *(int *)(((int)this) + 0x10);
        *(undefined4 *)(((int)this) + 0x20) = uVar3;
      }
    }
  }
LAB_004352bc:
  if ((local_4 != 0) && ((char)piVar1[3] == '\x01')) {
    uVar8 = DAT_006f227c ^ 0x1d872b41;
    uVar9 = uVar8 >> 5 ^ uVar8;
    DAT_006f227c = uVar9 << 0x1b ^ uVar9 ^ uVar8;
  }
  *(int *)(((int)this) + 0x28) = *(int *)(((int)this) + 0x28) + 1;
  if (local_4 != 0) {
    FUN_0042c1f0();
    cVar4 = FUN_0043a2e0();
    FUN_0042d520(-(cVar4 != '\0') & 8);
    FUN_00425fe0();
  }
  if (*(int *)(iVar2 + 0x24) == 3) {
    *(undefined4 *)(*(int *)(iVar2 + 0x2c) + 0x3f4) = 0x11;
  }
  uVar3 = DAT_006b7b58;
  if ((char)param_3 != '\0') {
    *(int *)(iVar2 + 0x884) = DAT_0073ad34;
    *(undefined4 *)(iVar2 + 0x888) = uVar3;
    *(undefined1 *)(iVar2 + 0x8a8) = 1;
    *(undefined1 *)(iVar2 + 0x8a9) = 0;
  }
  return;
}
