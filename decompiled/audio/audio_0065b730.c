/* Decompiled from Speed.exe @ 0065b730 */
/* Module: Audio */
/* Ghidra DecompileAll */


ulonglong __fastcall
FUN_0065b730(undefined4 param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
            byte *param_5,int param_6,undefined2 *param_7)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined2 *puVar18;
  int iVar19;
  int iVar20;
  
  if (param_4 == (undefined2 *)0x2) {
    iVar7 = (int)param_3 * 2;
    bVar2 = *param_5;
    bVar3 = param_5[1];
    iVar11 = iVar7;
    do {
      iVar8 = *(int *)((uint)bVar3 * iVar7 + param_6 + -4 + iVar11);
      uVar4 = *(uint *)((uint)bVar2 * iVar7 + param_6 + -4 + iVar11);
      *(uint *)(param_7 + iVar11 + -4) = iVar8 << 0x10 | uVar4 & 0xffff;
      *(uint *)(param_7 + iVar11 + -2) =
           CONCAT22((short)((uint)iVar8 >> 0x10),(short)(uVar4 >> 0x10));
      iVar8 = iVar11 + -4;
      bVar5 = 3 < iVar11;
      iVar11 = iVar8;
    } while (iVar8 != 0 && bVar5);
    return CONCAT44(param_2,2);
  }
  if (param_4 == (undefined2 *)0x4) {
    puVar9 = (undefined2 *)(param_6 + (uint)param_5[1] * (int)param_3 * 2);
    puVar6 = (undefined2 *)((uint)param_5[3] * (int)param_3);
    param_2 = param_3;
    if (0 < (int)param_3) {
      iVar7 = (param_6 + (uint)*param_5 * (int)param_3 * 2) - (int)puVar9;
      iVar8 = (param_6 + (uint)param_5[2] * (int)param_3 * 2) - (int)puVar9;
      iVar11 = (param_6 + (int)((uint)param_5[3] * (int)param_3) * 2) - (int)puVar9;
      param_4 = param_3;
      do {
        *param_7 = *(undefined2 *)(iVar7 + (int)puVar9);
        param_7[1] = *puVar9;
        param_7[2] = *(undefined2 *)(iVar8 + (int)puVar9);
        param_7[3] = *(undefined2 *)(iVar11 + (int)puVar9);
        param_7 = param_7 + 4;
        puVar9 = puVar9 + 1;
        param_4 = (undefined2 *)((int)param_4 + -1);
      } while (param_4 != (undefined2 *)0x0);
      return ZEXT48(param_7);
    }
  }
  else {
    puVar6 = param_4;
    if (param_4 == (undefined2 *)0x6) {
      iVar11 = param_6 + (uint)*param_5 * (int)param_3 * 2;
      iVar7 = param_6 + (uint)param_5[1] * (int)param_3 * 2;
      iVar8 = param_6 + (uint)param_5[2] * (int)param_3 * 2;
      iVar1 = param_6 + (uint)param_5[3] * (int)param_3 * 2;
      puVar9 = (undefined2 *)(param_6 + (uint)param_5[4] * (int)param_3 * 2);
      param_2 = (undefined2 *)(param_6 + (uint)param_5[5] * (int)param_3 * 2);
      puVar6 = param_3;
      if (0 < (int)param_3) {
        iVar12 = (int)puVar9 - iVar7;
        iVar13 = (int)param_2 - iVar7;
        puVar10 = (undefined2 *)(iVar7 + 2);
        iVar14 = (int)puVar9 - iVar8;
        iVar15 = (int)param_2 - iVar8;
        iVar16 = (int)puVar9 - iVar1;
        iVar17 = (int)param_2 - iVar1;
        iVar19 = iVar11 - (int)puVar9;
        iVar20 = (int)param_2 - (int)puVar9;
        puVar18 = (undefined2 *)(iVar1 + 6);
        param_2 = (undefined2 *)(iVar8 + 4);
        puVar6 = param_7 + 2;
        param_4 = (undefined2 *)(((int)param_3 - 1U >> 2) + 1);
        do {
          puVar6[-2] = *(undefined2 *)(iVar19 + (int)puVar9);
          puVar6[-1] = puVar10[-1];
          *puVar6 = param_2[-2];
          puVar6[1] = puVar18[-3];
          puVar6[2] = *puVar9;
          puVar6[3] = *(undefined2 *)(iVar20 + (int)puVar9);
          puVar6[4] = *(undefined2 *)((iVar11 - iVar7) + (int)puVar10);
          puVar6[5] = *puVar10;
          puVar6[6] = *(undefined2 *)((iVar8 - iVar7) + (int)puVar10);
          puVar6[7] = *(undefined2 *)((iVar1 - iVar7) + (int)puVar10);
          puVar6[8] = *(undefined2 *)(iVar12 + (int)puVar10);
          puVar6[9] = *(undefined2 *)(iVar13 + (int)puVar10);
          puVar6[10] = *(undefined2 *)((int)param_2 + (iVar11 - iVar8));
          puVar6[0xb] = puVar10[1];
          puVar6[0xc] = *param_2;
          puVar6[0xd] = *(undefined2 *)((int)param_2 + (iVar1 - iVar8));
          puVar6[0xe] = *(undefined2 *)((int)param_2 + iVar14);
          puVar6[0xf] = *(undefined2 *)((int)param_2 + iVar15);
          puVar6[0x10] = *(undefined2 *)((int)puVar18 + (iVar11 - iVar1));
          puVar6[0x11] = puVar10[2];
          puVar6[0x12] = param_2[1];
          puVar6[0x13] = *puVar18;
          puVar6[0x14] = *(undefined2 *)((int)puVar18 + iVar16);
          puVar6[0x15] = *(undefined2 *)((int)puVar18 + iVar17);
          puVar6 = puVar6 + 0x18;
          puVar10 = puVar10 + 4;
          puVar9 = puVar9 + 4;
          param_2 = param_2 + 4;
          puVar18 = puVar18 + 4;
          param_4 = (undefined2 *)((int)param_4 + -1);
        } while (param_4 != (undefined2 *)0x0);
      }
    }
  }
  return CONCAT44(param_2,puVar6);
}

