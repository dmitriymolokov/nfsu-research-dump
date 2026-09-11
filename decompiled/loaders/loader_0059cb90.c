/* Decompiled from Speed.exe @ 0059cb90 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0059cb90(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int unaff_EDI;
  
  if (*(ushort *)(unaff_EDI + 0x1e) != 0) {
    puVar3 = *(undefined4 **)(unaff_EDI + 0x24);
    uVar7 = (uint)*(ushort *)(unaff_EDI + 0x1e);
    iVar4 = *(int *)(unaff_EDI + 4);
    if (iVar4 == 0) {
      uVar5 = puVar3[uVar7 * 4 + -1];
      uVar2 = puVar3[uVar7 * 4 + -2];
      uVar6 = puVar3[uVar7 * 4 + -4];
      puVar1 = puVar3 + uVar7 * 4;
      puVar3[-3] = puVar3[uVar7 * 4 + -3];
      puVar3[-1] = uVar5;
      puVar3[-4] = uVar6;
      puVar3[-2] = uVar2;
      uVar6 = puVar3[3];
      uVar2 = puVar3[1];
      uVar5 = puVar3[2];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      puVar1[3] = uVar6;
      puVar1[2] = uVar5;
      uVar2 = puVar3[5];
      uVar6 = puVar3[4];
      uVar5 = puVar3[6];
      puVar1[7] = puVar3[7];
      puVar1[4] = uVar6;
      puVar1[5] = uVar2;
      puVar1[6] = uVar5;
      if (*(float *)(unaff_EDI + 0x14) != DAT_006cc7a4) {
        puVar3[-1] = (float)puVar1[-1] - *(float *)(unaff_EDI + 0x14);
        puVar1[3] = *(float *)(unaff_EDI + 0x14) + (float)puVar3[3];
        puVar1[7] = (float)puVar3[7] + *(float *)(unaff_EDI + 0x14);
      }
    }
    else if (iVar4 == 1) {
      puVar3[-4] = *puVar3;
      puVar3[-3] = puVar3[1];
      puVar3[-1] = puVar3[3];
      puVar3[-2] = puVar3[2];
      uVar5 = puVar3[uVar7 * 4 + -4];
      uVar2 = puVar3[uVar7 * 4 + -2];
      puVar1 = puVar3 + uVar7 * 4;
      puVar1[1] = puVar3[uVar7 * 4 + -3];
      *puVar1 = uVar5;
      puVar1[2] = uVar2;
      puVar1[3] = puVar1[-1];
      if (*(float *)(unaff_EDI + 0x14) != DAT_006cc7a4) {
        puVar3[-1] = -(float)puVar3[7];
        puVar1[3] = (*(float *)(unaff_EDI + 0x14) + *(float *)(unaff_EDI + 0x14)) -
                    (float)puVar1[-1];
        return;
      }
    }
    else if (iVar4 == 2) {
      FUN_00567500(0xbf800000);
      FUN_00567500(0x3f800000);
      if (*(float *)(unaff_EDI + 0x14) != DAT_006cc7a4) {
        puVar3[-1] = -(float)puVar3[7];
        puVar3[uVar7 * 4 + 3] =
             (*(float *)(unaff_EDI + 0x14) + *(float *)(unaff_EDI + 0x14)) -
             (float)puVar3[uVar7 * 4 + -1];
        return;
      }
    }
  }
  return;
}

