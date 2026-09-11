/* Decompiled from Speed.exe @ 00480660 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void FUN_00480660(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar3 = param_2;
  if (2 < *(int *)(param_1 + 0xcb0)) {
    iVar2 = *(int *)(param_1 + 0xcb0) + -2;
    iVar1 = param_2;
    if (param_2 < 2) {
      iVar1 = 1;
    }
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
    }
    if (param_2 == iVar1) {
      bVar5 = (byte)param_2;
      param_2 = CONCAT22(0x50,(ushort)bVar5 << 8);
      FUN_00481720(&param_2,4);
      iVar2 = iVar3 * 0x4c + param_1;
      puVar7 = (undefined4 *)(iVar2 + 0xd0);
      FUN_00481720(puVar7,0x4c);
      iVar3 = (*(int *)(param_1 + 0xcb0) - iVar3) + -1;
      if (iVar3 != 0) {
        puVar6 = (undefined4 *)(iVar2 + 0x11c);
        for (uVar4 = (uint)(iVar3 * 0x4c) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
      }
      iVar3 = *(int *)(param_1 + 0xcb0);
      *(int *)(param_1 + 0xcb0) = iVar3 + -1;
      iVar2 = FUN_00480150(*(undefined4 *)(param_1 + 0xcc0));
      *(int *)(param_1 + 0xcb4) = iVar2;
      if ((iVar2 == 0) && (*(int *)(param_1 + 0xcb8) == 3)) {
        *(undefined4 *)(param_1 + 0xcb8) = 1;
      }
      if ((iVar2 == iVar3 + -2) && (*(int *)(param_1 + 0xcb8) == 4)) {
        *(undefined4 *)(param_1 + 0xcb8) = 1;
      }
    }
  }
  return;
}

