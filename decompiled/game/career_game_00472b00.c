/* Decompiled from Speed.exe @ 00472b00 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 FUN_00472b00(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if (*param_1 != -0x7ffcbfe0) {
    return 0;
  }
  iVar4 = param_1[1];
  piVar3 = param_1 + 2;
  puVar9 = DAT_00779bdc;
  while (piVar3 < (int *)(iVar4 + 8 + (int)param_1)) {
    if ((*piVar3 != 0x34021) && (*piVar3 == 0x39200)) {
      iVar5 = piVar3[1];
      iVar6 = *(int *)((int)piVar3 + iVar5 + 0xc);
      iVar8 = iVar6 + 8 + iVar5 + 8;
      uVar1 = (int)piVar3 + iVar5 + 0x1f;
      iVar7 = *(int *)((int)piVar3 + iVar8 + 4);
      uVar2 = (int)piVar3 + iVar8 + 0x17;
      puVar10 = (undefined4 *)((int)piVar3 + 0x17U & 0xfffffff0);
      *puVar9 = puVar10;
      DAT_00779bdc = puVar10;
      *(short *)(puVar10 + 0xf) =
           (short)((int)piVar3 + iVar7 + (iVar8 - (uVar2 & 0xfffffff0)) + 8 >> 1);
      puVar10[5] = (int)(short)(((int)piVar3 + (iVar6 - (uVar1 & 0xfffffff0)) + 8 + iVar5 + 8) /
                               0x30);
      puVar10[1] = puVar9;
      *puVar10 = &DAT_00779bd8;
      puVar10[0x15] = uVar1 & 0xfffffff0;
      puVar10[0x14] = uVar2 & 0xfffffff0;
      puVar10[2] = FUN_00472f30;
      puVar10[3] = &LAB_00472ee0;
      puVar10[4] = 1;
      piVar3 = (int *)((int)piVar3 + *(int *)((int)piVar3 + iVar8 + 4) + iVar8 + 8);
      puVar9 = DAT_00779bdc;
    }
  }
  DAT_00779bdc = puVar9;
  return 1;
}

