/* Decompiled from Speed.exe @ 004ed930 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004ed930(int param_1)

{
  uint *puVar1;
  ushort uVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  undefined2 *puVar6;
  ushort *puVar7;
  int *piVar8;
  ushort uVar9;
  int iVar10;
  short *psVar11;
  short local_840 [32];
  undefined4 local_800;
  
  iVar10 = 0;
  piVar8 = (int *)(param_1 + 0x5c);
  do {
    cVar4 = FUN_004eddd0();
    if (DAT_006ee6f0 == 7) {
      psVar11 = local_840;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        psVar11[0] = 0;
        psVar11[1] = 0;
        psVar11 = psVar11 + 2;
      }
      iVar5 = *piVar8;
      local_840[0] = (short)cVar4;
      FUN_00504080();
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x400000;
    }
    else {
      FUN_004f68a0(&DAT_006c7408,(int)cVar4);
    }
    iVar10 = iVar10 + 1;
    piVar8 = piVar8 + 1;
  } while (iVar10 < 0x2f);
  iVar10 = *(int *)(param_1 + 0x54);
  FUN_0059ff40(&local_800,0x800);
  iVar5 = 0;
  uVar9 = (ushort)local_800;
  uVar2 = uVar9;
  while (uVar2 != 0) {
    iVar5 = iVar5 + 1;
    uVar2 = *(ushort *)((int)&local_800 + iVar5 * 2);
  }
  if (*(uint *)(iVar10 + 100) < iVar5 + 1U) {
    FUN_005040e0();
  }
  puVar6 = *(undefined2 **)(iVar10 + 0x60);
  puVar7 = (ushort *)&local_800;
  if (puVar6 != (undefined2 *)0x0) {
    while (uVar9 != 0) {
      *puVar6 = (short)local_800;
      puVar7 = puVar7 + 1;
      uVar9 = *puVar7;
      local_800 = (uint)uVar9;
      puVar6 = puVar6 + 1;
    }
    *puVar6 = 0;
  }
  *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) | 0x400000;
  puVar1 = (uint *)(*(int *)(param_1 + 0x54) + 0x1c);
  *puVar1 = *puVar1 | 2;
  pcVar3 = *(char **)(param_1 + 0x1fc);
  if (*(int *)(param_1 + 0x20c) == 2) {
    iVar10 = 0;
    if (pcVar3 != (char *)0x0) {
      cVar4 = *pcVar3;
      while (cVar4 != '\0') {
        iVar5 = iVar10 + 1;
        iVar10 = iVar10 + 1;
        cVar4 = pcVar3[iVar5];
      }
    }
    iVar5 = 0;
    if (0 < iVar10) {
      do {
        if (iVar5 == 0x3f) break;
        *(undefined1 *)((int)local_840 + iVar5) = 0x2a;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar10);
    }
    *(undefined1 *)((int)local_840 + iVar5) = 0;
  }
  iVar10 = *(int *)(param_1 + 0x54);
  FUN_0059ff40(&local_800,0x800);
  FUN_00504080();
  *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) | 0x400000;
  return;
}

