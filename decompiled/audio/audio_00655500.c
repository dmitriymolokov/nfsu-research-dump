/* Decompiled from Speed.exe @ 00655500 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00655500(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  short *psVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  if (DAT_00713ee4 == '\0') {
    return 0xfffffff6;
  }
  iVar1 = (&DAT_007163dc)[param_1];
  iVar3 = 0;
  if (*(char *)(iVar1 + 0x62) != '\0') {
    psVar5 = (short *)(iVar1 + 0x34);
    do {
      if (*(short *)(iVar1 + 0x40) + -1 <= (int)*psVar5) {
        return 0xfffffff3;
      }
      iVar3 = iVar3 + 1;
      psVar5 = psVar5 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(iVar1 + 0x62));
  }
  iVar3 = *(short *)(iVar1 + 0x46) * 0x20;
  puVar7 = (undefined4 *)(iVar3 + 0x7c + iVar1);
  uVar6 = *(uint *)(iVar3 + 0x80 + iVar1) ^ (puVar7[1] ^ *(uint *)(param_2 + 4)) & 0x7fffffff;
  puVar7[1] = uVar6;
  puVar7[1] = *(uint *)(param_2 + 4) & 0x80000000 | uVar6 & 0x7fffffff;
  *puVar7 = *(undefined4 *)(iVar1 + 4);
  iVar3 = 0;
  if (*(char *)(iVar1 + 0x62) != '\0') {
    puVar7 = puVar7 + 2;
    puVar4 = (undefined4 *)(param_2 + 0xc);
    psVar5 = (short *)(iVar1 + 0x34);
    do {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
      *psVar5 = *psVar5 + 1;
      iVar3 = iVar3 + 1;
      psVar5 = psVar5 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(iVar1 + 0x62));
  }
  *(uint *)(iVar1 + 0x48) = (*(uint *)(param_2 + 4) & 0x7fffffff) + *(int *)(iVar1 + 0x48);
  uVar2 = *(undefined4 *)(iVar1 + 4);
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  *(short *)(iVar1 + 0x46) = *(short *)(iVar1 + 0x46) + 1;
  if (*(short *)(iVar1 + 0x40) <= *(short *)(iVar1 + 0x46)) {
    *(undefined2 *)(iVar1 + 0x46) = 0;
  }
  return uVar2;
}

