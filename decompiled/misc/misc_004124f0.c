/* Decompiled from Speed.exe @ 004124f0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 FUN_004124f0(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = param_5 - (param_3 * 0x10 + (param_2 * 3 + 0x7b) * 4 + param_1 * 0x128);
  if ((((iVar7 < 0x1800) || (param_1 < 2)) || (0x100 < param_1)) ||
     (((param_2 < 1 || (0x10 < param_2)) || ((param_3 < 1 || (param_2 < param_3)))))) {
    return 0;
  }
  *param_4 = 0x4d525453;
  FUN_0063f150(param_4 + 1);
  puVar5 = param_4 + 0x6b;
  puVar1 = puVar5 + param_1 * 0x4a;
  param_4[9] = param_1;
  param_4[10] = puVar1;
  param_4[0xc] = puVar1 + param_2 * 3;
  uVar2 = (uint)(puVar1 + param_2 * 3 + param_3 * 4) & 0xffffffc0;
  param_4[0xd] = param_3;
  iVar3 = uVar2 + 0x40;
  uVar6 = 0x8000;
  param_4[8] = puVar5;
  param_4[0xb] = param_2;
  param_4[0xe] = iVar3;
  param_4[0xf] = iVar3;
  if (iVar7 < 0x8000) {
    param_4[0x10] = uVar2 + 0x4080;
    param_4[0x11] = uVar2 + 0x4080;
    uVar6 = 0x1000;
    param_4[0x66] = 0x2000;
    param_4[0x16] = 0x1000;
    param_4[0x69] = 0x4000;
  }
  else {
    if (iVar7 < 0x10000) {
      param_4[0x10] = uVar2 + 0x8080;
      param_4[0x11] = uVar2 + 0x8080;
      param_4[0x66] = 0x4000;
      param_4[0x16] = 0x2000;
      param_4[0x17] = 0x2000;
      param_4[0x69] = 0x8000;
      goto LAB_004126b7;
    }
    if (iVar7 < 0x18000) {
      param_4[0x66] = 0x8000;
      uVar6 = 0x4000;
      param_5 = uVar2 + 0x10080;
      param_4[0x16] = 0x4000;
      param_4[0x69] = 0x10000;
    }
    else {
      if (iVar7 < 0x20000) {
        param_4[0x10] = uVar2 + 0x18080;
        param_4[0x11] = uVar2 + 0x18080;
        param_4[0x66] = 0x8000;
        param_4[0x16] = 0x8000;
        param_4[0x69] = 0x18000;
        goto LAB_004126b4;
      }
      if (iVar7 < 0x21000) {
        param_5 = uVar2 + 0x20080;
        param_4[0x66] = 0x10000;
        param_4[0x16] = 0x8000;
        param_4[0x69] = 0x20000;
      }
      else {
        param_5 = param_5 + (int)param_4;
        param_4[0x66] = 0x20000;
        param_4[0x16] = 0x10000;
        param_4[0x69] = 0xffffffff;
      }
    }
    param_4[0x10] = param_5;
    param_4[0x11] = param_5;
  }
LAB_004126b4:
  param_4[0x17] = uVar6;
LAB_004126b7:
  param_4[0x1a] = iVar3;
  param_4[0x1b] = iVar3;
  param_4[0x1c] = iVar3;
  param_4[0x12] = 0;
  param_4[0x13] = 0x96;
  param_4[0x14] = 0x32;
  param_4[0x15] = 0;
  param_4[0x18] = 0;
  param_4[0x19] = 0;
  param_4[0x1d] = 0;
  param_4[0x1e] = 0;
  param_4[0x1f] = 0;
  param_4[0x20] = puVar5;
  FUN_0063f210(param_4 + 0x21,0x104);
  iVar7 = 0;
  param_4[0x62] = 0;
  param_4[0x67] = 0;
  if (0 < param_1) {
    iVar3 = 0;
    do {
      piVar4 = (int *)(param_4[8] + iVar3);
      *piVar4 = iVar7;
      piVar4[1] = 0;
      piVar4[3] = iVar3 + 0x128 + param_4[8];
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + 0x128;
    } while (iVar7 < param_1);
  }
  *(undefined4 *)(param_1 * 0x128 + -0x11c + param_4[8]) = 0;
  if (0 < param_2) {
    iVar7 = 0;
    do {
      puVar5 = (undefined4 *)(param_4[10] + iVar7);
      iVar7 = iVar7 + 0xc;
      param_2 = param_2 + -1;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 1;
    } while (param_2 != 0);
  }
  iVar7 = 0;
  if (0 < param_3) {
    iVar3 = 0;
    do {
      puVar5 = (undefined4 *)(param_4[0xc] + iVar3);
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + 0x10;
      *puVar5 = param_4;
      puVar5[1] = iVar7;
      puVar5[2] = 0;
    } while (iVar7 < param_3);
  }
  return param_4[0xc];
}

