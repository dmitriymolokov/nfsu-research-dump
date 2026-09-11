/* Decompiled from Speed.exe @ 004b59b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b59b0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined1 *local_e84;
  undefined1 local_e80 [3672];
  float local_28;
  
  piVar2 = (int *)FUN_004ab510();
  DAT_0078a320 = DAT_00748f70;
  if (DAT_00748f70 == 1) {
    DAT_0078a324 = *piVar2 + -1;
  }
  else {
    DAT_0078a324 = 0;
  }
  DAT_0078a350 = 0;
  DAT_0078a300 = 0;
  DAT_0078a334 = 1;
  DAT_0078a335 = 2;
  _DAT_0078a304 = 0x3f000000;
  DAT_0078a400 = (uint)*(byte *)((int)piVar2 + 0x1f);
  DAT_0078a3fc = piVar2[5];
  _DAT_0078a330 = 0;
  DAT_0078a336 = DAT_0075896c;
  DAT_0078a337 = 0;
  DAT_0078a31c = piVar2[4];
  DAT_0078a2f0 = piVar2[2];
  iVar3 = 0;
  iVar4 = DAT_00736168;
  if (0 < DAT_0073616c) {
    do {
      if (*(short *)(iVar4 + 0x6c) == DAT_0078a2f0) goto LAB_004b5a8b;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xfc;
    } while (iVar3 < DAT_0073616c);
  }
  iVar4 = 0;
LAB_004b5a8b:
  iVar3 = 0;
  DAT_0078a318 = (int)*(char *)(iVar4 + 0x69);
  DAT_0078a2fc = piVar2[3];
  DAT_0078a30c = 1;
  DAT_0078a33c = 0;
  DAT_0078a41c = 0;
  DAT_0078a345 = 1;
  _DAT_0078a380 = 0x3f800000;
  DAT_0078a40c = 2;
  FUN_004b47a0();
  if (DAT_00777b4c == 4) {
    FUN_004b47a0();
  }
  iVar4 = 0;
  if (0 < DAT_0078a320) {
    do {
      (&DAT_0078a348)[iVar4] = (&DAT_00748f78)[iVar4];
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_0078a320);
  }
  if (0 < DAT_0078a320) {
    local_e84 = &DAT_007588c4;
    do {
      FUN_00417600();
      FUN_004ac0f0(local_e80);
      FUN_005809c0(iVar3,1,local_e80,local_e84,0xfffffffe,0,(int)(char)(&DAT_0078a334)[iVar3]);
      fVar5 = (float10)FUN_005a05b0();
      local_28 = (float)fVar5;
      FUN_004322a0(&DAT_0078a2f0);
      iVar3 = iVar3 + 1;
      local_e84 = local_e84 + 0xf944;
    } while (iVar3 < DAT_0078a320);
  }
  cVar1 = FUN_0043a2e0();
  if (cVar1 == '\0') {
    FUN_0043de90(0);
  }
  FUN_004b4610();
  return;
}

