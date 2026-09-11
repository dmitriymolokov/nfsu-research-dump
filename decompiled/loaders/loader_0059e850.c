/* spd-match: far pct=5.51 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p1/buckets/p1_01 */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ffb00();
int __cdecl FUN_004ffb70();
extern int DAT_006c3eb4;
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern void LAB_0059e9df(void);
extern void LAB_0059ea25(void);
extern void LAB_0059ea4f(void);
extern void LAB_00687528(void);
void *ExceptionList;

void  FUN_0059e850(int param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  byte *pbVar10;
  byte local_2c;
  byte local_2b [31];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00687528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*param_2 != 0) {
    ExceptionList = &local_c;
    *(int *)(param_1 + 4) = *param_2;
  }
  if (param_2[1] != 0) {
    uVar5 = FUN_004fd230();
    if (((((*(int *)(param_1 + 4) == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
         (iVar6 = FUN_004ffb70(), iVar6 == 0)) &&
        ((DAT_0073578c == 0 || (iVar6 = FUN_004ef050(uVar5), iVar6 == 0)))) ||
       (*(int *)(iVar6 + 0x18) != 1)) {
      iVar6 = 0;
    }
    *(int *)(param_1 + 8) = iVar6;
  }
  if (param_2[3] != 0) {
    uVar5 = FUN_004fd230();
    if (((((*(int *)(param_1 + 4) == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
         (iVar6 = FUN_004ffb70(), iVar6 == 0)) &&
        ((DAT_0073578c == 0 || (iVar6 = FUN_004ef050(uVar5), iVar6 == 0)))) ||
       (*(int *)(iVar6 + 0x18) != 2)) {
      iVar6 = 0;
    }
    *(int *)(param_1 + 0x10) = iVar6;
  }
  iVar6 = param_2[4];
  iVar7 = 0;
  *(int *)(param_1 + 0x38) = iVar6;
  if (0 < iVar6) {
    do {
      iVar7 = iVar7 + 1;
      FUN_004f68c0(0x20,&DAT_006c3eb4,param_2[2],iVar7);
      iVar6 = -1;
      pbVar10 = &local_2c;
      bVar4 = local_2c;
      while (bVar4 != 0) {
        if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
          bVar4 = bVar4 - 0x20;
        }
        pbVar1 = pbVar10 + 1;
        iVar6 = iVar6 * 0x21 + (uint)bVar4;
        pbVar10 = pbVar10 + 1;
        bVar4 = *pbVar1;
      }
      if (*(int *)(param_1 + 4) == 0) {
LAB_0059ea25:
        if (((DAT_0073578c == 0) || (iVar6 = FUN_004ef050(iVar6), iVar6 == 0)) ||
           (*(int *)(iVar6 + 0x18) != 1)) goto LAB_0059ea4f;
      }
      else {
        iVar8 = FUN_004f3f90(&DAT_00746104);
        if ((iVar8 != 0) && (iVar8 = *(int *)(iVar8 + 0x18), iVar8 != 0)) {
LAB_0059e9df:
          if (iVar8 != 0) {
            local_4 = 0;
            FUN_004ffb00(iVar8);
            local_4 = 0xffffffff;
          }
          goto LAB_0059ea25;
        }
        if (DAT_0073578c != 0) {
          iVar2 = *(int *)(DAT_0073578c + 8);
          if ((iVar2 == 0) ||
             ((iVar8 = FUN_004fd1e0(iVar2 + 0xdc), iVar8 == 0 &&
              (iVar8 = FUN_004fd1e0(iVar2 + 0xec), iVar8 == 0)))) goto LAB_0059ea25;
          goto LAB_0059e9df;
        }
LAB_0059ea4f:
        iVar6 = 0;
      }
      piVar9 = _malloc(0xc);
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9[2] = iVar6;
      }
      puVar3 = *(undefined4 **)(param_1 + 0x34);
      *puVar3 = piVar9;
      *(int **)(param_1 + 0x34) = piVar9;
      piVar9[1] = (int)puVar3;
      *piVar9 = param_1 + 0x30;
    } while (iVar7 < *(int *)(param_1 + 0x38));
  }
  *(int *)(param_1 + 0x14) = param_2[6];
  *(int *)(param_1 + 0x18) = param_2[5];
  iVar6 = param_2[7];
  *(int *)(param_1 + 0x1c) = iVar6;
  *(int *)(param_1 + 0x20) = iVar6;
  *(int *)(param_1 + 0x24) = param_2[8];
  ExceptionList = local_c;
  return;
}
