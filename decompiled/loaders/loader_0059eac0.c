/* spd-match: far pct=4.75 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p1/buckets/p1_01 */
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
extern void LAB_0059ec61(void);
extern void LAB_0059eca7(void);
extern void LAB_0059ecc9(void);
extern void LAB_0059ed9d(void);
extern void LAB_0059eddb(void);
extern void LAB_0059edfd(void);
extern void LAB_00687510(void);
void *ExceptionList;

void  FUN_0059eac0(int param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  byte *pbVar10;
  int local_48;
  byte local_2c;
  byte local_2b [31];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00687510;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*param_2 != 0) {
    ExceptionList = &local_c;
    *(int *)(param_1 + 4) = *param_2;
  }
  if (param_2[3] != 0) {
    uVar6 = FUN_004fd230();
    if (((((*(int *)(param_1 + 4) == 0) || (iVar7 = FUN_004f65d0(), iVar7 == 0)) ||
         (iVar7 = FUN_004ffb70(), iVar7 == 0)) &&
        ((DAT_0073578c == 0 || (iVar7 = FUN_004ef050(uVar6), iVar7 == 0)))) ||
       (*(int *)(iVar7 + 0x18) != 2)) {
      iVar7 = 0;
    }
    *(int *)(param_1 + 0x10) = iVar7;
  }
  if (param_2[4] != 0) {
    uVar6 = FUN_004fd230();
    if (((((*(int *)(param_1 + 4) == 0) || (iVar7 = FUN_004f65d0(), iVar7 == 0)) ||
         (iVar7 = FUN_004ffb70(), iVar7 == 0)) &&
        ((DAT_0073578c == 0 || (iVar7 = FUN_004ef050(uVar6), iVar7 == 0)))) ||
       (*(int *)(iVar7 + 0x18) != 1)) {
      iVar7 = 0;
    }
    *(int *)(param_1 + 0x48) = iVar7;
  }
  iVar7 = param_2[5];
  *(int *)(param_1 + 0x38) = iVar7;
  if (0 < iVar7) {
    local_48 = 1;
    do {
      FUN_004f68c0(0x20,&DAT_006c3eb4,param_2[1],local_48);
      iVar7 = -1;
      pbVar10 = &local_2c;
      bVar5 = local_2c;
      while (bVar5 != 0) {
        if (('`' < (char)bVar5) && ((char)bVar5 < '{')) {
          bVar5 = bVar5 - 0x20;
        }
        iVar7 = iVar7 * 0x21 + (uint)bVar5;
        pbVar1 = pbVar10 + 1;
        pbVar10 = pbVar10 + 1;
        bVar5 = *pbVar1;
      }
      if (*(int *)(param_1 + 4) == 0) {
LAB_0059eca7:
        if (((DAT_0073578c == 0) || (iVar7 = FUN_004ef050(iVar7), iVar7 == 0)) ||
           (*(int *)(iVar7 + 0x18) != 1)) goto LAB_0059ecc9;
      }
      else {
        iVar8 = FUN_004f3f90(&DAT_00746104);
        if ((iVar8 != 0) && (iVar8 = *(int *)(iVar8 + 0x18), iVar8 != 0)) {
LAB_0059ec61:
          if (iVar8 != 0) {
            local_4 = 0;
            FUN_004ffb00(iVar8);
            local_4 = 0xffffffff;
          }
          goto LAB_0059eca7;
        }
        if (DAT_0073578c != 0) {
          iVar2 = *(int *)(DAT_0073578c + 8);
          if ((iVar2 == 0) ||
             ((iVar8 = FUN_004fd1e0(iVar2 + 0xdc), iVar8 == 0 &&
              (iVar8 = FUN_004fd1e0(iVar2 + 0xec), iVar8 == 0)))) goto LAB_0059eca7;
          goto LAB_0059ec61;
        }
LAB_0059ecc9:
        iVar7 = 0;
      }
      piVar9 = _malloc(0xc);
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9[2] = iVar7;
      }
      puVar3 = *(undefined4 **)(param_1 + 0x40);
      *puVar3 = piVar9;
      *(int **)(param_1 + 0x40) = piVar9;
      piVar9[1] = (int)puVar3;
      *piVar9 = param_1 + 0x3c;
      FUN_004f68c0(0x20,&DAT_006c3eb4,param_2[2],local_48);
      iVar7 = -1;
      pbVar10 = &local_2c;
      bVar5 = local_2c;
      while (bVar5 != 0) {
        if (('`' < (char)bVar5) && ((char)bVar5 < '{')) {
          bVar5 = bVar5 - 0x20;
        }
        pbVar1 = pbVar10 + 1;
        iVar7 = iVar7 * 0x21 + (uint)bVar5;
        pbVar10 = pbVar10 + 1;
        bVar5 = *pbVar1;
      }
      if (*(int *)(param_1 + 4) == 0) {
LAB_0059eddb:
        if (((DAT_0073578c == 0) || (iVar7 = FUN_004ef050(iVar7), iVar7 == 0)) ||
           (*(int *)(iVar7 + 0x18) != 1)) goto LAB_0059edfd;
      }
      else {
        iVar8 = FUN_004f3f90(&DAT_00746104);
        if ((iVar8 != 0) && (iVar8 = *(int *)(iVar8 + 0x18), iVar8 != 0)) {
LAB_0059ed9d:
          local_4 = 1;
          FUN_004ffb00(iVar8);
          local_4 = 0xffffffff;
          goto LAB_0059eddb;
        }
        if (DAT_0073578c != 0) {
          iVar2 = *(int *)(DAT_0073578c + 8);
          if ((iVar2 == 0) ||
             ((iVar8 = FUN_004fd1e0(iVar2 + 0xdc), iVar8 == 0 &&
              (iVar8 = FUN_004fd1e0(iVar2 + 0xec), iVar8 == 0)))) goto LAB_0059eddb;
          goto LAB_0059ed9d;
        }
LAB_0059edfd:
        iVar7 = 0;
      }
      piVar9 = _malloc(0xc);
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9[2] = iVar7;
      }
      puVar3 = *(undefined4 **)(param_1 + 0x34);
      *puVar3 = piVar9;
      *(int **)(param_1 + 0x34) = piVar9;
      piVar9[1] = (int)puVar3;
      *piVar9 = param_1 + 0x30;
      bVar4 = local_48 < *(int *)(param_1 + 0x38);
      local_48 = local_48 + 1;
    } while (bVar4);
  }
  *(int *)(param_1 + 0x14) = param_2[7];
  *(int *)(param_1 + 0x44) = param_2[8];
  *(int *)(param_1 + 0x18) = param_2[6];
  iVar7 = param_2[9];
  *(int *)(param_1 + 0x1c) = iVar7;
  *(int *)(param_1 + 0x20) = iVar7;
  *(int *)(param_1 + 0x24) = param_2[10];
  *(int *)(param_1 + 0x50) = param_2[0xb];
  *(int *)(param_1 + 0x54) = param_2[0xc];
  ExceptionList = local_c;
  return;
}
