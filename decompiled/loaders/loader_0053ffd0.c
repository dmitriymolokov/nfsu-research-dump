/* Decompiled from Speed.exe @ 0053ffd0 */
/* Module: Loader */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0053ffd0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  
  if (*param_1 != -0x7fecbff0) {
    return 0;
  }
  piVar10 = param_1 + 2;
  piVar2 = (int *)((int)param_1 + param_1[1] + 8);
  uVar9 = 0;
  bVar3 = true;
  if (piVar10 < piVar2) {
    do {
      iVar11 = *piVar10;
      if (iVar11 == 0x134011) {
        uVar9 = (int)piVar10 + 0x17U & 0xfffffff0;
        iVar11 = uVar9 + 0x88;
        *(int *)iVar11 = iVar11;
        *(int *)(uVar9 + 0x8c) = iVar11;
      }
      else if (iVar11 == 0x134012) {
        *(int **)(uVar9 + 0x2c) = piVar10 + 2;
      }
      else if (iVar11 == 0x134013) {
        *(int **)(uVar9 + 0x3c) = piVar10 + 2;
      }
      else if (iVar11 == 0x134017) {
        *(int **)(uVar9 + 0x84) = piVar10 + 2;
        DAT_0072fa0c = DAT_0072fa0c + piVar10[1];
      }
      else if (iVar11 == 0x134018) {
        **(int **)(uVar9 + 0x84) = (int)(piVar10 + 2);
        *(short *)(*(int *)(uVar9 + 0x84) + 8) = (short)((uint)piVar10[1] >> 3);
        DAT_0072fa0c = DAT_0072fa0c + piVar10[1];
      }
      else if (iVar11 == 0x134019) {
        *(int **)(*(int *)(uVar9 + 0x84) + 4) = piVar10 + 2;
        *(short *)(*(int *)(uVar9 + 0x84) + 10) = (short)((uint)piVar10[1] / 0xc);
        DAT_0072fa0c = DAT_0072fa0c + piVar10[1];
      }
      else if (iVar11 == 0x13401b) {
        *(int **)(uVar9 + 0x90) = piVar10 + 2;
        _DAT_0072fa10 = _DAT_0072fa10 + piVar10[1];
      }
      else if (iVar11 == 0x13401a) {
        *(uint *)(uVar9 + 0x80) = (int)piVar10 + 0x17U & 0xfffffff0;
        *(char *)(uVar9 + 0x1b) =
             (char)(((piVar10[1] - ((int)piVar10 + 0x17U & 0xfffffff0)) + 8 + (int)piVar10) / 0x50);
      }
      else if ((iVar11 == -0x7fecbf00) && (iVar11 = FUN_0040c690(uVar9), iVar11 == 0)) {
        bVar3 = false;
      }
      piVar10 = (int *)((int)piVar10 + piVar10[1] + 8);
    } while (piVar10 < piVar2);
    if (uVar9 != 0) {
      *(undefined1 *)(uVar9 + 0xd) = 1;
    }
  }
  FUN_0053f9b0();
  iVar11 = (int)*(char *)(uVar9 + 0x1a);
  piVar10 = *(int **)(uVar9 + 0x3c);
  if (0 < iVar11) {
    puVar5 = (undefined *)FUN_0040cb70();
    puVar4 = PTR_DAT_006f3df0;
    do {
      if (DAT_00743c18 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = (undefined *)(DAT_00743c18 + -4);
      }
      puVar7 = puVar4;
      if (puVar6 != puVar5) {
        do {
          puVar7 = puVar6;
          if (*(int *)(puVar6 + 0xc) == *piVar10) break;
          if (*(int *)(puVar6 + 4) == 0) {
            puVar6 = (undefined *)0x0;
          }
          else {
            puVar6 = (undefined *)(*(int *)(puVar6 + 4) + -4);
          }
          puVar7 = puVar4;
        } while (puVar6 != puVar5);
      }
      piVar10[1] = (int)puVar7;
      piVar10 = piVar10 + 2;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  if (((*(byte *)(uVar9 + 0xe) & 0x10) == 0) && (iVar11 = FUN_00540680(), iVar11 != 0)) {
    *(ushort *)(uVar9 + 0xe) = *(ushort *)(uVar9 + 0xe) | 0x80;
    *(ushort *)(iVar11 + 0xe) = *(ushort *)(iVar11 + 0xe) | 0x80;
    if (DAT_00735554 == 0) {
      *(ushort *)(uVar9 + 0xe) = *(ushort *)(uVar9 + 0xe) | 0x100;
      *(ushort *)(iVar11 + 0xe) = *(ushort *)(iVar11 + 0xe) | 0x100;
    }
  }
  if (param_2 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = FUN_0053e400(*(undefined4 *)(uVar9 + 0x10),*(undefined4 *)(param_2 + 0x78),0);
  }
  if (bVar3) {
    if (iVar11 != 0) {
      *(uint *)(iVar11 + 4) = uVar9;
    }
    puVar8 = DAT_00743c5c;
    puVar1 = (undefined4 *)(uVar9 + 4);
    *DAT_00743c5c = puVar1;
    DAT_00743c5c = puVar1;
    *puVar1 = &DAT_00743c58;
  }
  else {
    if (iVar11 != 0) {
      *(undefined4 *)(iVar11 + 4) = 0;
    }
    puVar8 = DAT_00743c6c;
    puVar1 = (undefined4 *)(uVar9 + 4);
    *DAT_00743c6c = puVar1;
    DAT_00743c6c = puVar1;
    *puVar1 = &DAT_00743c68;
  }
  *(undefined4 **)(uVar9 + 8) = puVar8;
  DAT_0072fa04 = DAT_0072fa04 + 1;
  DAT_0072fa08 = DAT_0072fa08 + param_1[1];
  DAT_00735568 = 1;
  return uVar9;
}

