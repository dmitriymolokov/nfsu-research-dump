/* spd-match: far pct=6.99 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_00401cd0();
int __cdecl FUN_00440740();
int __cdecl FUN_00440a40();
int __cdecl FUN_004454d0();
int __cdecl FUN_0047b040();
int __cdecl FUN_0047b0b0();
int __cdecl FUN_0047b1c0();
int __cdecl FUN_0047b220();
int __cdecl FUN_0047b600();
int __cdecl FUN_00567160();
int __cdecl FUN_005a4d80();
extern int DAT_006cc7a4;
extern int DAT_007345b4;
extern int DAT_0073781c;
extern unsigned char *DAT_00737820;
extern int DAT_007797c4;
extern int DAT_00779860;
extern int DAT_007798a0;
extern int _DAT_006cc7dc;
extern unsigned char *PTR_FUN_006ba5d4;
extern unsigned char *PTR_FUN_006ba644;
extern unsigned char *PTR_FUN_006dfaa0;
extern void LAB_0057994f(void);
extern void LAB_00686403(void);
void *ExceptionList;

undefined4 * FUN_00579750(undefined4 *param_1,int param_2,int *param_3)

{
  byte *pbVar1;
  int *piVar2;
  float fVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  void *pvVar9;
  uint uVar10;
  char *pcVar11;
  float10 fVar12;
  uint local_32c;
  int local_328;
  undefined4 *local_324;
  undefined1 local_320 [48];
  undefined1 auStack_2f0 [8];
  float fStack_2e8;
  undefined1 auStack_2e0 [32];
  int aiStack_2c0 [160];
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_1c;
  undefined1 *puStack_18;
  int local_14;
  
  puStack_18 = &LAB_00686403;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  *param_1 = &PTR_FUN_006ba644;
  param_1[4] = param_2;
  *(int *)(param_2 + 0xd8) = *(int *)(param_2 + 0xd8) + 1;
  param_1[3] = 0;
  local_14 = 0;
  *param_1 = &PTR_FUN_006ba5d4;
  local_32c = 0;
  param_1[0x18] = 0x47c34f80;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((int)param_1 + 0x71) = 0;
  *(undefined1 *)((int)param_1 + 0x72) = 0;
  puVar6 = (undefined4 *)FUN_00567160();
  (*(unsigned char *)&(local_14)) = 1;
  local_324 = puVar6;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    pcVar11 = "DEBUG_CUBE";
    local_328 = -1;
    uVar10 = 0x44;
    do {
      local_328 = local_328 * 0x21 + uVar10;
      pbVar1 = (byte *)(pcVar11 + 1);
      uVar10 = (uint)*pbVar1;
      pcVar11 = pcVar11 + 1;
    } while (*pbVar1 != 0);
    iVar7 = FUN_00567160();
    if (iVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_004454d0();
    }
    puVar6[2] = uVar8;
    puVar6[3] = 0;
    puVar6[5] = 1;
    puVar6[6] = 0;
    puVar6[4] = 0;
    puVar6[0x18] = 0;
    *DAT_00737820 = puVar6;
    puVar5 = puVar6;
    puVar6[1] = DAT_00737820;
    DAT_00737820 = puVar5;
    *puVar6 = &DAT_0073781c;
    *(undefined1 *)(puVar6 + 7) = 0;
  }
  local_14 = (uint)((unsigned int)(local_14) >> 8) << 8;
  param_1[0x1a] = puVar6;
  pvVar9 = _malloc(0x7c);
  if (pvVar9 == (void *)0x0) {
    pvVar9 = (void *)0x0;
  }
  else {
    pvVar9 = (void *)FUN_0047b040();
  }
  *(undefined4 *)((int)pvVar9 + 8) = *(undefined4 *)(param_2 + 0xd0);
  fVar3 = (float)param_3[5];
  *(float *)((int)pvVar9 + 0x5c) = fVar3;
  if (fVar3 == DAT_006cc7a4) {
    *(undefined4 *)((int)pvVar9 + 0x5c) = 0x3f800000;
  }
  *(int *)((int)pvVar9 + 0x68) = param_3[7];
  uVar10 = param_3[6];
  if ((uVar10 & 0x10) != 0) {
    local_32c = 0x10;
  }
  if ((uVar10 & 0x20) != 0) {
    local_32c = local_32c | 0x20;
  }
  if ((uVar10 & 0x40) != 0) {
    local_32c = local_32c | 0x40;
  }
  if ((char)uVar10 < '\0') {
    local_32c = local_32c | 0x80;
  }
  if (param_3[4] == 0) {
    local_328 = FUN_005a4d80(DAT_007797c4);
    if (local_328 == 0) goto LAB_0057994f;
    FUN_0047b600(0,0);
    if (local_32c == 0) {
      *(uint *)((int)pvVar9 + 0x34) = *(uint *)((int)pvVar9 + 0x34) | 0x12;
      goto LAB_0057994f;
    }
    uVar10 = local_32c | 2;
  }
  else {
    local_328 = FUN_005a4d80(param_3[4]);
    if (local_328 == 0) goto LAB_0057994f;
    FUN_0047b600(0,0);
    if (DAT_007345b4 != 0) {
      *(uint *)((int)pvVar9 + 0x34) = *(uint *)((int)pvVar9 + 0x34) | 0x11;
      goto LAB_0057994f;
    }
    if (local_32c == 0) {
      *(uint *)((int)pvVar9 + 0x34) = *(uint *)((int)pvVar9 + 0x34) | 0x11;
      goto LAB_0057994f;
    }
    uVar10 = local_32c | 1;
  }
  *(uint *)((int)pvVar9 + 0x34) = *(uint *)((int)pvVar9 + 0x34) | uVar10;
LAB_0057994f:
  if (*param_3 != 0) {
    FUN_0047b220();
  }
  if (param_3[1] != 0) {
    FUN_0047b220();
  }
  if (param_3[2] != 0) {
    FUN_0047b220();
  }
  bVar4 = false;
  if ((param_3[4] != 0) && (param_3[3] != 0)) {
    FUN_0047b220();
    bVar4 = true;
    *(float *)((int)pvVar9 + 0x5c) = *(float *)((int)pvVar9 + 0x5c) * _DAT_006cc7dc;
  }
  iVar7 = 0;
  if ((*(int *)((int)pvVar9 + 0x78) == 0) || (local_328 == 0)) {
    *(undefined4 *)((int)pvVar9 + 0xc) = 0;
    if (*(void **)((int)pvVar9 + 0x14) != (void *)0x0) {
      _free(*(void **)((int)pvVar9 + 0x14));
      *(undefined4 *)((int)pvVar9 + 0x14) = 0;
    }
    *(undefined4 *)((int)pvVar9 + 0x18) = 0;
    if (*(int *)((int)pvVar9 + 0x1c) != 0) {
      (*(code *)PTR_FUN_006dfaa0)(*(int *)((int)pvVar9 + 0x1c),0x40);
      *(undefined4 *)((int)pvVar9 + 0x1c) = 0;
    }
    *(undefined4 *)((int)pvVar9 + 0x20) = 0;
    FUN_0047b1c0();
    FUN_0047b0b0(pvVar9);
    _free(pvVar9);
    param_1[5] = 0;
  }
  else {
    param_1[5] = pvVar9;
  }
  FUN_00401cd0();
  if (bVar4) {
    FUN_00579750(local_320,local_320,&DAT_00779860);
    FUN_00579750(&local_32c,&local_32c,&DAT_007798a0);
    iStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    FUN_00440740();
    fVar12 = (float10)FUN_00440a40(auStack_2e0,auStack_2f0,0,0,0);
    param_1[0x1b] = (float)fVar12;
    fStack_2e8 = (float)fVar12;
    *(undefined1 *)((int)param_1 + 0x72) = 1;
    if (0 < iStack_40) {
      do {
        piVar2 = aiStack_2c0 + iVar7;
        iVar7 = iVar7 + 1;
        *(char *)(*piVar2 + 8) = *(char *)(*piVar2 + 8) + -1;
      } while (iVar7 < iStack_40);
    }
  }
  FUN_00401cd0();
  ExceptionList = pvStack_1c;
  return param_1;
}
