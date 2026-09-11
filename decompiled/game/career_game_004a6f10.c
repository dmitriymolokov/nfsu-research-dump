/* spd-match: far pct=12.30 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_0049fc90();
int __cdecl FUN_0049fdb0();
int __cdecl FUN_0049fe10();
int __cdecl FUN_004a7990();
int __cdecl FUN_004ee660();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f68a0();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ffb00();
int __cdecl FUN_004ffb70();
int __cdecl FUN_005649f0();
int __cdecl FUN_00566e60();
extern unsigned char *DAT_007349b4;
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern int DAT_0078a3f5;
extern unsigned char *PTR_LAB_006c6d6c;
extern void LAB_004a736a(void);
extern void LAB_004a73a8(void);
extern void LAB_004a7511(void);
extern void LAB_004a7553(void);
extern void LAB_004a7614(void);
extern void LAB_00687d38(void);
void *ExceptionList;

int FUN_004a6f10(int param_1,undefined4 param_2)

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
  char *pcVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  byte local_2c;
  byte local_2b [31];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00687d38;
  local_c = ExceptionList;
  iVar13 = 0;
  ExceptionList = &local_c;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0x80000000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0xad) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x80) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x70) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x88) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x74) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  iVar6 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  uVar5 = FUN_004fd230();
  if (((((iVar6 == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
       (iVar6 = FUN_004ffb70(), iVar6 == 0)) &&
      ((DAT_0073578c == 0 || (iVar6 = FUN_004ef050(uVar5), iVar6 == 0)))) ||
     (*(int *)(iVar6 + 0x18) != 2)) {
    iVar6 = 0;
  }
  iVar7 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 100) = iVar6;
  uVar5 = FUN_004fd230();
  if (((((iVar7 == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
       (iVar6 = FUN_004ffb70(), iVar6 == 0)) &&
      ((DAT_0073578c == 0 || (iVar6 = FUN_004ef050(uVar5), iVar6 == 0)))) ||
     (*(int *)(iVar6 + 0x18) != 2)) {
    iVar6 = 0;
  }
  iVar7 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 0x68) = iVar6;
  uVar5 = FUN_004fd230();
  if (((((iVar7 == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
       (iVar6 = FUN_004ffb70(), iVar6 == 0)) &&
      ((DAT_0073578c == 0 || (iVar6 = FUN_004ef050(uVar5), iVar6 == 0)))) ||
     (*(int *)(iVar6 + 0x18) != 2)) {
    iVar6 = 0;
  }
  iVar7 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 0x8c) = iVar6;
  uVar5 = FUN_004fd230();
  if (((((iVar7 == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
       (iVar6 = FUN_004ffb70(), iVar6 == 0)) &&
      ((DAT_0073578c == 0 || (iVar6 = FUN_004ef050(uVar5), iVar6 == 0)))) ||
     (*(int *)(iVar6 + 0x18) != 2)) {
    iVar6 = 0;
  }
  *(int *)(param_1 + 0x90) = iVar6;
  FUN_004f6910(*(undefined4 *)(param_1 + 0x8c));
  FUN_004f6910(*(undefined4 *)(param_1 + 0x90));
  FUN_004fd230();
  FUN_0049fe10();
  FUN_004fd230();
  FUN_0049fdb0();
  FUN_004fd230();
  uVar5 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  uVar5 = FUN_0049fc90();
  *(undefined4 *)(param_1 + 0x94) = uVar5;
  uVar5 = FUN_0049fc90();
  *(undefined4 *)(param_1 + 0x98) = uVar5;
  uVar5 = FUN_0049fc90();
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  do {
    iVar13 = iVar13 + 1;
    FUN_004f68c0(0x20,"CurrentSpeed_Trap_Backing_0%d",iVar13);
    iVar6 = -1;
    pbVar10 = &local_2c;
    bVar4 = local_2c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      iVar6 = iVar6 * 0x21 + (uint)bVar4;
      pbVar1 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar4 = *pbVar1;
    }
    if (*(int *)(param_1 + 8) == 0) goto LAB_004a73a8;
    iVar7 = FUN_004f3f90(&DAT_00746104);
    if ((iVar7 != 0) && (iVar7 = *(int *)(iVar7 + 0x18), iVar7 != 0)) goto LAB_004a736a;
    if (DAT_0073578c != 0) {
      iVar8 = *(int *)(DAT_0073578c + 8);
      if (iVar8 != 0) {
        FUN_004ee660();
        iVar7 = FUN_004fd1e0(iVar8 + 0xdc);
        if (iVar7 == 0) {
          FUN_004ee660();
          iVar7 = FUN_004fd1e0(iVar8 + 0xec);
          if (iVar7 == 0) goto LAB_004a73a8;
        }
LAB_004a736a:
        (*(unsigned char *)&(local_4)) = 1;
        FUN_004ffb00(iVar7);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
      }
LAB_004a73a8:
      if (((DAT_0073578c != 0) && (iVar6 = FUN_004ef050(iVar6), iVar6 != 0)) &&
         (*(int *)(iVar6 + 0x18) == 1)) {
        if (DAT_007349b4 == 0) {
          FUN_005649f0();
        }
        iVar7 = DAT_007349b4;
        piVar14 = (int *)(DAT_007349b4 + 0x10);
        if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
          FUN_00566e60();
        }
        piVar9 = (int *)*piVar14;
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
          *piVar14 = iVar2;
          if (((bVar4 & 2) != 0) &&
             (iVar7 = *(int *)(iVar7 + 0x28) >> 2, piVar14 = piVar9, 0 < iVar7)) {
            for (; iVar7 != 0; iVar7 = iVar7 + -1) {
              *piVar14 = 0;
              piVar14 = piVar14 + 1;
            }
          }
          piVar9[2] = iVar6;
        }
        puVar3 = *(undefined4 **)(param_1 + 4);
        *puVar3 = piVar9;
        *(int **)(param_1 + 4) = piVar9;
        piVar9[1] = (int)puVar3;
        *piVar9 = param_1;
      }
    }
  } while (iVar13 < 3);
  pcVar11 = "NextSpeeed_Trap_Indicator";
  iVar13 = -1;
  bVar4 = 0x4e;
  do {
    if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
      bVar4 = bVar4 - 0x20;
    }
    uVar12 = (uint)bVar4;
    bVar4 = pcVar11[1];
    iVar13 = iVar13 * 0x21 + uVar12;
    pcVar11 = pcVar11 + 1;
  } while (bVar4 != 0);
  if (*(int *)(param_1 + 8) == 0) goto LAB_004a7553;
  iVar6 = FUN_004f3f90(&DAT_00746104);
  if ((iVar6 == 0) || (iVar6 = *(int *)(iVar6 + 0x18), iVar6 == 0)) {
    if (DAT_0073578c != 0) {
      iVar7 = *(int *)(DAT_0073578c + 8);
      if (iVar7 != 0) {
        FUN_004ee660();
        iVar6 = FUN_004fd1e0(iVar7 + 0xdc);
        if (iVar6 == 0) {
          FUN_004ee660();
          iVar6 = FUN_004fd1e0(iVar7 + 0xec);
          if (iVar6 == 0) goto LAB_004a7553;
        }
        if (iVar6 != 0) goto LAB_004a7511;
      }
      goto LAB_004a7553;
    }
  }
  else {
LAB_004a7511:
    (*(unsigned char *)&(local_4)) = 2;
    FUN_004ffb00(iVar6);
    local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
LAB_004a7553:
    if (((DAT_0073578c != 0) && (iVar13 = FUN_004ef050(iVar13), iVar13 != 0)) &&
       (*(int *)(iVar13 + 0x18) == 2)) {
      if (DAT_007349b4 == 0) {
        FUN_005649f0();
      }
      iVar6 = DAT_007349b4;
      piVar14 = (int *)(DAT_007349b4 + 0x10);
      if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
        FUN_00566e60();
      }
      piVar9 = (int *)*piVar14;
      iVar7 = *(int *)(iVar6 + 0x18) + 1;
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        iVar8 = *piVar9;
        if (*(int *)(iVar6 + 0x1c) < iVar7) {
          *(int *)(iVar6 + 0x1c) = iVar7;
        }
        *(int *)(iVar6 + 0x18) = iVar7;
        bVar4 = *(byte *)(iVar6 + 0x14);
        *piVar14 = iVar8;
        if (((bVar4 & 2) != 0) && (iVar6 = *(int *)(iVar6 + 0x28) >> 2, piVar14 = piVar9, 0 < iVar6)
           ) {
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar14 = 0;
            piVar14 = piVar14 + 1;
          }
        }
        piVar9[2] = iVar13;
      }
      puVar3 = *(undefined4 **)(param_1 + 4);
      *puVar3 = piVar9;
      *(int **)(param_1 + 4) = piVar9;
      piVar9[1] = (int)puVar3;
      *piVar9 = param_1;
      goto LAB_004a7614;
    }
  }
  iVar13 = 0;
LAB_004a7614:
  *(int *)(param_1 + 0x7c) = iVar13;
  if (DAT_0078a3f5 == '\0') {
    pcVar11 = "%3.1f";
  }
  else {
    pcVar11 = (char *)&PTR_LAB_006c6d6c;
  }
  FUN_004f68a0(pcVar11,0,0);
  FUN_004a7990(param_1,0);
  ExceptionList = local_c;
  return param_1;
}
