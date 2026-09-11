/* Decompiled from Speed.exe @ 0064b5c0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_0064b5c0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  *(int *)(param_1 + 0x14) = param_1 + 0x28;
  iVar4 = param_1 + 0x28 + (uint)*(ushort *)(param_1 + 10) * 0xc;
  *(int *)(param_1 + 0x18) = iVar4;
  sVar3 = DAT_00713c5c;
  iVar5 = 0;
  *(uint *)(param_1 + 0x1c) = iVar4 + (uint)*(ushort *)(param_1 + 0xc) * 0xc;
  if (*(ushort *)(param_1 + 10) != 0) {
    iVar4 = 0;
    do {
      sVar3 = sVar3 + 1;
      *(int *)(iVar4 + 4 + *(int *)(param_1 + 0x14)) =
           *(int *)(iVar4 + 4 + *(int *)(param_1 + 0x14)) + param_1;
      if (sVar3 < 0) {
        sVar3 = 1;
      }
      *(short *)(iVar4 + 10 + *(int *)(param_1 + 0x14)) = sVar3;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xc;
      DAT_00713c5c = sVar3;
    } while (iVar5 < (int)(uint)*(ushort *)(param_1 + 10));
  }
  iVar4 = 0;
  if (*(short *)(param_1 + 0xc) != 0) {
    iVar5 = 0;
    do {
      sVar3 = sVar3 + 1;
      *(int *)(*(int *)(param_1 + 0x18) + 4 + iVar5) =
           *(int *)(*(int *)(param_1 + 0x18) + 4 + iVar5) + param_1;
      if (sVar3 < 0) {
        sVar3 = 1;
      }
      *(short *)(*(int *)(param_1 + 0x18) + 10 + iVar5) = sVar3;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0xc;
      DAT_00713c5c = sVar3;
    } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0xc));
  }
  iVar4 = 0;
  if (*(short *)(param_1 + 0xe) != 0) {
    iVar5 = 0;
    do {
      sVar3 = sVar3 + 1;
      *(int *)(iVar5 + 8 + *(int *)(param_1 + 0x1c)) =
           *(int *)(iVar5 + 8 + *(int *)(param_1 + 0x1c)) + param_1;
      if (sVar3 < 0) {
        sVar3 = 1;
      }
      *(short *)(iVar5 + 0xe + *(int *)(param_1 + 0x1c)) = sVar3;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x10;
      DAT_00713c5c = sVar3;
    } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0xe));
  }
  piVar2 = (int *)(param_1 + 0x20);
  *piVar2 = (int)DAT_00713c60;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (DAT_00713c60 != (int *)0x0) {
    puVar1 = (undefined4 *)((int)DAT_00713c60 + 4);
    DAT_00713c60 = piVar2;
    *puVar1 = piVar2;
    piVar2 = DAT_00713c60;
  }
  DAT_00713c60 = piVar2;
  return 0;
}

