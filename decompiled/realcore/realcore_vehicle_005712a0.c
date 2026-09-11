/* Decompiled from Speed.exe @ 005712a0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005712a0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  float fVar6;
  uint uVar7;
  char *pcVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  iVar4 = *(int *)(param_2 + 0x4d4);
  puVar1 = (undefined4 *)(iVar4 + 0x19ac);
  pcVar8 = (char *)(iVar4 + 0x19b4);
  iVar12 = (int)"Car Lights" - (int)pcVar8;
  iVar11 = 0x1f;
  do {
    cVar3 = pcVar8[iVar12];
    iVar11 = iVar11 + -1;
    *pcVar8 = cVar3;
    uVar7 = DAT_006f1d40;
    if (cVar3 == '\0') break;
    pcVar8 = pcVar8 + 1;
  } while (iVar11 != 0);
  uVar13 = 0;
  *(undefined1 *)(iVar4 + 0x19d3) = 0;
  *(undefined4 *)(iVar4 + 0x19d4) = 1;
  if (uVar7 != 0) {
    pfVar9 = (float *)FUN_004081f0();
    pfVar10 = (float *)FUN_0041f5e0();
    do {
      piVar2 = (int *)(uVar13 * 0x68 + 0x19e0 + iVar4);
      puVar5 = *(undefined4 **)(iVar4 + 0x19dc);
      *puVar5 = piVar2;
      *(int **)(iVar4 + 0x19dc) = piVar2;
      piVar2[1] = (int)puVar5;
      *piVar2 = iVar4 + 0x19d8;
      piVar2[2] = 0;
      *(undefined1 *)(piVar2 + 3) = 3;
      *(undefined1 *)((int)piVar2 + 0xd) = 2;
      *(undefined1 *)((int)piVar2 + 0xe) = 0;
      *(undefined1 *)((int)piVar2 + 0xf) = 1;
      piVar2[4] = 0;
      piVar2[5] = (&DAT_006f1d34)[uVar13];
      piVar2[9] = (&DAT_006f1d0c)[uVar13];
      fVar6 = _DAT_006cc8a8;
      if (uVar13 == 0) {
        fVar6 = _DAT_006cc7bc;
      }
      piVar2[10] = (int)(fVar6 * *pfVar9);
      fVar6 = _DAT_006cc8a8;
      if (uVar13 == 0) {
        fVar6 = _DAT_006cc7bc;
      }
      piVar2[0xb] = (int)(fVar6 * pfVar9[1]);
      fVar6 = _DAT_006cc8a8;
      if (uVar13 == 0) {
        fVar6 = _DAT_006cc7bc;
      }
      uVar13 = uVar13 + 1;
      piVar2[0xc] = (int)(fVar6 * pfVar9[2]);
      piVar2[6] = (int)(*(float *)(uVar13 * 4 + 0x6f1d28) * (float)piVar2[10] + *pfVar10);
      piVar2[7] = (int)(*(float *)(uVar13 * 4 + 0x6f1d28) * (float)piVar2[0xb] + pfVar10[1]);
      piVar2[8] = (int)(*(float *)(uVar13 * 4 + 0x6f1d28) * (float)piVar2[0xc] + pfVar10[2]);
      piVar2[0xd] = (&DAT_006f1d10)[uVar13];
      piVar2[0xe] = (&DAT_0073464c)[uVar13];
      piVar2[0xf] = (int)(float)*(ushort *)((int)&DAT_006f1d38 + uVar13 * 2 + 2);
      piVar2[0x10] = *(int *)(uVar13 * 4 + 0x6f1d20);
    } while (uVar13 < DAT_006f1d40);
  }
  if (puVar1 != (undefined4 *)0x0) {
    *DAT_00743c14 = puVar1;
    puVar5 = puVar1;
    *(undefined4 **)(iVar4 + 0x19b0) = DAT_00743c14;
    DAT_00743c14 = puVar5;
    *puVar1 = &DAT_00743c10;
  }
  return;
}

