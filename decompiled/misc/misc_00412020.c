/* Decompiled from Speed.exe @ 00412020 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00412020(undefined4 param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int unaff_ESI;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  
  iVar6 = 0;
  FUN_0063f190(unaff_ESI + 4);
  iVar5 = *(int *)(unaff_ESI + 0x78);
  bVar8 = true;
  if (iVar5 == 0) {
LAB_00412092:
    *(undefined4 *)(unaff_ESI + 0x48) = 0;
  }
  else {
    if (*(int *)(iVar5 + 4) != 1) {
      if (*(int *)(iVar5 + 0xc) == 0) goto LAB_00412092;
      *(int *)(unaff_ESI + 0x78) = *(int *)(iVar5 + 0xc);
    }
    iVar6 = *(int *)(unaff_ESI + 0x78);
    bVar8 = false;
    *(undefined4 *)(iVar6 + 0x124) = *(undefined4 *)(unaff_ESI + 0x6c);
    *(undefined4 *)(iVar6 + 4) = 2;
  }
  FUN_0063f1a0(unaff_ESI + 4);
  if (!bVar8) {
    *(undefined4 *)(unaff_ESI + 0x70) = *(undefined4 *)(unaff_ESI + 0x6c);
    if (*(int *)(iVar6 + 0x10) == 1) {
      *(undefined4 *)(unaff_ESI + 0x18c) = 0;
    }
    else {
      pbVar3 = (byte *)(iVar6 + 0x14);
      pbVar1 = (byte *)(unaff_ESI + 0x84);
      *(undefined4 *)(unaff_ESI + 0x18c) = *(undefined4 *)(iVar6 + 0x11c);
      pbVar4 = pbVar3;
      pbVar7 = pbVar1;
      do {
        bVar2 = *pbVar4;
        bVar8 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_004120d8:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_004120dd;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar8 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_004120d8;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_004120dd:
      if (iVar5 != 0) {
        iVar5 = (int)pbVar1 - (int)pbVar3;
        do {
          bVar2 = *pbVar3;
          pbVar3[iVar5] = bVar2;
          pbVar3 = pbVar3 + 1;
        } while (bVar2 != 0);
        if (*(int *)(unaff_ESI + 0x188) == 0) {
          iVar5 = FUN_0063a5d0(pbVar1,1,param_1);
          *(int *)(unaff_ESI + 400) = iVar5;
          if (iVar5 == 0) {
            return;
          }
          FUN_00639f20(iVar5,FUN_00411ec0);
          return;
        }
        iVar5 = FUN_0063a690(*(int *)(unaff_ESI + 0x188),param_1);
        *(int *)(unaff_ESI + 400) = iVar5;
        if (iVar5 == 0) {
          return;
        }
        FUN_00639f20(iVar5,FUN_00411ef0);
        return;
      }
    }
    FUN_00412160();
  }
  return;
}

