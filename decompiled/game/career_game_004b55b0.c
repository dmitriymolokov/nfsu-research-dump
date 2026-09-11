/* Decompiled from Speed.exe @ 004b55b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b55b0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  undefined1 *local_e84;
  undefined1 local_e80 [3672];
  float local_28;
  
  piVar1 = (int *)FUN_004ab510();
  _DAT_007000cc = 0x3f000000;
  DAT_0078a344 = 1;
  DAT_0078a320 = DAT_00748f70;
  if (DAT_00748f70 == 1) {
    DAT_0078a324 = *piVar1 + -1;
  }
  else {
    DAT_0078a324 = 0;
  }
  DAT_0078a350 = 0;
  DAT_0078a300 = piVar1[6];
  DAT_0078a334 = 4;
  DAT_0078a335 = 3;
  _DAT_0078a304 = 0x3f000000;
  DAT_0078a400 = (uint)*(byte *)((int)piVar1 + 0x1f);
  DAT_0078a3fc = piVar1[5];
  _DAT_0078a330 = 0;
  DAT_0078a336 = DAT_0075896c;
  DAT_0078a337 = 0;
  DAT_0078a340 = piVar1[8];
  DAT_0078a3fa = DAT_00758951;
  DAT_0078a3f5 = (undefined1)DAT_007588f0;
  DAT_0078a3f4 = DAT_007588d4;
  DAT_0078a3f6 = 6;
  DAT_0078a3f7 = 6;
  DAT_007361ac = DAT_00758968;
  DAT_0078a387 = 1;
  _DAT_0078a3b8 = (float)piVar1[9];
  DAT_0078a386 = (undefined1)DAT_00758964;
  DAT_0078a388 = (&DAT_00758938)[DAT_00758948 * 4];
  DAT_0078a38a = DAT_007588e4;
  DAT_0078a385 = DAT_00758970;
  if (DAT_007588d6 == '\0') {
    uVar3 = DAT_0078a394 & 0xffffffbf;
  }
  else {
    uVar3 = DAT_0078a394 | 0x40;
  }
  if (DAT_007588d8 == '\0') {
    uVar3 = uVar3 & 0xfffffeef;
  }
  else {
    uVar3 = uVar3 & 0xfffffeff | 0x10;
  }
  if (DAT_007588dc == '\0') {
    DAT_0078a394 = uVar3 ^ 0x400;
  }
  else {
    DAT_0078a394 = uVar3 | 0x400;
  }
  DAT_0078a392 = DAT_00758940;
  DAT_0078a390 = DAT_00758938;
  DAT_0078a391 = DAT_0075893c;
  DAT_0078a393 = DAT_00758944;
  if (DAT_00777b4c == 4) {
    DAT_0078a3be = (undefined1)DAT_00758964;
    DAT_0078a3c0 = (&DAT_00758938)[DAT_0075894c * 4];
    DAT_0078a3c8 = DAT_00758938;
    DAT_0078a3cb = DAT_00758944;
    DAT_0078a3bd = DAT_00758978;
    DAT_0078a3c9 = DAT_0075893c;
    DAT_0078a3bf = 1;
    DAT_0078a3c2 = DAT_007588e8;
    DAT_0078a3ca = DAT_00758940;
    if (DAT_007588d7 == '\0') {
      uVar3 = DAT_0078a3cc & 0xffffffbf;
    }
    else {
      uVar3 = DAT_0078a3cc | 0x40;
    }
    if (DAT_007588d9 == '\0') {
      uVar3 = uVar3 & 0xfffffeef;
    }
    else {
      uVar3 = uVar3 & 0xfffffeff | 0x10;
    }
    if (DAT_007588dd == '\0') {
      DAT_0078a3cc = uVar3 ^ 0x400;
    }
    else {
      DAT_0078a3cc = uVar3 | 0x400;
    }
  }
  DAT_0078a2f0 = piVar1[2];
  DAT_0078a2fc = piVar1[3];
  iVar2 = 0;
  iVar4 = DAT_00736168;
  if (0 < DAT_0073616c) {
    do {
      if (*(short *)(iVar4 + 0x6c) == DAT_0078a2f0) goto LAB_004b585b;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0xfc;
    } while (iVar2 < DAT_0073616c);
  }
  iVar4 = 0;
LAB_004b585b:
  DAT_0078a318 = (int)*(char *)(iVar4 + 0x69);
  iVar2 = 0;
  iVar4 = 0;
  DAT_0078a30c = 1;
  DAT_0078a33c = 0;
  DAT_0078a41c = 0;
  _DAT_0078a380 = 0x3f800000;
  if (0 < DAT_00748f70) {
    do {
      (&DAT_0078a348)[iVar4] = (&DAT_00748f78)[iVar4];
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_0078a320);
  }
  DAT_0078a40c = 2;
  if (0 < DAT_0078a320) {
    local_e84 = &DAT_007588c4;
    do {
      FUN_00417600();
      FUN_004ac0f0(local_e80);
      FUN_005809c0(iVar2,1,local_e80,local_e84,0xfffffffe,0,(int)(char)(&DAT_0078a334)[iVar2]);
      fVar5 = (float10)FUN_005a05b0();
      local_28 = (float)fVar5;
      FUN_004322a0(&DAT_0078a2f0);
      if (DAT_0078a3fc == 0) {
        DAT_0078a40c = DAT_0078a3fc;
      }
      else if (DAT_0078a3fc == 1) {
        DAT_0078a40c = DAT_0078a3fc;
      }
      iVar2 = iVar2 + 1;
      local_e84 = local_e84 + 0xf944;
    } while (iVar2 < DAT_0078a320);
  }
  FUN_004b4040(DAT_0078a324,0);
  FUN_004b3ac0();
  FUN_004b4610();
  return;
}

