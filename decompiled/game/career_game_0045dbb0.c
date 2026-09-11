/* spd-match: far pct=6.73 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_00424f60();
int __cdecl FUN_004454d0();
int __cdecl FUN_0045e520();
int __cdecl FUN_00567160();
int __cdecl FUN_00584180();
int __cdecl FUN_005842d0();
extern int DAT_0070051c;
extern int DAT_00700520;
extern int DAT_0073781c;
extern unsigned char *DAT_00737820;
extern unsigned char *PTR_FUN_006b9694;
extern unsigned char *PTR_FUN_006c8c18;
extern void LAB_00686560(void);
void *ExceptionList;

undefined4 * FUN_0045dbb0(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  char *pcVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686560;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00424f60();
  param_1[0x7c] = param_2;
  local_4 = 0;
  *param_1 = &PTR_FUN_006c8c18;
  *(undefined2 *)(param_1 + 0x74) = 0;
  param_1[0x7f] = 0x3f800000;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined1 *)(param_1 + 0x83) = 1;
  param_1[0x84] = 0;
  param_1[0x87] = 0;
  *(undefined1 *)(param_1 + 0x86) = 1;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined2 *)((int)param_1 + 0x222) = 0;
  puVar4 = (undefined4 *)FUN_00567160();
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    pcVar8 = "MARKER_GREENARROW";
    do {
      pcVar1 = pcVar8 + 1;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar1 != '\0');
    iVar5 = FUN_00567160();
    if (iVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_004454d0();
    }
    puVar4[2] = uVar6;
    puVar4[3] = 0;
    puVar4[5] = 1;
    puVar4[6] = 0;
    puVar4[4] = 0;
    puVar4[0x18] = 0;
    *DAT_00737820 = puVar4;
    puVar3 = puVar4;
    puVar4[1] = DAT_00737820;
    DAT_00737820 = puVar3;
    *puVar4 = &DAT_0073781c;
    *(undefined1 *)(puVar4 + 7) = 0;
  }
  param_1[0x91] = puVar4;
  param_1[0x89] = 0;
  *(undefined1 *)((int)param_1 + 0x229) = 0;
  param_1[0x8b] = param_1[0x80];
  puVar4 = _malloc(0x84);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)(puVar4 + 1) = 4;
    *(undefined1 *)((int)puVar4 + 5) = 5;
    *(undefined1 *)((int)puVar4 + 6) = 0;
    *(undefined1 *)((int)puVar4 + 7) = 0;
    *puVar4 = &PTR_FUN_006b9694;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = puVar4 + 5;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    *(undefined1 *)(puVar4 + 0xb) = 4;
    *(undefined1 *)((int)puVar4 + 0x2d) = 5;
    *(undefined1 *)((int)puVar4 + 0x2e) = 0;
    *(undefined1 *)((int)puVar4 + 0x2f) = 0;
    puVar4[10] = &PTR_FUN_006b9694;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = puVar4 + 0xf;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    *(undefined1 *)(puVar4 + 0x15) = 4;
    *(undefined1 *)((int)puVar4 + 0x55) = 5;
    *(undefined1 *)((int)puVar4 + 0x56) = 0;
    *(undefined1 *)((int)puVar4 + 0x57) = 0;
    puVar4[0x14] = &PTR_FUN_006b9694;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x18] = puVar4 + 0x19;
    puVar4[0x19] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1e] = 0x41f00000;
    puVar4[0x1f] = 0;
    puVar4[0x20] = 0;
  }
  param_1[0x8c] = puVar4;
  puVar4 = _malloc(0x84);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)(puVar4 + 1) = 4;
    *(undefined1 *)((int)puVar4 + 5) = 5;
    *(undefined1 *)((int)puVar4 + 6) = 0;
    *(undefined1 *)((int)puVar4 + 7) = 0;
    *puVar4 = &PTR_FUN_006b9694;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = puVar4 + 5;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    *(undefined1 *)(puVar4 + 0xb) = 4;
    *(undefined1 *)((int)puVar4 + 0x2d) = 5;
    *(undefined1 *)((int)puVar4 + 0x2e) = 0;
    *(undefined1 *)((int)puVar4 + 0x2f) = 0;
    puVar4[10] = &PTR_FUN_006b9694;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = puVar4 + 0xf;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    *(undefined1 *)(puVar4 + 0x15) = 4;
    *(undefined1 *)((int)puVar4 + 0x55) = 5;
    *(undefined1 *)((int)puVar4 + 0x56) = 0;
    *(undefined1 *)((int)puVar4 + 0x57) = 0;
    puVar4[0x14] = &PTR_FUN_006b9694;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x18] = puVar4 + 0x19;
    puVar4[0x19] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1e] = 0x41f00000;
    puVar4[0x1f] = 0;
    puVar4[0x20] = 0;
  }
  param_1[0x8d] = puVar4;
  puVar4 = _malloc(0x84);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)(puVar4 + 1) = 4;
    *(undefined1 *)((int)puVar4 + 5) = 5;
    *(undefined1 *)((int)puVar4 + 6) = 0;
    *(undefined1 *)((int)puVar4 + 7) = 0;
    *puVar4 = &PTR_FUN_006b9694;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = puVar4 + 5;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    *(undefined1 *)(puVar4 + 0xb) = 4;
    *(undefined1 *)((int)puVar4 + 0x2d) = 5;
    *(undefined1 *)((int)puVar4 + 0x2e) = 0;
    *(undefined1 *)((int)puVar4 + 0x2f) = 0;
    puVar4[10] = &PTR_FUN_006b9694;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = puVar4 + 0xf;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    *(undefined1 *)(puVar4 + 0x15) = 4;
    *(undefined1 *)((int)puVar4 + 0x55) = 5;
    *(undefined1 *)((int)puVar4 + 0x56) = 0;
    *(undefined1 *)((int)puVar4 + 0x57) = 0;
    puVar4[0x14] = &PTR_FUN_006b9694;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x18] = puVar4 + 0x19;
    puVar4[0x19] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1e] = 0x41f00000;
    puVar4[0x1f] = 0;
    puVar4[0x20] = 0;
  }
  param_1[0x8e] = puVar4;
  pvVar7 = _malloc(0x84);
  uVar2 = DAT_00700520;
  uVar6 = DAT_0070051c;
  if (pvVar7 == (void *)0x0) {
    pvVar7 = (void *)0x0;
  }
  else {
    FUN_00584180(DAT_0070051c);
    FUN_00584180(uVar6);
    FUN_00584180(uVar2);
    *(undefined4 *)((int)pvVar7 + 0x78) = 0x41f00000;
    *(undefined4 *)((int)pvVar7 + 0x7c) = 0;
    *(undefined4 *)((int)pvVar7 + 0x80) = 0;
  }
  param_1[0x8f] = pvVar7;
  puVar4 = _malloc(0x84);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)(puVar4 + 1) = 4;
    *(undefined1 *)((int)puVar4 + 5) = 4;
    *(undefined1 *)((int)puVar4 + 6) = 0;
    *(undefined1 *)((int)puVar4 + 7) = 0;
    *puVar4 = &PTR_FUN_006b9694;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = puVar4 + 5;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    *(undefined1 *)(puVar4 + 0xb) = 4;
    *(undefined1 *)((int)puVar4 + 0x2d) = 4;
    *(undefined1 *)((int)puVar4 + 0x2e) = 0;
    *(undefined1 *)((int)puVar4 + 0x2f) = 0;
    puVar4[10] = &PTR_FUN_006b9694;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = puVar4 + 0xf;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    *(undefined1 *)(puVar4 + 0x15) = 4;
    *(undefined1 *)((int)puVar4 + 0x55) = 4;
    *(undefined1 *)((int)puVar4 + 0x56) = 0;
    *(undefined1 *)((int)puVar4 + 0x57) = 0;
    puVar4[0x14] = &PTR_FUN_006b9694;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x18] = puVar4 + 0x19;
    puVar4[0x19] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1e] = 0x41f00000;
    puVar4[0x1f] = 0;
    puVar4[0x20] = 0;
  }
  param_1[0x90] = puVar4;
  FUN_0045e520();
  iVar5 = param_1[0x8f];
  *(undefined4 *)(iVar5 + 0x7c) = 0;
  *(undefined4 *)(iVar5 + 0x80) = 0;
  FUN_005842d0(0);
  *(undefined4 *)(iVar5 + 0x7c) = 0;
  *(undefined4 *)(iVar5 + 0x80) = 0;
  FUN_005842d0(0);
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  ExceptionList = local_c;
  return param_1;
}
