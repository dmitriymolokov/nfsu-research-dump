/* Decompiled from Speed.exe @ 00657b50 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_00657b50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  iVar5 = *(short *)(param_2 + 2) * 0x110 + DAT_0071400c;
  *(undefined4 *)(iVar5 + 0xe4) = 0;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  *(undefined4 *)(iVar5 + 0x28) = 0;
  iVar4 = (int)*(short *)(param_2 + 2);
  iVar1 = iVar5 + 0xe4;
  iVar2 = FUN_0065be20(*(undefined4 *)(param_2 + 0x14),*(undefined1 *)(param_2 + 5),
                       *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                       *(undefined1 *)(param_2 + 4),*(undefined4 *)(param_2 + 0x10),iVar4,
                       *(undefined1 *)(param_2 + 6),param_1 + 4);
  *(int *)(iVar5 + 0x18) = iVar2;
  *(undefined2 *)(iVar2 + 0x18) = 5;
  FUN_006577e0(iVar1,*(undefined4 *)(iVar5 + 0x18));
  uVar3 = FUN_00650fd0(0x1c);
  *(undefined4 *)(iVar5 + 0x1c) = uVar3;
  FUN_0065b470(uVar3);
  *(undefined2 *)(*(int *)(iVar5 + 0x1c) + 0x18) = 1;
  FUN_006577e0(iVar1,*(undefined4 *)(iVar5 + 0x1c));
  if (*(int *)(param_2 + 0x18) != 0) {
    if (*(int *)(param_2 + 0x10) != 0) {
      iVar4 = -1;
    }
    uVar3 = FUN_00650fd0(0x1828);
    *(undefined4 *)(iVar5 + 0x20) = uVar3;
    FUN_0065b380(uVar3,*(undefined4 *)(param_2 + 0x18),iVar4);
    *(undefined2 *)(*(int *)(iVar5 + 0x20) + 0x18) = 4;
    FUN_006577e0(iVar1,*(undefined4 *)(iVar5 + 0x20));
  }
  return 1;
}

