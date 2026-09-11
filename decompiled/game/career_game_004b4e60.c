/* Decompiled from Speed.exe @ 004b4e60 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b4e60(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined1 *local_e84;
  undefined1 local_e80 [3672];
  float local_28;
  
  piVar1 = (int *)FUN_004ab510();
  DAT_0078a320 = DAT_00748f70;
  if (DAT_00748f70 == 1) {
    DAT_0078a324 = *piVar1 + -1;
  }
  else {
    DAT_0078a324 = 0;
  }
  iVar2 = 0;
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
  DAT_0078a31c = 3;
  DAT_0078a2f0 = piVar1[2];
  iVar3 = DAT_00736168;
  if (0 < DAT_0073616c) {
    do {
      if (*(short *)(iVar3 + 0x6c) == DAT_0078a2f0) goto LAB_004b4f35;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xfc;
    } while (iVar2 < DAT_0073616c);
  }
  iVar3 = 0;
LAB_004b4f35:
  DAT_0078a318 = (int)*(char *)(iVar3 + 0x69);
  DAT_0078a2fc = piVar1[3];
  iVar3 = 0;
  DAT_0078a30c = 3;
  DAT_0078a33c = 0;
  _DAT_0078a380 = 0x3f800000;
  DAT_0078a40c = 2;
  DAT_0078a41c = 0;
  FUN_004b47a0();
  if (DAT_00777b4c == 4) {
    FUN_004b47a0();
  }
  iVar2 = 0;
  if (0 < DAT_0078a320) {
    do {
      (&DAT_0078a348)[iVar2] = (&DAT_00748f78)[iVar2];
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_0078a320);
  }
  if (0 < DAT_0078a320) {
    local_e84 = &DAT_007588c4;
    do {
      FUN_00417600();
      FUN_004ac0f0(local_e80);
      FUN_005809c0(iVar3,1,local_e80,local_e84,0xfffffffe,0,(int)(char)(&DAT_0078a334)[iVar3]);
      fVar4 = (float10)FUN_005a05b0();
      local_28 = (float)fVar4;
      FUN_004322a0(&DAT_0078a2f0);
      iVar3 = iVar3 + 1;
      local_e84 = local_e84 + 0xf944;
    } while (iVar3 < DAT_0078a320);
  }
  FUN_004b4040(DAT_0078a324,0);
  FUN_004b3ac0();
  return;
}

