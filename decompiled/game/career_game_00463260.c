/* spd-match: far pct=6.15 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_9/buckets/p09_game_a/attempt1_baseline */
#include "ghidra_compat.h"

int __cdecl FUN_00564b10();
int __cdecl FUN_00566e60();
int __cdecl FUN_005868e0();
int __cdecl FUN_0059c850();
extern int DAT_006b7300;
extern int DAT_006b7328;
extern unsigned char *DAT_00735f74;
extern int DAT_007376b0;
extern unsigned char *PTR_FUN_006b9694;
extern unsigned char *PTR_FUN_006c89dc;
extern void LAB_00686538(void);
void *ExceptionList;

undefined4 *  FUN_00463260(undefined4 param_1,undefined4 *param_2)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *extraout_EDX;
  int iVar12;
  undefined4 *puVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  undefined4 *local_24;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00686538;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_2[1] = 0;
  local_8 = 0;
  *param_2 = &PTR_FUN_006c89dc;
  param_2[2] = param_1;
  *(undefined1 *)(param_2 + 0xd) = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[3] = 0;
  puVar6 = _malloc(0x28);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)(puVar6 + 1) = 4;
    *(undefined1 *)((int)puVar6 + 5) = 0x1e;
    *(undefined1 *)((int)puVar6 + 6) = 0;
    *(undefined1 *)((int)puVar6 + 7) = 0;
    *puVar6 = &PTR_FUN_006b9694;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = puVar6 + 5;
    puVar7 = _malloc(0x78);
    puVar6[4] = puVar7;
    for (iVar11 = 0x1e; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  param_2[0xc] = puVar6;
  puVar6 = _malloc(0x2c);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
    *(undefined1 *)((int)puVar6 + 0x19) = 1;
    *(undefined2 *)(puVar6 + 7) = 0x14;
    pvVar8 = _malloc(0x170);
    puVar6[8] = pvVar8;
    puVar6[1] = 2;
    puVar6[2] = 0;
    puVar6[10] = &DAT_007376b0;
    puVar6[9] = (int)pvVar8 + 0x10;
    *(undefined1 *)((int)puVar6 + 0x1a) = 2;
    puVar6[5] = 0;
    *(undefined1 *)(puVar6 + 6) = 1;
    *(undefined2 *)((int)puVar6 + 0x1e) = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    FUN_0059c850();
  }
  param_2[5] = puVar6;
  puVar6 = _malloc(0x30);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[9] = 0x3f800000;
    puVar6[10] = 0x3f800000;
    *(undefined2 *)(puVar6 + 0xb) = 0;
    *(undefined2 *)((int)puVar6 + 0x2e) = 1;
  }
  param_2[6] = puVar6;
  puVar6 = _malloc(0x60);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[9] = 0x3f800000;
    puVar6[10] = 0x3f800000;
    *(undefined2 *)(puVar6 + 0xb) = 0;
    *(undefined2 *)((int)puVar6 + 0x2e) = 1;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x15] = 0x3f800000;
    puVar6[0x16] = 0x3f800000;
    *(undefined2 *)(puVar6 + 0x17) = 0;
    *(undefined2 *)((int)puVar6 + 0x5e) = 1;
  }
  param_2[10] = puVar6;
  puVar6 = _malloc(0x60);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[9] = 0x3f800000;
    puVar6[10] = 0x3f800000;
    *(undefined2 *)(puVar6 + 0xb) = 0;
    *(undefined2 *)((int)puVar6 + 0x2e) = 1;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x15] = 0x3f800000;
    puVar6[0x16] = 0x3f800000;
    *(undefined2 *)(puVar6 + 0x17) = 0;
    *(undefined2 *)((int)puVar6 + 0x5e) = 1;
  }
  fVar1 = DAT_006b7300;
  param_2[0xb] = puVar6;
  fVar3 = *(float *)(param_2[2] + 0x3d4);
  fVar5 = fVar1 * *(float *)(param_2[2] + 0xd8) * fVar3;
  fVar14 = (float10)FUN_00564b10();
  fVar15 = (float10)FUN_00564b10();
  fVar16 = (float10)FUN_00564b10();
  fVar1 = (float)(fVar16 * (float10)fVar5);
  fVar16 = (float10)FUN_00564b10();
  fVar16 = fVar16 * (float10)fVar5;
  pfVar4 = (float *)param_2[10];
  *pfVar4 = (float)(fVar14 * (float10)fVar3);
  if ((float)(fVar14 * (float10)fVar3) != pfVar4[2]) {
    *(undefined2 *)(pfVar4 + 0xb) = 2;
  }
  pfVar4[0xc] = (float)(fVar15 * (float10)fVar3);
  if ((float)(fVar15 * (float10)fVar3) != pfVar4[0xe]) {
    *(undefined2 *)(pfVar4 + 0x17) = 2;
  }
  iVar11 = param_2[10];
  *(float *)(iVar11 + 4) = fVar1;
  if (fVar1 != *(float *)(iVar11 + 0xc)) {
    *(undefined2 *)(iVar11 + 0x2c) = 2;
  }
  *(float *)(iVar11 + 0x34) = (float)fVar16;
  if (fVar16 != (float10)*(float *)(iVar11 + 0x3c)) {
    *(undefined2 *)(iVar11 + 0x5c) = 2;
  }
  uVar10 = DAT_006b7328;
  iVar11 = param_2[0xb];
  *(undefined4 *)(iVar11 + 0x24) = DAT_006b7328;
  *(undefined4 *)(iVar11 + 0x54) = uVar10;
  iVar11 = *(int *)(param_2[2] + 0x20);
  local_24 = param_2 + 0xe;
  local_18 = iVar11 + 0x10;
  puVar6 = extraout_EDX;
  local_14 = extraout_EDX;
  do {
    iVar12 = DAT_00735f74;
    puVar7 = (undefined4 *)(DAT_00735f74 + 0x10);
    if ((*(undefined4 **)(DAT_00735f74 + 0x10) == puVar6) &&
       ((*(byte *)(DAT_00735f74 + 0x14) & 1) != 0)) {
      FUN_00566e60();
      puVar6 = (undefined4 *)0x0;
    }
    puVar13 = (undefined4 *)*puVar7;
    iVar9 = *(int *)(iVar12 + 0x18) + 1;
    if (puVar13 == puVar6) {
      uVar10 = 0;
    }
    else {
      uVar10 = *puVar13;
      if (*(int *)(iVar12 + 0x1c) < iVar9) {
        *(int *)(iVar12 + 0x1c) = iVar9;
      }
      *(int *)(iVar12 + 0x18) = iVar9;
      bVar2 = *(byte *)(iVar12 + 0x14);
      *puVar7 = uVar10;
      if (((bVar2 & 2) != 0) && (iVar12 = *(int *)(iVar12 + 0x28) >> 2, 0 < iVar12)) {
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
      }
      uVar10 = FUN_005868e0(local_18,((int)local_14 / 2) * 0x20 + 0xd0 + iVar11,iVar11 + 0x270);
      puVar6 = (undefined4 *)0x0;
    }
    *local_24 = uVar10;
    local_14 = (undefined4 *)((int)local_14 + 1);
    local_24 = local_24 + 1;
    local_18 = local_18 + 0x30;
  } while ((int)local_14 < 4);
  ExceptionList = local_10;
  return param_2;
}
