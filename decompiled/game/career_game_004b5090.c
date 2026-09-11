/* Decompiled from Speed.exe @ 004b5090 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b5090(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  float10 fVar7;
  undefined1 local_e80 [1092];
  int local_a3c;
  int local_a38;
  float local_28;
  
  iVar2 = FUN_004ab510();
  DAT_0078a320 = 1;
  DAT_0078a350 = 0;
  DAT_0078a324 = 0;
  DAT_0078a300 = *(undefined4 *)(iVar2 + 0x18);
  DAT_0078a334 = '\x02';
  DAT_0078a335 = 1;
  _DAT_0078a304 = 0x3f000000;
  DAT_0078a400 = (uint)*(byte *)(iVar2 + 0x1f);
  DAT_0078a3fc = *(undefined4 *)(iVar2 + 0x14);
  _DAT_0078a330 = 0;
  DAT_0078a336 = DAT_0075896c;
  DAT_0078a337 = *(undefined1 *)(iVar2 + 0x20);
  DAT_0078a31c = 0;
  DAT_0078a368 = 0;
  DAT_0078a2f0 = *(int *)(iVar2 + 8);
  if (0 < DAT_0073616c) {
    iVar4 = 0;
    iVar5 = DAT_00736168;
    do {
      if (*(short *)(iVar5 + 0x6c) == DAT_0078a2f0) goto LAB_004b515b;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0xfc;
    } while (iVar4 < DAT_0073616c);
  }
  iVar5 = 0;
LAB_004b515b:
  DAT_0078a318 = (int)*(char *)(iVar5 + 0x69);
  DAT_0078a2fc = *(undefined4 *)(iVar2 + 0xc);
  DAT_0078a30c = 1;
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
  FUN_00417600();
  FUN_004ac0f0(local_e80);
  pcVar6 = "DUMMY_SKIN1";
  local_a3c = -1;
  uVar3 = 0x44;
  do {
    local_a3c = local_a3c * 0x21 + uVar3;
    pbVar1 = (byte *)(pcVar6 + 1);
    uVar3 = (uint)*pbVar1;
    pcVar6 = pcVar6 + 1;
  } while (*pbVar1 != 0);
  pcVar6 = "DUMMY_WHEEL1";
  local_a38 = -1;
  uVar3 = 0x44;
  do {
    local_a38 = local_a38 * 0x21 + uVar3;
    pbVar1 = (byte *)(pcVar6 + 1);
    uVar3 = (uint)*pbVar1;
    pcVar6 = pcVar6 + 1;
  } while (*pbVar1 != 0);
  FUN_005809c0(0,1,local_e80,&DAT_007588c4,0xfffffffe,0,(int)DAT_0078a334);
  fVar7 = (float10)FUN_005a05b0();
  local_28 = (float)fVar7;
  FUN_004322a0(&DAT_0078a2f0);
  FUN_004b3ac0();
  return;
}

