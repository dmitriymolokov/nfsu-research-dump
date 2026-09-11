/* Decompiled from Speed.exe @ 004430b0 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Removing unreachable block (ram,0x004430e6) */

void FUN_004430b0(void)

{
  void *_Memory;
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  byte abStack_100 [256];
  
  if (DAT_00736154 != 0) {
    pbVar2 = (byte *)((int)DAT_00736150 + 9);
    uVar6 = DAT_00736154;
    do {
      if (pbVar2[2] == 5) {
        if (pbVar2[4] == 1) {
          *(undefined1 *)((&DAT_0077af30)[*pbVar2] + 0x17) = 1;
        }
        else {
          *(undefined1 *)((&DAT_0077af30)[*pbVar2] + 0x16) = 1;
        }
      }
      pbVar2 = pbVar2 + 0x20;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = 0;
  do {
    if ((-1 < (int)uVar6) && (*(int *)((int)&DAT_0077af30 + uVar6) != 0)) {
      FUN_00442980();
    }
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x200);
  FUN_00442150();
  _Memory = _malloc(DAT_00736154 << 3);
  uVar6 = DAT_00736154;
  uVar3 = 0;
  puVar1 = DAT_00736150;
  if (DAT_00736154 != 0) {
    do {
      *(undefined4 **)((int)_Memory + uVar3 * 8) = puVar1;
      *(uint *)((int)_Memory + uVar3 * 8 + 4) = uVar3;
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 8;
    } while (uVar3 < uVar6);
  }
  FUN_00442ed0(_Memory,8,&LAB_00443090);
  uVar6 = DAT_00736154;
  uVar3 = 0;
  if (DAT_00736154 != 0) {
    piVar4 = (int *)((int)_Memory + 4);
    do {
      abStack_100[*piVar4] = (byte)uVar3;
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 < DAT_00736154);
  }
  uVar3 = 0;
  do {
    if (((-1 < (int)uVar3) && (iVar5 = *(int *)((int)&DAT_0077af30 + uVar3), iVar5 != 0)) &&
       (iVar8 = 0, 0 < *(short *)(iVar5 + 0x10))) {
      pbVar2 = (byte *)(iVar5 + 0x2fe);
      do {
        if (pbVar2[-1] != 0xff) {
          pbVar2[-1] = abStack_100[pbVar2[-1]];
        }
        if (*pbVar2 != 0xff) {
          *pbVar2 = abStack_100[*pbVar2];
        }
        iVar8 = iVar8 + 1;
        pbVar2 = pbVar2 + 0x88;
      } while (iVar8 < *(short *)(iVar5 + 0x10));
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x200);
  puVar1 = _malloc(uVar6 << 5);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar7 = puVar1;
    if (-1 < (int)(uVar6 - 1)) {
      do {
        puVar9 = puVar7;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        *(undefined1 *)(puVar7 + 2) = 0;
        uVar6 = uVar6 - 1;
        puVar7 = puVar7 + 8;
      } while (uVar6 != 0);
    }
  }
  uVar6 = DAT_00736154;
  uVar3 = 0;
  puVar7 = puVar1;
  if (DAT_00736154 != 0) {
    do {
      iVar5 = uVar3 * 8;
      uVar3 = uVar3 + 1;
      puVar9 = *(undefined4 **)((int)_Memory + iVar5);
      puVar10 = puVar7;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      puVar7 = puVar7 + 8;
    } while (uVar3 < uVar6);
  }
  puVar7 = puVar1;
  puVar9 = DAT_00736150;
  for (iVar5 = (uVar6 & 0x7ffffff) << 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  _free(_Memory);
  _free(puVar1);
  return;
}

