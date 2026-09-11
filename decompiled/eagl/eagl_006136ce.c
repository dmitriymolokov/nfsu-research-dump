/* Decompiled from Speed.exe @ 006136ce */
/* Module: EAGL */
/* Ghidra DecompileAll */


uint FUN_006136ce(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  
  iVar2 = *(int *)(*(int *)(param_3 + 0x14) + param_1 * 4);
  iVar3 = *(int *)(*(int *)(param_3 + 0x14) + param_2 * 4);
  uVar4 = *(uint *)(iVar2 + 0x44);
  pbVar5 = *(byte **)(uVar4 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    pbVar5 = &DAT_006b9172;
  }
  pbVar7 = *(byte **)(*(int *)(iVar3 + 0x44) + 0x20);
  pbVar8 = &DAT_006b9172;
  if (pbVar7 != (byte *)0x0) {
    pbVar8 = pbVar7;
  }
  do {
    bVar1 = *pbVar5;
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_00613728:
      iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_0061372d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_00613728;
    pbVar5 = pbVar5 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_0061372d:
  if (iVar6 < 1) {
    if (-1 < iVar6) {
      pbVar5 = *(byte **)(*(int *)(*(int *)(iVar3 + 0x44) + 0x14) + 0x18);
      pbVar7 = *(byte **)(*(int *)(uVar4 + 0x14) + 0x18);
      do {
        bVar1 = *pbVar7;
        bVar9 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00613771:
          iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00613776;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar9 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00613771;
        pbVar7 = pbVar7 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_00613776:
      if (0 < iVar6) goto LAB_00613731;
      if (-1 < iVar6) {
        if (*(uint *)(iVar3 + 0x44) < uVar4) goto LAB_00613731;
        if ((*(uint *)(iVar3 + 0x44) <= uVar4) &&
           (*(uint *)(iVar3 + 0x58) <= *(uint *)(iVar2 + 0x58))) {
          if (*(uint *)(iVar2 + 0x58) != *(uint *)(iVar3 + 0x58)) goto LAB_00613731;
          if (*(uint *)(iVar3 + 0xc) <= *(uint *)(iVar2 + 0xc)) {
            return (uint)(*(uint *)(iVar3 + 0xc) < *(uint *)(iVar2 + 0xc));
          }
        }
      }
    }
    uVar4 = 0xffffffff;
  }
  else {
LAB_00613731:
    uVar4 = 1;
  }
  return uVar4;
}

