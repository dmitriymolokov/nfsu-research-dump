/* spd-match: far pct=7.59 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_00495f00();
int __cdecl FUN_004ab120();
int __cdecl FUN_004ab200();
int __cdecl FUN_004b2480();
int __cdecl FUN_004b70c0();
int __cdecl FUN_004eebf0();
int __cdecl FUN_004eede0();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f5ed0();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ffb00();
int __cdecl FUN_004ffb70();
int __cdecl FUN_00565b60();
int __cdecl FUN_00565ce0();
extern int DAT_00735710;
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern int DAT_00748f76;
extern int DAT_00748f8d;
extern int DAT_007588c4;
extern int DAT_007588d1;
extern int DAT_00777b4c;
extern int DAT_00777cc8;
extern unsigned char *PTR_FUN_006c5ecc;
extern void LAB_004b6c35(void);
extern void LAB_004b6c77(void);
extern void LAB_004b6c9e(void);
extern void LAB_004b6ce4(void);
extern void LAB_004b6d33(void);
extern void LAB_004b6e15(void);
extern void LAB_004b6e6d(void);
extern void LAB_004b6e90(void);
extern void LAB_004b6f05(void);
extern void LAB_004b6f47(void);
extern void LAB_004b6f66(void);
extern void LAB_006892bb(void);
void *ExceptionList;

undefined4 * FUN_004b6880(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  int extraout_EDX;
  int iVar10;
  int iVar11;
  bool bVar12;
  byte local_2c;
  byte local_2b [31];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006892bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004f78e0(param_1,param_2);
  puVar1 = param_1 + 0x10;
  iVar10 = 0;
  *param_1 = &PTR_FUN_006c5ecc;
  *puVar1 = puVar1;
  param_1[0x11] = puVar1;
  local_4 = 1;
  param_1[0x18] = 0;
  iVar5 = FUN_004f3f90(&DAT_00746104);
  iVar11 = DAT_0073578c;
  if ((((iVar5 != 0) && (*(int *)(iVar5 + 0x18) != 0)) && (DAT_0073578c != 0)) &&
     ((iVar5 = FUN_004f3f90(&DAT_00746104), iVar5 != 0 && (*(int *)(iVar5 + 0x18) != 0)))) {
    FUN_004eebf0(*(undefined4 *)(iVar11 + 8),*(int *)(iVar5 + 0x18));
  }
  iVar5 = FUN_004f3f90(&DAT_00746104);
  iVar11 = DAT_0073578c;
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x18) != 0)) &&
     ((DAT_0073578c != 0 &&
      ((iVar5 = FUN_004f3f90(&DAT_00746104), iVar5 != 0 && (*(int *)(iVar5 + 0x18) != 0)))))) {
    FUN_004eebf0(*(undefined4 *)(iVar11 + 8),*(int *)(iVar5 + 0x18));
  }
  if (DAT_00777b4c == 4) {
    do {
      FUN_004f68c0(0x20,"split_screen_%d",iVar10);
      iVar11 = -1;
      pbVar8 = &local_2c;
      bVar4 = local_2c;
      while (bVar4 != 0) {
        if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
          bVar4 = bVar4 - 0x20;
        }
        pbVar2 = pbVar8 + 1;
        iVar11 = iVar11 * 0x21 + (uint)bVar4;
        pbVar8 = pbVar8 + 1;
        bVar4 = *pbVar2;
      }
      if (((((param_1[3] != 0) && (iVar5 = FUN_004f65d0(), iVar5 != 0)) &&
           (iVar5 = FUN_004ffb70(), iVar5 != 0)) ||
          ((DAT_0073578c != 0 && (iVar5 = FUN_004ef050(iVar11), iVar5 != 0)))) &&
         (*(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000,
         *(int *)(iVar5 + 0x18) == 5)) {
        uVar7 = *(undefined4 *)(iVar5 + 0x60);
        iVar11 = *(int *)(iVar5 + 0x5c);
        if (0 < iVar11) {
          do {
            FUN_004f6970(uVar7);
            uVar7 = *(undefined4 *)(extraout_EDX + 4);
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
      }
      uVar3 = DAT_007588d1;
      iVar10 = iVar10 + 1;
    } while (iVar10 < 3);
    if ((DAT_00777cc8 == 3) || (DAT_00777cc8 == 2)) {
      DAT_00777cc8 = 0;
    }
    if (DAT_00748f76 == '\0') {
      FUN_00565b60(0xf660,0,0,0);
      FUN_004ab120(&DAT_007588c4,0xf660);
      FUN_004ab200(1);
      DAT_00748f8d = uVar3;
      FUN_00565ce0();
      DAT_00748f76 = '\x01';
    }
  }
  else {
    do {
      FUN_004f68c0(0x20,"split_screen_%d",iVar10);
      iVar11 = -1;
      pbVar8 = &local_2c;
      bVar4 = local_2c;
      while (bVar4 != 0) {
        if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
          bVar4 = bVar4 - 0x20;
        }
        pbVar2 = pbVar8 + 1;
        iVar11 = iVar11 * 0x21 + (uint)bVar4;
        pbVar8 = pbVar8 + 1;
        bVar4 = *pbVar2;
      }
      if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
         (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
        if (DAT_0073578c == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_004ef050(iVar11);
        }
      }
      FUN_004f6910(iVar5);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 3);
  }
  iVar11 = FUN_004f3f90(&DAT_00746104);
  if (((iVar11 == 0) || (*(int *)(iVar11 + 0x18) == 0)) && (DAT_0073578c != 0)) {
    iVar5 = *(int *)(DAT_0073578c + 8);
    iVar11 = iVar5 + 0xdc;
    if ((iVar11 == 0) || (iVar11 = FUN_004fd1e0(iVar11), iVar11 == 0)) {
      FUN_004eede0(iVar5,"GarageMain.fng",0x10,0);
    }
  }
  iVar11 = FUN_004f3f90(&DAT_00746104);
  if (((iVar11 != 0) && (*(int *)(iVar11 + 0x18) != 0)) && (*(int **)(iVar11 + 0x14) != (int *)0x0))
  {
    (**(code **)(**(int **)(iVar11 + 0x14) + 8))(0x18883f75,0,0,*(int *)(iVar11 + 0x18));
  }
  FUN_004b2480();
  iVar11 = DAT_0073578c;
  if (param_1[3] == 0) {
LAB_004b6c77:
    if (((iVar11 == 0) || (iVar11 = FUN_004ef050(0x446044e3), iVar11 == 0)) ||
       (*(int *)(iVar11 + 0x18) != 2)) goto LAB_004b6c9e;
  }
  else {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    iVar11 = DAT_0073578c;
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_004b6c35:
      (*(unsigned char *)&(local_4)) = 2;
      FUN_004ffb00(iVar5);
      local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
      iVar11 = DAT_0073578c;
      goto LAB_004b6c77;
    }
    if (DAT_0073578c != 0) {
      iVar10 = *(int *)(DAT_0073578c + 8);
      if ((iVar10 == 0) ||
         (((iVar5 = FUN_004fd1e0(iVar10 + 0xdc), iVar5 == 0 &&
           (iVar5 = FUN_004fd1e0(iVar10 + 0xec), iVar5 == 0)) || (iVar5 == 0)))) goto LAB_004b6c77;
      goto LAB_004b6c35;
    }
LAB_004b6c9e:
    iVar11 = 0;
  }
  param_1[0x16] = iVar11;
  *(undefined1 *)(param_1 + 0x15) = 0;
  FUN_004b70c0(param_1);
  puVar1 = param_1 + 0x10;
  puVar6 = (undefined4 *)param_1[0x10];
  for (puVar9 = puVar6; (puVar9 != puVar1 && (puVar9[2] != DAT_00777cc8));
      puVar9 = (undefined4 *)*puVar9) {
  }
  for (; puVar6 != puVar1; puVar6 = (undefined4 *)*puVar6) {
    if (puVar6[2] == DAT_00777cc8) goto LAB_004b6ce4;
  }
  puVar6 = (undefined4 *)0x0;
LAB_004b6ce4:
  iVar11 = param_1[0x16];
  uVar7 = puVar6[5];
  if (iVar11 != 0) {
    *(uint *)(iVar11 + 0x1c) = *(uint *)(iVar11 + 0x1c) | 0x400000;
    puVar9 = DAT_00735710;
    bVar12 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(iVar11 + 0x5c) = uVar7;
    if (bVar12) {
      (**(code **)*puVar9)(iVar11);
    }
    *(uint *)(iVar11 + 0x1c) = *(uint *)(iVar11 + 0x1c) & 0xfffffffd | 0x400000;
  }
  for (puVar9 = (undefined4 *)*puVar1; puVar9 != puVar1; puVar9 = (undefined4 *)*puVar9) {
    if (puVar9[2] == DAT_00777cc8) goto LAB_004b6d33;
  }
  puVar9 = (undefined4 *)0x0;
LAB_004b6d33:
  FUN_00495f00(puVar9[5]);
  if (DAT_0073578c != 0) {
    FUN_004f5ed0(DAT_0073578c);
  }
  iVar11 = FUN_004f3f90(&DAT_00746104);
  if (((iVar11 != 0) && (*(int *)(iVar11 + 0x18) != 0)) && (*(int **)(iVar11 + 0x14) != (int *)0x0))
  {
    (**(code **)(**(int **)(iVar11 + 0x14) + 8))(0x2401cd38,0,0,*(int *)(iVar11 + 0x18));
  }
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  iVar11 = DAT_0073578c;
  if (param_1[3] == 0) {
LAB_004b6e6d:
    if (iVar11 == 0) {
      iVar11 = 0;
      goto LAB_004b6e90;
    }
    uVar7 = FUN_004ef050(0x842a3642);
    iVar11 = DAT_0073578c;
  }
  else {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    iVar11 = DAT_0073578c;
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_004b6e15:
      (*(unsigned char *)&(local_4)) = 3;
      FUN_004ffb00(iVar5);
      local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
      iVar11 = DAT_0073578c;
      goto LAB_004b6e6d;
    }
    if (DAT_0073578c != 0) {
      iVar10 = *(int *)(DAT_0073578c + 8);
      if (((iVar10 == 0) ||
          ((iVar5 = FUN_004fd1e0(iVar10 + 0xdc), iVar5 == 0 &&
           (iVar5 = FUN_004fd1e0(iVar10 + 0xec), iVar5 == 0)))) || (iVar5 == 0)) goto LAB_004b6e6d;
      goto LAB_004b6e15;
    }
LAB_004b6e90:
    uVar7 = 0;
  }
  param_1[0x12] = uVar7;
  if (param_1[3] == 0) {
LAB_004b6f47:
    if (iVar11 != 0) {
      uVar7 = FUN_004ef050(0x842a3643);
      goto LAB_004b6f66;
    }
  }
  else {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    iVar11 = DAT_0073578c;
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_004b6f05:
      (*(unsigned char *)&(local_4)) = 4;
      FUN_004ffb00(iVar5);
      local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
      iVar11 = DAT_0073578c;
      goto LAB_004b6f47;
    }
    if (DAT_0073578c != 0) {
      iVar10 = *(int *)(DAT_0073578c + 8);
      if ((iVar10 == 0) ||
         (((iVar5 = FUN_004fd1e0(iVar10 + 0xdc), iVar5 == 0 &&
           (iVar5 = FUN_004fd1e0(iVar10 + 0xec), iVar5 == 0)) || (iVar5 == 0)))) goto LAB_004b6f47;
      goto LAB_004b6f05;
    }
  }
  uVar7 = 0;
LAB_004b6f66:
  param_1[0x13] = uVar7;
  iVar11 = FUN_004f3f90(&DAT_00746104);
  if ((iVar11 == 0) || (iVar11 = *(int *)(iVar11 + 0x18), iVar11 == 0)) {
    if ((DAT_0073578c == 0) || (iVar5 = *(int *)(DAT_0073578c + 8), iVar5 == 0)) {
      iVar11 = 0;
    }
    else {
      iVar11 = FUN_004fd1e0(iVar5 + 0xdc);
      if (iVar11 == 0) {
        iVar11 = FUN_004fd1e0(iVar5 + 0xec);
      }
    }
  }
  param_1[0x14] = iVar11;
  ExceptionList = pvStack_c;
  return param_1;
}
