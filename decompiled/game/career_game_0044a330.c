/* spd-match: far pct=10.00 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_00442200();
int __cdecl FUN_0044cd30();
int __cdecl FUN_0044ce60();
int __cdecl FUN_00458a50();
int __cdecl FUN_00674898();
extern int DAT_0078a2fc;
extern int _DAT_006b7700;
extern int _DAT_006ccc2c;
extern unsigned char *PTR_FUN_006b9694;
extern unsigned char *PTR_FUN_006c9820;
extern void LAB_0068662b(void);
void *ExceptionList;

undefined4 * FUN_0044a330(undefined4 *param_1,int param_2)

{
  short sVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0068662b;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_00458a50(param_2);
  *param_1 = &PTR_FUN_006c9820;
  local_14 = 0;
  FUN_0044cd30(param_1 + 0xb,param_2,DAT_0078a2fc);
  param_1[0x100] = 0;
  param_1[0x102] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x11f] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  *(undefined1 *)(param_1 + 0x12d) = 0;
  param_1[0x130] = 0;
  sVar1 = *(short *)(param_2 + 8);
  local_14 = CONCAT31(((unsigned int)(local_14) >> 8),1);
  param_1[0xff] = 0;
  param_1[0xfe] = 0;
  param_1[0xfd] = 0x14;
  fVar2 = (float)(int)sVar1 * _DAT_006b7700;
  *(undefined1 *)(param_1 + 0xfb) = 0xff;
  param_1[0xfc] = fVar2 * _DAT_006ccc2c;
  FUN_0044ce60();
  param_1[0xf6] = param_1 + 0xee;
  param_1[0xf7] = param_1 + 0xf1;
  param_1[0xf8] = param_1 + 0xb;
  param_1[0xf9] = param_1[0xf5];
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0xfa] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  uVar3 = FUN_00674898();
  param_1[0x10b] = uVar3;
  puVar4 = _malloc(0x28);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)((int)puVar4 + 6) = 0;
    *(undefined1 *)((int)puVar4 + 7) = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined1 *)(puVar4 + 1) = 4;
    *(undefined1 *)((int)puVar4 + 5) = 10;
    *puVar4 = &PTR_FUN_006b9694;
    puVar4[4] = puVar4 + 5;
    puVar5 = _malloc(0x28);
    puVar4[4] = puVar5;
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  param_1[0x10c] = puVar4;
  if (*(int *)(*(int *)(param_1[1] + 0x14) + 4) == 3) {
    param_1[0x120] = 0;
  }
  else {
    puVar4 = _malloc(0x28);
    if (puVar4 == (undefined4 *)0x0) {
      param_1[0x120] = 0;
    }
    else {
      *(undefined1 *)((int)puVar4 + 6) = 0;
      *(undefined1 *)((int)puVar4 + 7) = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(undefined1 *)(puVar4 + 1) = 4;
      *(undefined1 *)((int)puVar4 + 5) = 5;
      *puVar4 = &PTR_FUN_006b9694;
      puVar4[4] = puVar4 + 5;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      param_1[0x120] = puVar4;
    }
  }
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x11c] = 0;
  param_1[0x102] = 0;
  *(undefined1 *)(param_1 + 0x11b) = 1;
  param_1[0x103] = 0x4b189680;
  uVar3 = FUN_00442200(*(undefined4 *)(param_1[1] + 0x814));
  param_1[0x11d] = uVar3;
  param_1[0x11f] = 0;
  *(undefined1 *)(param_1 + 0x107) = 1;
  param_1[0x11e] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x129) = 0xff;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  *(undefined1 *)(param_1 + 0x12d) = 0;
  param_1[0x128] = 0;
  *(undefined1 *)(param_1 + 0x104) = 0;
  *(undefined1 *)(param_1 + 0x12f) = 0;
  param_1[0x130] = 0;
  param_1[0x12e] = 0x3f800000;
  ExceptionList = local_1c;
  return param_1;
}
