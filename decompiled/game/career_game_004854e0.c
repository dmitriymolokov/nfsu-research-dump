/* Decompiled from Speed.exe @ 004854e0 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_004854e0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  FUN_004834e0();
  *param_1 = &PTR_FUN_006c7d28;
  puVar9 = param_3;
  puVar10 = param_1 + 0x1a;
  for (iVar5 = 0x29; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_004859f0();
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd1] = 0;
  param_1[0xdb] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xd5] = 1;
  param_1[0xd0] = 100;
  param_1[0xd6] = 0x4000;
  param_1[0xe2] = 0x4000;
  param_1[0xdc] = 100;
  param_1[0xe1] = 1;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xdd] = 0;
  param_1[0xe7] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xee] = 0x4000;
  param_1[0xe8] = 100;
  param_1[0xed] = 1;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xe9] = 0;
  param_1[0xf3] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xfa] = 0x4000;
  param_1[0xf4] = 100;
  param_1[0xf9] = 1;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf5] = 0;
  param_1[0xff] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0x10e] = param_2;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x118] = 0x3f800000;
  param_1[0x119] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x11a) = 0;
  *(undefined2 *)((int)param_1 + 0x46a) = 1;
  param_1[0x11b] = param_5;
  uVar1 = param_3[0xf];
  if ((void *)param_1[0xd4] != (void *)0x0) {
    _free((void *)param_1[0xd4]);
    param_1[0xd4] = 0;
  }
  param_1[0xd3] = uVar1;
  param_1[0xd1] = 0x20;
  uVar1 = param_3[0x14];
  uVar2 = param_3[0x15];
  if ((void *)param_1[0xe0] != (void *)0x0) {
    _free((void *)param_1[0xe0]);
    param_1[0xe0] = 0;
  }
  param_1[0xdf] = uVar2;
  param_1[0xdd] = uVar1;
  uVar1 = param_3[0x14];
  uVar2 = param_3[0x16];
  if ((void *)param_1[0xec] != (void *)0x0) {
    _free((void *)param_1[0xec]);
    param_1[0xec] = 0;
  }
  param_1[0xeb] = uVar2;
  param_1[0xe9] = uVar1;
  uVar1 = param_1[0x4e];
  if ((void *)param_1[0xf8] != (void *)0x0) {
    _free((void *)param_1[0xf8]);
    param_1[0xf8] = 0;
  }
  param_1[0xf7] = param_1 + 0x50;
  bVar11 = DAT_00735f5c == 0;
  param_1[0xf5] = uVar1;
  if (bVar11) {
    *(undefined4 *)(param_1[7] + 0x280) = 0;
    *(undefined4 *)(param_1[7] + 0x284) = 0;
  }
  iVar5 = param_1[0x10e];
  uVar1 = *(undefined4 *)(iVar5 + 100);
  uVar2 = *(undefined4 *)(iVar5 + 0x68);
  param_1[0xc] = *(undefined4 *)(iVar5 + 0x60);
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  fVar4 = _DAT_00736818;
  fVar3 = _DAT_00736814;
  if (((DAT_00736810 == DAT_006cc7a4) && (_DAT_00736814 == DAT_006cc7a4)) &&
     (_DAT_00736818 == DAT_006cc7a4)) {
    param_1[0x10] = param_1[0x33];
    param_1[0x11] = param_1[0x34];
    param_1[0x12] = param_1[0x34];
  }
  else {
    param_1[0x10] = DAT_00736810;
    param_1[0x11] = fVar3;
    param_1[0x12] = fVar4;
  }
  fVar3 = DAT_006b6cc4;
  param_1[0x14] = 0;
  bVar11 = fVar3 == DAT_006cc7a4;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if (bVar11) {
    param_1[0x18] = param_1[0x37];
  }
  else {
    param_1[0x18] = DAT_006b6cc4;
  }
  if (DAT_006b6cc8 == DAT_006cc7a4) {
    param_1[0x19] = param_1[0x36];
  }
  else {
    param_1[0x19] = DAT_006b6cc8;
  }
  puVar9 = (undefined4 *)param_1[0x2f];
  uVar1 = puVar9[1];
  uVar2 = puVar9[2];
  param_1[0x104] = *puVar9;
  param_1[0x105] = uVar1;
  param_1[0x106] = uVar2;
  uVar1 = *(undefined4 *)(param_1[0x2e] * 0x10 + -0xc + param_1[0x2f]);
  puVar9 = (undefined4 *)(param_1[0x2e] * 0x10 + -0x10 + param_1[0x2f]);
  uVar2 = puVar9[2];
  param_1[0x108] = *puVar9;
  param_1[0x109] = uVar1;
  param_1[0x10a] = uVar2;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0x49742400;
  *(undefined4 *)(param_1[7] + 0xbc) = param_1[0x26];
  uVar1 = DAT_006b6ccc;
  *(undefined4 *)(param_1[7] + 0xc0) = param_1[0x27];
  param_1[0x118] = uVar1;
  *(undefined2 *)((int)param_1 + 0x46a) = 1;
  uVar6 = DAT_006f227c ^ 0x1d872b41;
  uVar7 = uVar6 >> 5 ^ uVar6;
  uVar6 = uVar7 << 0x1b ^ uVar7 ^ uVar6;
  param_3 = (undefined4 *)(DAT_006f227c % 0x13 + 0x1a);
  uVar7 = uVar6 ^ 0x1d872b41;
  uVar8 = uVar7 >> 5 ^ uVar7;
  DAT_006f227c = uVar8 << 0x1b ^ uVar8 ^ uVar7;
  if ((uVar6 & 1) != 0) {
    param_3 = (undefined4 *)-(int)param_3;
  }
  param_1[0x10f] = (float)(int)param_3;
  if ((float)(int)param_3 != (float)param_1[0x111]) {
    *(undefined2 *)(param_1 + 0x11a) = 2;
  }
  fVar3 = DAT_006cc7a4;
  param_1[0x111] = 0;
  if (fVar3 != (float)param_1[0x10f]) {
    *(undefined2 *)(param_1 + 0x11a) = 2;
  }
  if ((param_1[0x11b] == 0) && (DAT_00735f5c == 0)) {
    *(undefined4 *)(param_1[7] + 0xb4) = 0;
    *(undefined4 *)(param_1[7] + 0xb8) = 0;
    return param_1;
  }
  return param_1;
}

