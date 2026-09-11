/* Decompiled from Speed.exe @ 0064c490 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_0064c490(int *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  bVar3 = false;
  do {
    if (DAT_00713c60 != (int *)0x0) {
      piVar7 = DAT_00713c60;
      do {
        iVar2 = *(int *)((int)piVar7 + param_4 + -0x20);
        uVar4 = (uint)*(ushort *)((int)piVar7 + param_5 + -0x20);
        if ((((short)piVar7[-4] == *(short *)(param_2 + 1)) || (bVar3)) && (iVar8 = 0, uVar4 != 0))
        {
          puVar10 = (undefined4 *)(iVar2 + 8);
          do {
            if (*(short *)((int)param_2 + 6) == *(short *)(puVar10 + 1)) {
              pbVar9 = (byte *)*puVar10;
              pbVar5 = (byte *)*param_2;
              do {
                bVar1 = *pbVar5;
                bVar11 = bVar1 < *pbVar9;
                if (bVar1 != *pbVar9) {
LAB_0064c534:
                  iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_0064c539;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar5[1];
                bVar11 = bVar1 < pbVar9[1];
                if (bVar1 != pbVar9[1]) goto LAB_0064c534;
                pbVar5 = pbVar5 + 2;
                pbVar9 = pbVar9 + 2;
              } while (bVar1 != 0);
              iVar6 = 0;
LAB_0064c539:
              if (iVar6 == 0) {
                iVar6 = *(int *)(iVar2 + 0xc + iVar8 * 0x10);
                *param_1 = iVar2 + iVar8 * 0x10;
                param_1[1] = iVar6;
                return 0;
              }
            }
            iVar8 = iVar8 + 1;
            puVar10 = puVar10 + 4;
          } while (iVar8 < (int)uVar4);
        }
        piVar7 = (int *)*piVar7;
      } while (piVar7 != (int *)0x0);
    }
    if (bVar3) {
      return 0xfffffffb;
    }
    bVar3 = true;
  } while( true );
}

