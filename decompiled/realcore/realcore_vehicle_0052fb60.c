/* spd-match: far pct=4.46 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2440_int_float/batches/20260724T133747Z_w0_tc0 */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_00421900();
int __cdecl FUN_005649f0();
int __cdecl FUN_00567160();
int __cdecl FUN_00567220();
extern unsigned char *DAT_006f7e94;
extern int DAT_007349b4;
extern int DAT_007349b8;
extern int DAT_00735624;
extern void LAB_0052fc94(void);
extern void LAB_0052fd03(void);
extern void LAB_0052fdd4(void);
extern void LAB_0052fe32(void);
extern void LAB_0052fe78(void);
extern void LAB_0052fe96(void);
extern void LAB_0052feee(void);
extern void LAB_00686b60(void);
void *ExceptionList;

void FUN_0052fb60(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  void **ppvVar6;
  int *******pppppppiVar7;
  int ******ppppppiVar8;
  int *******pppppppiVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int ******ppppppiVar13;
  int ******ppppppiVar14;
  bool bVar15;
  int ******local_20;
  int ******local_1c;
  int ******local_18;
  int ******local_14;
  int ******local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_00686b60;
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  local_c = ExceptionList;
  if (DAT_006f7e94 + 1 <= *(int *)(param_1 + 0xc) + DAT_00735624) {
    puVar1 = (undefined4 *)(param_1 + 4);
    puVar2 = (undefined4 *)*puVar1;
    local_20 = (int ******)&local_1c;
    local_18 = (int ******)&local_1c;
    local_14 = (int ******)&local_14;
    local_10 = (int ******)&local_14;
    local_4 = 1;
    ppvVar6 = &local_c;
    local_1c = local_20;
    for (; ExceptionList = ppvVar6, puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      ppppppiVar14 = (int ******)puVar2[2];
      if (((uint)ppppppiVar14[0xd1] & 1) != 0) {
        if (DAT_007349b4 == 0) {
          FUN_005649f0();
        }
        pppppppiVar7 = (int *******)FUN_00567160();
        if (pppppppiVar7 == (int *******)0x0) {
          pppppppiVar7 = (int *******)0x0;
        }
        else {
          pppppppiVar7[2] = ppppppiVar14;
        }
        *local_18 = (int *****)pppppppiVar7;
        pppppppiVar7[1] = local_18;
        *pppppppiVar7 = (int ******)&local_1c;
        local_20 = local_1c;
        local_18 = (int ******)pppppppiVar7;
      }
      ppvVar6 = ExceptionList;
    }
    piVar12 = (int *)*puVar1;
    while (ppppppiVar14 = (int ******)0x0, piVar12 != (int *)(param_1 + 4)) {
      pppppppiVar7 = (int *******)FUN_0040a880();
      do {
        ppppppiVar13 = (int ******)piVar12[2];
        for (pppppppiVar9 = (int *******)local_20; pppppppiVar9 != pppppppiVar7;
            pppppppiVar9 = (int *******)*pppppppiVar9) {
          if (ppppppiVar13 == pppppppiVar9[2]) goto LAB_0052fc94;
        }
        if ((ppppppiVar14 == (int ******)0x0) ||
           ((float)(unsigned int)(ppppppiVar13[0xc0]) < (float)(unsigned int)(ppppppiVar14[0xc0]))) {
          ppppppiVar14 = ppppppiVar13;
        }
LAB_0052fc94:
        piVar12 = (int *)*piVar12;
      } while (piVar12 != (int *)(param_1 + 4));
      if (ppppppiVar14 == (int ******)0x0) break;
      if (DAT_007349b4 == 0) {
        FUN_005649f0();
      }
      pppppppiVar7 = (int *******)FUN_00567160();
      if (pppppppiVar7 == (int *******)0x0) {
        pppppppiVar7 = (int *******)0x0;
      }
      else {
        pppppppiVar7[2] = ppppppiVar14;
      }
      *local_18 = (int *****)pppppppiVar7;
      pppppppiVar7[1] = local_18;
      *pppppppiVar7 = (int ******)&local_1c;
      local_20 = local_1c;
      local_18 = (int ******)pppppppiVar7;
    }
    piVar12 = (int *)(param_1 + 0x24);
    if (*(int *)(param_1 + 0x24) == 0) goto LAB_0052fd03;
    ppppppiVar14 = (int ******)(*(int *)(param_1 + 0x24) + -0x210);
    while( true ) {
      if (piVar12 == (int *)0x0) {
        ppppppiVar13 = (int ******)0x0;
      }
      else {
        ppppppiVar13 = (int ******)(param_1 + -0x1ec);
      }
      if (ppppppiVar14 == ppppppiVar13) break;
      if (((uint)ppppppiVar14[0xd1] & 1) != 0) {
        if (DAT_007349b4 == 0) {
          FUN_005649f0();
        }
        pppppppiVar7 = (int *******)FUN_00567160();
        if (pppppppiVar7 == (int *******)0x0) {
          pppppppiVar7 = (int *******)0x0;
        }
        else {
          pppppppiVar7[2] = ppppppiVar14;
        }
        *local_10 = (int *****)pppppppiVar7;
        pppppppiVar7[1] = local_10;
        *pppppppiVar7 = (int ******)&local_14;
        local_20 = local_1c;
        local_10 = (int ******)pppppppiVar7;
      }
      if (ppppppiVar14[0x84] == (int *****)0x0) {
LAB_0052fd03:
        ppppppiVar14 = (int ******)0x0;
      }
      else {
        ppppppiVar14 = (int ******)(ppppppiVar14[0x84] + -0x84);
      }
    }
    if (*piVar12 == 0) {
      ppppppiVar14 = (int ******)0x0;
    }
    else {
      ppppppiVar14 = (int ******)(*piVar12 + -0x210);
    }
    do {
      ppppppiVar13 = (int ******)0x0;
      while( true ) {
        pppppppiVar7 = (int *******)local_14;
        if (piVar12 == (int *)0x0) {
          ppppppiVar8 = (int ******)0x0;
        }
        else {
          ppppppiVar8 = (int ******)(param_1 + -0x1ec);
        }
        if (ppppppiVar14 == ppppppiVar8) break;
        pppppppiVar9 = (int *******)FUN_0040a880();
        for (; pppppppiVar7 != pppppppiVar9; pppppppiVar7 = (int *******)*pppppppiVar7) {
          if (ppppppiVar14 == pppppppiVar7[2]) goto LAB_0052fdd4;
        }
        if ((ppppppiVar13 == (int ******)0x0) ||
           ((float)(unsigned int)(ppppppiVar14[0xc0]) < (float)(unsigned int)(ppppppiVar13[0xc0]))) {
          ppppppiVar13 = ppppppiVar14;
        }
LAB_0052fdd4:
        if (ppppppiVar14[0x84] == (int *****)0x0) {
          ppppppiVar14 = (int ******)0x0;
        }
        else {
          ppppppiVar14 = (int ******)(ppppppiVar14[0x84] + -0x84);
        }
      }
      if (ppppppiVar13 == (int ******)0x0) goto LAB_0052fe32;
      if (DAT_007349b4 == 0) {
        FUN_005649f0();
      }
      pppppppiVar7 = (int *******)FUN_00567160();
      if (pppppppiVar7 == (int *******)0x0) {
        pppppppiVar7 = (int *******)0x0;
      }
      else {
        pppppppiVar7[2] = ppppppiVar13;
      }
      *local_10 = (int *****)pppppppiVar7;
      pppppppiVar7[1] = local_10;
      *pppppppiVar7 = (int ******)&local_14;
      local_20 = local_1c;
      local_10 = (int ******)pppppppiVar7;
    } while( true );
  }
  ExceptionList = &local_c;
  for (puVar1 = *(undefined4 **)(param_1 + 4); puVar1 != (undefined4 *)(param_1 + 4);
      puVar1 = (undefined4 *)*puVar1) {
    (**(code **)(*(int *)puVar1[2] + 0x50))();
  }
LAB_0052feee:
  piVar12 = (int *)(param_1 + 4);
  piVar3 = *(int **)(param_1 + 4);
  iVar10 = (unsigned int)(DAT_007349b4);
  while (piVar3 != piVar12) {
    piVar3 = (int *)*piVar12;
    iVar11 = *piVar3;
    piVar4 = (int *)piVar3[1];
    *piVar4 = iVar11;
    *(int **)(iVar11 + 4) = piVar4;
    iVar11 = *(int *)(iVar10 + 0x18);
    *piVar3 = *(int *)(iVar10 + 0x10);
    *(int **)(iVar10 + 0x10) = piVar3;
    iVar11 = iVar11 + -1;
    bVar15 = (unsigned int)(DAT_007349b8) != 0;
    *(int *)(iVar10 + 0x18) = iVar11;
    if (bVar15) {
      if (iVar11 == 0) {
        FUN_00567220();
        iVar10 = 0;
        DAT_007349b4 = 0;
      }
      else {
        DAT_007349b8 = 1;
      }
    }
    piVar3 = (int *)*piVar12;
  }
  for (piVar3 = (int *)*piVar12; piVar3 != piVar12; piVar3 = (int *)*piVar3) {
  }
  *piVar12 = (int)piVar12;
  *(int **)(param_1 + 8) = piVar12;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return;
LAB_0052fe32:
  bVar5 = true;
  bVar15 = false;
  pppppppiVar7 = (int *******)local_10;
  do {
    ppppppiVar14 = (int ******)local_20[2];
    ppppppiVar13 = pppppppiVar7[2];
    if (((uint)ppppppiVar14[0xd1] & 1) == 0) {
      if (((uint)ppppppiVar13[0xd1] & 1) == 0) {
        if ((float)(unsigned int)(ppppppiVar14[0xc0]) < (float)(unsigned int)(ppppppiVar13[0xc0])) goto LAB_0052fe78;
      }
      else {
        bVar5 = false;
      }
LAB_0052fe96:
      if (!bVar15) break;
    }
    else {
      if (((uint)ppppppiVar13[0xd1] & 1) != 0) goto LAB_0052fe96;
LAB_0052fe78:
      (*(code *)(*ppppppiVar13)[0x1f])();
      *(undefined1 *)((int)ppppppiVar13 + 0x34e) = 0;
      (*(code *)(*ppppppiVar14)[0x14])();
      bVar15 = true;
    }
    if (pppppppiVar7 == (int *******)local_14) break;
    local_20 = (int ******)*local_20;
    pppppppiVar7 = (int *******)pppppppiVar7[1];
    pppppppiVar9 = (int *******)FUN_0040a880();
    if (((int *******)local_20 == pppppppiVar9) || (!bVar5)) break;
  } while( true );
  local_4 = local_4 & 0xffffff00;
  FUN_00421900();
  local_4 = 0xffffffff;
  FUN_00421900();
  goto LAB_0052feee;
}
