/* spd-match: far pct=11.20 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_0049fdb0();
int __cdecl FUN_0049fe70();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ffb00();
int __cdecl FUN_005649f0();
int __cdecl FUN_00566e60();
extern unsigned char *DAT_007349b4;
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern void LAB_004a1702(void);
extern void LAB_004a1748(void);
extern void LAB_00687e20(void);
void *ExceptionList;

int FUN_004a1580(int param_1,undefined4 param_2)

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
  int iVar11;
  int *piVar12;
  byte local_2c;
  byte local_2b [31];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00687e20;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0x508;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  uVar5 = FUN_004fd230();
  FUN_0049fe70(uVar5);
  uVar5 = FUN_004fd230();
  FUN_0049fe70(uVar5);
  uVar5 = FUN_004fd230();
  FUN_0049fe70(uVar5);
  iVar6 = 0;
  do {
    iVar6 = iVar6 + 1;
    FUN_004f68c0(0x20,"LapCounterBacking_%d",iVar6);
    iVar11 = -1;
    pbVar10 = &local_2c;
    bVar4 = local_2c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      pbVar1 = pbVar10 + 1;
      iVar11 = iVar11 * 0x21 + (uint)bVar4;
      pbVar10 = pbVar10 + 1;
      bVar4 = *pbVar1;
    }
    if (*(int *)(param_1 + 8) == 0) {
LAB_004a1748:
      if ((DAT_0073578c != 0) && (iVar11 = FUN_004ef050(iVar11), iVar11 != 0)) {
        if (DAT_007349b4 == 0) {
          FUN_005649f0();
        }
        iVar7 = DAT_007349b4;
        piVar12 = (int *)(DAT_007349b4 + 0x10);
        if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
          FUN_00566e60();
        }
        piVar9 = (int *)*piVar12;
        iVar8 = *(int *)(iVar7 + 0x18) + 1;
        if (piVar9 == (int *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          iVar2 = *piVar9;
          if (*(int *)(iVar7 + 0x1c) < iVar8) {
            *(int *)(iVar7 + 0x1c) = iVar8;
          }
          *(int *)(iVar7 + 0x18) = iVar8;
          bVar4 = *(byte *)(iVar7 + 0x14);
          *piVar12 = iVar2;
          if (((bVar4 & 2) != 0) &&
             (iVar7 = *(int *)(iVar7 + 0x28) >> 2, piVar12 = piVar9, 0 < iVar7)) {
            for (; iVar7 != 0; iVar7 = iVar7 + -1) {
              *piVar12 = 0;
              piVar12 = piVar12 + 1;
            }
          }
          piVar9[2] = iVar11;
        }
        puVar3 = *(undefined4 **)(param_1 + 4);
        *puVar3 = piVar9;
        *(int **)(param_1 + 4) = piVar9;
        piVar9[1] = (int)puVar3;
        *piVar9 = param_1;
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      if ((iVar7 != 0) && (iVar7 = *(int *)(iVar7 + 0x18), iVar7 != 0)) {
LAB_004a1702:
        if (iVar7 != 0) {
          (*(unsigned char *)&(local_4)) = 1;
          FUN_004ffb00(iVar7);
          local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
        }
        goto LAB_004a1748;
      }
      if (DAT_0073578c != 0) {
        iVar8 = *(int *)(DAT_0073578c + 8);
        if ((iVar8 == 0) ||
           ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
            (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_004a1748;
        goto LAB_004a1702;
      }
    }
    if (2 < iVar6) {
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      ExceptionList = local_c;
      return param_1;
    }
  } while( true );
}
