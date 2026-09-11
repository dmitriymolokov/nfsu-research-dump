/* spd-match: far pct=2.56 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00413310 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void  FUN_00413310(int param_1,int *param_2)

{
  byte *pbVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  char *pcVar14;
  bool bVar15;
  byte bVar7;
  
  iVar4 = DAT_00736348;
  bVar15 = DAT_00736348 == 0;
  *param_2 = (int)&DAT_0078a47c;
  DAT_0073634c = (int)param_2;
  if (bVar15) {
    DAT_00736348 = FUN_00638c30((int)*(short *)(param_1 + 4),(int)*(short *)(param_1 + 6),0x20,0,0,
                                0x400,0,0x40);
    FUN_006486e2();
    iVar4 = DAT_00736348;
  }
  if ((*(uint *)(iVar4 + 0xc) & 0x1000) == 0) {
    iVar8 = iVar4 + 0x10;
  }
  else {
    iVar8 = *(int *)(iVar4 + 0x10) + iVar4;
  }
  sVar2 = *(short *)(iVar4 + 4);
  iVar11 = (int)sVar2;
  sVar3 = *(short *)(iVar4 + 6);
  iVar4 = (int)sVar3;
  bVar5 = 0;
  if (1 < iVar11) {
    bVar5 = 0;
    do {
      bVar5 = bVar5 + 1;
    } while (1 << (bVar5 & 0x1f) < iVar11);
  }
  bVar7 = 0;
  bVar6 = 0;
  if (1 < iVar4) {
    do {
      bVar6 = bVar7 + 1;
      bVar7 = bVar6;
    } while (1 << (bVar6 & 0x1f) < iVar4);
  }
  piVar12 = (int *)"MovieTexture";
  piVar13 = param_2 + 3;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar13 = *piVar12;
    piVar12 = piVar12 + 1;
    piVar13 = piVar13 + 1;
  }
  iVar4 = iVar4 * iVar11 * 4;
  *(undefined1 *)((int)param_2 + 0x23) = 0;
  pcVar14 = "MovieTexture";
  iVar11 = -1;
  uVar10 = 0x4d;
  do {
    iVar11 = iVar11 * 0x21 + uVar10;
    pbVar1 = (byte *)(pcVar14 + 1);
    uVar10 = (uint)*pbVar1;
    pcVar14 = pcVar14 + 1;
  } while (*pbVar1 != 0);
  param_2[0x10] = iVar4;
  param_2[0xe] = iVar4;
  *(short *)(param_2 + 0x11) = sVar2;
  *(byte *)(param_2 + 0x12) = bVar5;
  *(short *)((int)param_2 + 0x46) = sVar3;
  *(undefined2 *)((int)param_2 + 0x62) = 0x100;
  *(undefined2 *)(param_2 + 0x19) = 0x100;
  iVar4 = *param_2;
  param_2[9] = iVar11;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xf] = 0;
  *(undefined1 *)((int)param_2 + 0x4a) = 0x20;
  *(undefined1 *)((int)param_2 + 0x4b) = 0;
  *(undefined2 *)(param_2 + 0x13) = 0;
  *(undefined1 *)((int)param_2 + 0x4e) = 1;
  *(byte *)((int)param_2 + 0x49) = bVar6;
  *(undefined1 *)(param_2 + 0x15) = 0;
  *(undefined1 *)((int)param_2 + 0x55) = 0;
  *(undefined1 *)((int)param_2 + 0x56) = 0;
  *(undefined1 *)((int)param_2 + 0x51) = 0;
  *(undefined1 *)((int)param_2 + 0x4f) = 0;
  *(undefined1 *)((int)param_2 + 0x57) = 0;
  *(undefined1 *)((int)param_2 + 0x52) = 0;
  *(undefined2 *)((int)param_2 + 0x5e) = 0;
  *(undefined2 *)(param_2 + 0x18) = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = (int)param_2;
  param_2[0x1c] = iVar8;
  param_2[0x1d] = 0;
  param_2[0x1e] = 1;
  *(undefined4 *)(iVar4 + 0x14) = 0x15;
  *(undefined4 *)(iVar4 + 8) = 0;
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(undefined4 *)(iVar4 + 0x10) = 0;
  FUN_0063f7c0();
  FUN_0063fc80();
  FUN_00407db0();
  return;
}

