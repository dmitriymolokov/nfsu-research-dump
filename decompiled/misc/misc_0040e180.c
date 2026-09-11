/* spd-match: far pct=5.10 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_7 */
#include "ghidra_compat.h"

int __cdecl FUN_0040e560();
int __cdecl FUN_00594c60();
int __cdecl FUN_00594dd0();
int __cdecl FUN_005af9e5();
int __cdecl FUN_005afb2f();
int __cdecl FUN_0063c2c0();
extern int DAT_007010c0;
extern int DAT_00701470;
extern int DAT_00701490;
extern int DAT_007014b4;
extern int DAT_007014c0;
extern int DAT_007070d8;
extern int DAT_0071abb8;
extern int DAT_0071abc0;
extern int DAT_0071abc4;
extern int DAT_0071abc8;
extern int DAT_0071abcc;
extern int DAT_0071abd0;
extern int DAT_0071abd4;
extern int DAT_0071ac90;
extern int DAT_0071ac94;
extern int DAT_0071b648;
extern int DAT_0071b64c;
extern int DAT_00734484;
extern int *DAT_00736368;
extern int *DAT_0073636c;
extern int *DAT_00736410;
extern int DAT_00736414;
extern int DAT_00736418;
extern int PTR_FUN_00702420;
extern int PTR_FUN_0070243c;
extern void LAB_0040e458(void);

extern char s_WorldViewProj_00701860[];

void FUN_0040e180(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  undefined4 *puVar13;
  int iStack_b8;
  int iStack_b4;
  undefined2 auStack_a0 [2];
  undefined1 auStack_9c [152];
  
  if (DAT_00736410 != (int *)0x0) {
    (**(code **)(*DAT_00736410 + 8))();
  }
  FUN_005af9e5();
  (**(code **)(*DAT_0073636c + 0x1c))();
  (**(code **)(*DAT_00736368 + 0x14))();
  uVar5 = DAT_0071b64c;
  iVar4 = DAT_0071b648;
  iStack_b4 = 0;
  do {
    iVar12 = (&DAT_007010c0)[iStack_b4 * 0x20];
    puVar7 = &DAT_007010c0 + iStack_b4 * 0x20;
    (&DAT_0071abb8)[iStack_b4 * 0x38] = iStack_b4;
    iVar6 = 0;
    iVar10 = 0;
    if (iVar12 != 8) {
      puVar13 = puVar7;
      do {
        iVar2 = puVar13[1];
        auStack_9c[iVar6 * 8] = (&DAT_00701470)[iVar12 * 4];
        auStack_9c[iVar6 * 8 + 2] = (&DAT_00701490)[iVar2 * 4];
        auStack_9c[iVar6 * 8 + 3] = (&DAT_007014b4)[iVar2];
        iVar12 = *(int *)(&DAT_007014c0 + iVar12 * 4);
        *(short *)(auStack_9c + iVar6 * 8 + -2) = (short)iVar10;
        iVar10 = iVar10 + iVar12;
        auStack_a0[iVar6 * 4] = 0;
        auStack_9c[iVar6 * 8 + 1] = 0;
        iVar6 = iVar6 + 1;
        iVar2 = iVar6 * 8 - (int)(auStack_a0 + 1);
        iVar12 = *(int *)(auStack_9c + (int)puVar7 + iVar2 + -2);
        puVar13 = (undefined4 *)(auStack_9c + (int)puVar7 + iVar2 + -2);
      } while (iVar12 != 8);
    }
    auStack_a0[iVar6 * 4] = 0xff;
    *(undefined2 *)(auStack_9c + iVar6 * 8 + -2) = 0;
    auStack_9c[iVar6 * 8] = 0x11;
    auStack_9c[iVar6 * 8 + 1] = 0;
    auStack_9c[iVar6 * 8 + 2] = 0;
    auStack_9c[iVar6 * 8 + 3] = 0;
    (**(code **)(*DAT_0073636c + 0x158))();
    (&DAT_0071abc0)[iStack_b4 * 0x38] = iVar10;
    puVar7 = (undefined4 *)FUN_00594c60();
    if ((puVar7 == (undefined4 *)0x0) || (iVar12 = puVar7[1], iVar12 < 0)) {
      iVar12 = 0;
    }
    pvVar8 = _malloc(iVar12 + 1);
    FUN_00594dd0();
    if (puVar7 != (undefined4 *)0x0) {
      if ((int)puVar7[7] < 1) {
        if (-1 < (int)puVar7[1]) {
          if (puVar7[4] == 0) {
            FUN_0063c2c0();
          }
          else {
            piVar1 = (int *)(puVar7[4] + 8);
            *piVar1 = *piVar1 + -1;
          }
          puVar7[1] = 0xffffffff;
        }
        iVar10 = DAT_00734484;
        iVar6 = *(int *)(DAT_00734484 + 0x18);
        *puVar7 = *(undefined4 *)(DAT_00734484 + 0x10);
        *(int *)(iVar10 + 0x18) = iVar6 + -1;
        *(undefined4 **)(iVar10 + 0x10) = puVar7;
      }
      else {
        puVar7[5] = 1;
      }
    }
    iVar6 = 0;
    if (0 < iVar12) {
      do {
        *(byte *)(iVar6 + (int)pvVar8) = *(byte *)(iVar6 + (int)pvVar8) ^ 0xaa;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar12);
    }
    *(undefined1 *)(iVar12 + (int)pvVar8) = 0;
    puVar7 = &DAT_0071abd0 + iStack_b4 * 0x38;
    FUN_005afb2f();
    iVar12 = DAT_007070d8;
    (&DAT_0071abc8)[iStack_b4 * 0x38] = 0;
    iStack_b8 = 0;
    if (0 < iVar12) {
      while (iVar12 = (**(code **)(*(int *)*puVar7 + 0x30))(), iVar12 != 0) {
        if ((((iStack_b4 != 2) && (iStack_b4 != 3)) ||
            ((iVar4 != 0x1039 && ((iVar4 != 0x8086 || (uVar5 != 0x2572)))))) || (2 < iStack_b8)) {
          if (iStack_b4 == 1) {
            if ((((iVar4 != 0x10de) || ((0x153 < uVar5 && ((uVar5 < 0x170 || (0x1f0 < uVar5)))))) ||
                (iStack_b8 < 1)) || (2 < iStack_b8)) {
LAB_0040e458:
              pcVar11 = s_WorldViewProj_00701860;
              puVar13 = &DAT_0071abd4 + iStack_b4 * 0x38;
              do {
                uVar9 = (**(code **)(*(int *)*puVar7 + 0x24))();
                *puVar13 = uVar9;
                pcVar11 = pcVar11 + 0x40;
                puVar13 = puVar13 + 1;
              } while ((int)pcVar11 < 0x702420);
              (**(code **)(*(int *)*puVar7 + 0x68))();
              (**(code **)(*(int *)*puVar7 + 0x68))();
              iVar12 = (**(code **)(*(int *)*puVar7 + 0xf4))();
              if (iVar12 == 0) {
                (&DAT_0071abc4)[iStack_b4 * 0x38] = iStack_b8;
                (&DAT_0071abc8)[iStack_b4 * 0x38] = 2;
                (**(code **)(*(int *)*puVar7 + 0xec))();
                if (iStack_b8 < 1) {
                  if (iStack_b8 == 0) {
                    DAT_00736418 = 1;
                  }
                }
                else {
                  DAT_00736414 = 1;
                }
                break;
              }
            }
          }
          else if (((iStack_b4 != 5) && (iStack_b4 != 6)) ||
                  (((iVar4 != 0x102b || (iStack_b8 != 0)) &&
                   (((iStack_b4 != 6 || (iVar4 != 0x1039)) || (iStack_b8 != 0))))))
          goto LAB_0040e458;
        }
        iStack_b8 = iStack_b8 + 1;
        if (DAT_007070d8 <= iStack_b8) break;
      }
    }
    iVar12 = 0;
    do {
      iVar6 = (**(code **)(*(int *)*puVar7 + 0x38))();
      if (iVar6 == 0) break;
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0x10);
    (&DAT_0071abcc)[iStack_b4 * 0x38] = iVar12;
    if ((&DAT_0071abc8)[iStack_b4 * 0x38] != 0) {
      puVar3 = (&PTR_FUN_0070243c)[iStack_b4];
      (&DAT_0071ac90)[iStack_b4 * 0x38] = (&PTR_FUN_00702420)[iStack_b4];
      (&DAT_0071ac94)[iStack_b4 * 0x38] = puVar3;
    }
    iStack_b4 = iStack_b4 + 1;
    if (6 < iStack_b4) {
      FUN_0040e560();
      return;
    }
  } while( true );
}
