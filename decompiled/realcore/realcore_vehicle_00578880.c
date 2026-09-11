/* spd-match: far pct=6.87 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C229x_illegal_operand/batches/20260724T141934Z_w0_tc0 */
#include "ghidra_compat.h"

double __cdecl sqrt(double);
int __cdecl abs(int);

int __cdecl FUN_00401d60();
int __cdecl FUN_00577d10();
int __cdecl FUN_00577d50();
int __cdecl FUN_00577d80();
int __cdecl FUN_00577e60();
int __cdecl FUN_00577ed0();
int __cdecl FUN_00578490();
int __cdecl FUN_00578820();
extern int DAT_007345c0;
extern int DAT_007345c4;
extern int DAT_0073b118;
extern int DAT_0073b128;
extern int DAT_0073b138;
extern int DAT_0073b140;
extern int DAT_0073b144;
extern void LAB_00578935(void);
extern void LAB_00578a7e(void);
extern void LAB_00578ab7(void);

void FUN_00578880(int param_1,int param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  char *pcVar9;
  int iVar10;
  undefined *puVar11;
  uint uVar12;
  undefined8 uVar13;
  
  uVar12 = ((*(int *)(((int)DAT_007345c4) + 4) - (((int)DAT_007345c4) + 0x17U & 0xfffffff0)) + 8 + DAT_007345c4) /
           0xa0;
  if (uVar12 != 0) {
    puVar4 = (undefined4 *)FUN_00401d60();
    do {
      if ((puVar4[3] == param_1) && (iVar5 = FUN_00578820(), iVar5 == 0)) {
        iVar5 = FUN_00577d10(*puVar4);
        iVar5 = (**(code **)(iVar5 + 8))(puVar4,0);
        if ((iVar5 != 0) && (param_2 != 0)) {
          FUN_00578490(param_2);
        }
      }
      puVar4 = puVar4 + 0x28;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  pcVar9 = "WorldObject";
  iVar5 = -1;
  uVar12 = 0x57;
  do {
    pbVar1 = (byte *)(pcVar9 + 1);
    iVar5 = iVar5 * 0x21 + uVar12;
    pcVar9 = pcVar9 + 1;
    uVar12 = (uint)*pbVar1;
  } while (*pbVar1 != 0);
  if (param_2 == 0) {
    if (iVar5 == DAT_0073b128) {
      puVar6 = &DAT_0073b118;
LAB_00578935:
      puVar8 = *(undefined **)(puVar6 + 0x2c);
      if (puVar8 == puVar6 + 0x2c) {
        puVar8 = (undefined *)FUN_00577e60(0);
      }
      else if (puVar8 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = puVar8 + -4;
      }
joined_r0x0057898c:
      do {
        if (puVar8 == (undefined *)0x0) goto LAB_00578ab7;
        if (((*(int *)(puVar8 + 0x2c) != 0) && (*(int *)(*(int *)(puVar8 + 0x2c) + 0x70) != 0)) &&
           (puVar8[0x44] == '\0')) {
          pcVar9 = "WorldObject";
          iVar10 = -1;
          uVar12 = 0x57;
          do {
            iVar10 = iVar10 * 0x21 + uVar12;
            pbVar1 = (byte *)(pcVar9 + 1);
            uVar12 = (uint)*pbVar1;
            pcVar9 = pcVar9 + 1;
          } while (*pbVar1 != 0);
          if (iVar10 != 0) {
            FUN_00577d10(iVar10);
          }
          uVar7 = FUN_00577d50();
          FUN_00578490(uVar7);
          puVar8[0x44] = 1;
        }
        if (iVar5 == DAT_0073b128) {
          puVar6 = &DAT_0073b118;
        }
        else {
          if ((undefined4 **)DAT_0073b138 == &DAT_0073b138) goto LAB_00578ab7;
          while( true ) {
            uVar13 = FUN_00577d10(iVar5);
            puVar6 = (undefined *)uVar13;
            if (puVar6 != (undefined *)0x0) break;
            if ((undefined4 **)*(undefined4 *)((ulonglong)uVar13 >> 0x20) == &DAT_0073b138)
            goto LAB_00578ab7;
          }
        }
        puVar2 = *(undefined **)(puVar8 + 0x18);
        if (*(int *)(puVar8 + 4) == 0) {
          puVar8 = (undefined *)0x0;
        }
        else {
          puVar8 = (undefined *)(*(int *)(puVar8 + 4) + -4);
        }
        if (puVar2 == (undefined *)0xffffffd4) {
          puVar11 = (undefined *)0x0;
        }
        else {
          puVar11 = puVar2 + 0x28;
        }
        if (puVar8 == puVar11) {
          for (puVar4 = *(undefined4 **)(puVar2 + 0x20); puVar4 != (undefined4 *)(puVar2 + 0x20);
              puVar4 = (undefined4 *)*puVar4) {
            puVar3 = (undefined4 *)puVar4[0xb];
            if (puVar3 == puVar4 + 0xb) {
              uVar13 = FUN_00577e60(0);
LAB_00578a7e:
              puVar4 = (undefined4 *)((ulonglong)uVar13 >> 0x20);
              puVar8 = (undefined *)uVar13;
              if (puVar8 != (undefined *)0x0) goto joined_r0x0057898c;
            }
            else if (puVar3 != (undefined4 *)0x0) {
              uVar13 = CONCAT44(puVar4,puVar3 + -1);
              goto LAB_00578a7e;
            }
          }
          if (puVar2 != puVar6) {
            uVar13 = FUN_00577e60(puVar2);
            puVar8 = (undefined *)uVar13;
            if (puVar8 != (undefined *)0x0) goto joined_r0x0057898c;
            if ((undefined *)((ulonglong)uVar13 >> 0x20) != puVar6) {
              puVar8 = (undefined *)FUN_00577ed0();
              goto joined_r0x0057898c;
            }
          }
          puVar8 = (undefined *)0x0;
        }
      } while( true );
    }
    if ((undefined4 **)DAT_0073b138 != &DAT_0073b138) {
      do {
        uVar13 = FUN_00577d10(iVar5);
        puVar6 = (undefined *)uVar13;
        if (puVar6 != (undefined *)0x0) goto LAB_00578935;
      } while ((undefined4 **)*(undefined4 *)((ulonglong)uVar13 >> 0x20) != &DAT_0073b138);
    }
  }
LAB_00578ab7:
  iVar5 = DAT_0073b144;
  if (DAT_007345c0 != 0) {
    while( true ) {
      if (iVar5 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = (undefined *)(iVar5 + -4);
      }
      if (puVar6 == &DAT_0073b140) break;
      iVar5 = *(int *)(puVar6 + 4);
    }
    puVar4 = DAT_0073b138;
    if ((undefined4 **)DAT_0073b138 != &DAT_0073b138) {
      do {
        FUN_00577d80();
        puVar4 = (undefined4 *)*puVar4;
      } while ((undefined4 **)puVar4 != &DAT_0073b138);
    }
  }
  return;
}
