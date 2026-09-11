/* Decompiled from Speed.exe @ 00481510 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void FUN_00481510(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  
  iVar4 = param_1;
  iVar5 = *(int *)(param_1 + 0x58);
  if (iVar5 == *(int *)(param_1 + 0x5c)) {
    return;
  }
  do {
    uVar3 = *(ushort *)(*(int *)(param_1 + 0x54) + 2 + iVar5);
    uVar8 = (uint)uVar3;
    puVar9 = (undefined4 *)(*(int *)(param_1 + 0x54) + iVar5);
    iVar5 = iVar5 + uVar8;
  } while (iVar5 != *(int *)(param_1 + 0x5c));
  uVar10 = (uint)*(byte *)((int)puVar9 + 1);
  pbVar6 = (byte *)((int)puVar9 + 1);
  switch(*(undefined1 *)puVar9) {
  case 0:
    FUN_00480a50(param_1,0);
  case 3:
    puVar11 = (undefined4 *)(uVar10 * 0x4c + 0xd0 + param_1);
    for (iVar5 = 0x13; puVar9 = puVar9 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar9;
      puVar11 = puVar11 + 1;
    }
    *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - uVar8;
    return;
  case 1:
    FUN_00480660(param_1,uVar10);
    *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - uVar8;
    return;
  case 2:
    *(undefined1 *)(uVar10 * 0x4c + 0xd0 + param_1) = *(undefined1 *)(puVar9 + 1);
    *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - uVar8;
    return;
  case 4:
    uVar3 = uVar3 >> 3;
    uVar10 = (uint)uVar3;
    iVar5 = 0;
    param_1 = 0;
    if (3 < uVar3) {
      iVar7 = 3;
      do {
        *(undefined4 *)((uint)*pbVar6 * 0x4c + 0xd8 + iVar4) = *(undefined4 *)(pbVar6 + 3);
        *(undefined4 *)((uint)pbVar6[8] * 0x4c + 0xd8 + iVar4) = *(undefined4 *)(pbVar6 + 0xb);
        *(undefined4 *)((uint)pbVar6[0x10] * 0x4c + 0xd8 + iVar4) = *(undefined4 *)(pbVar6 + 0x13);
        *(undefined4 *)((uint)pbVar6[0x18] * 0x4c + 0xd8 + iVar4) = *(undefined4 *)(pbVar6 + 0x1b);
        iVar5 = param_1 + 4;
        iVar7 = iVar7 + 4;
        pbVar6 = pbVar6 + 0x20;
        param_1 = iVar5;
      } while (iVar7 < (int)uVar10);
    }
    if (iVar5 < (int)uVar10) {
      pbVar6 = (byte *)((int)puVar9 + iVar5 * 8 + 1);
      iVar5 = uVar10 - iVar5;
      do {
        bVar2 = *pbVar6;
        pbVar1 = pbVar6 + 3;
        pbVar6 = pbVar6 + 8;
        iVar5 = iVar5 + -1;
        *(undefined4 *)((uint)bVar2 * 0x4c + 0xd8 + iVar4) = *(undefined4 *)pbVar1;
      } while (iVar5 != 0);
      *(uint *)(iVar4 + 0x5c) = *(int *)(iVar4 + 0x5c) - uVar8;
      return;
    }
    goto switchD_00481555_default;
  case 5:
    FUN_004812b0(param_1,uVar10,1);
    *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - uVar8;
    return;
  case 6:
    pbVar6 = (byte *)(uVar10 * 0x4c + 0xd2 + param_1);
    break;
  case 7:
    FUN_004812b0(param_1,uVar10,0);
    *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - uVar8;
    return;
  case 8:
    pbVar6 = (byte *)(uVar10 * 0x4c + 0xd3 + param_1);
    break;
  case 9:
    pbVar6 = (byte *)(uVar10 * 0x4c + 0xd1 + param_1);
    break;
  case 10:
    pbVar6 = (byte *)(uVar10 * 0x4c + 0xd6 + param_1);
    break;
  case 0xb:
    pbVar6 = (byte *)(uVar10 * 0x4c + 0xd7 + param_1);
    break;
  default:
    goto switchD_00481555_default;
  }
  *pbVar6 = *pbVar6 ^ 1;
switchD_00481555_default:
  *(uint *)(iVar4 + 0x5c) = *(int *)(iVar4 + 0x5c) - uVar8;
  return;
}

