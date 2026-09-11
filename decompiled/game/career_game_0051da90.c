/* Decompiled from Speed.exe @ 0051da90 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_0051da90(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int unaff_EBX;
  int iVar3;
  
  if (DAT_006f1dd8 != 0) {
    FUN_00532bb0();
    FUN_0063f0a0(0);
    FUN_0051cf40();
    *(undefined4 *)(unaff_EBX + 0x78) = 0;
    *(undefined4 *)(unaff_EBX + 0x7c) = 0;
    (**(code **)(**(int **)(unaff_EBX + 0xc0) + 8))();
    (**(code **)(**(int **)(unaff_EBX + 0xbc) + 8))();
    *(undefined4 *)(*(int *)(unaff_EBX + 0x78) * 0x1c + 0x1e8 + unaff_EBX) = 0;
    *(undefined4 *)(*(int *)(unaff_EBX + 0x78) * 0x1c + 0x1f0 + unaff_EBX) = 0;
    *(undefined4 *)(*(int *)(unaff_EBX + 0x78) * 0x1c + 0x1ec + unaff_EBX) = 0xffffffff;
    *(undefined4 *)(*(int *)(unaff_EBX + 0x78) * 0x1c + 500 + unaff_EBX) = 0;
    *(undefined4 *)((*(int *)(unaff_EBX + 0x78) + 0x12) * 0x1c + unaff_EBX) = 0;
    *(undefined4 *)(*(int *)(unaff_EBX + 0x78) * 0x1c + 0x1fc + unaff_EBX) = 0xffffffff;
    iVar3 = *(int *)(unaff_EBX + 0x78) + 1;
    *(int *)(unaff_EBX + 0x78) = iVar3;
    *(undefined4 *)(iVar3 * 0x1c + 0x1e8 + unaff_EBX) = 0;
    *(undefined4 *)(*(int *)(unaff_EBX + 0x78) * 0x1c + 0x1f0 + unaff_EBX) = 1;
    *(undefined4 *)(*(int *)(unaff_EBX + 0x78) * 0x1c + 0x1ec + unaff_EBX) = 0xffffffff;
    *(undefined4 *)(*(int *)(unaff_EBX + 0x78) * 0x1c + 500 + unaff_EBX) = 0;
    *(undefined4 *)((*(int *)(unaff_EBX + 0x78) + 0x12) * 0x1c + unaff_EBX) = 0;
    iVar3 = DAT_006f1ddc;
    *(undefined4 *)(*(int *)(unaff_EBX + 0x78) * 0x1c + 0x1fc + unaff_EBX) = 0xffffffff;
    *(int *)(unaff_EBX + 0x78) = *(int *)(unaff_EBX + 0x78) + 1;
    if (iVar3 != 0) {
      pvVar1 = _malloc(0x2d0);
      if (pvVar1 == (void *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_00537930();
      }
      *(undefined4 *)(unaff_EBX + 0x104) = uVar2;
      *(undefined4 *)(*(int *)(unaff_EBX + 0x78) * 0x1c + 0x1e8 + unaff_EBX) = 1;
      *(undefined4 *)(*(int *)(unaff_EBX + 0x78) * 0x1c + 0x1f0 + unaff_EBX) = 0;
      *(undefined4 *)(*(int *)(unaff_EBX + 0x78) * 0x1c + 0x1ec + unaff_EBX) = 0xffffffff;
      *(undefined4 *)(*(int *)(unaff_EBX + 0x78) * 0x1c + 500 + unaff_EBX) = 0;
      *(undefined4 *)((*(int *)(unaff_EBX + 0x78) + 0x12) * 0x1c + unaff_EBX) = 0;
      *(undefined4 *)(*(int *)(unaff_EBX + 0x78) * 0x1c + 0x1fc + unaff_EBX) = 0xffffffff;
      uVar2 = DAT_006ee6f0;
      iVar3 = *(int *)(unaff_EBX + 0x78) + 1;
      *(int *)(unaff_EBX + 0x78) = iVar3;
      switch(uVar2) {
      case 1:
        uVar2 = 5;
        break;
      case 2:
        uVar2 = 6;
        break;
      case 3:
        uVar2 = 7;
        break;
      case 4:
        uVar2 = 8;
        break;
      default:
        uVar2 = 4;
        break;
      case 9:
        uVar2 = 9;
      }
      *(int *)(unaff_EBX + 0x56c) = iVar3;
      *(undefined4 *)(unaff_EBX + 0x568) = uVar2;
      *(undefined4 *)(iVar3 * 0x1c + 0x1e8 + unaff_EBX) = 1;
      *(undefined4 *)(*(int *)(unaff_EBX + 0x78) * 0x1c + 0x1f0 + unaff_EBX) = uVar2;
      *(undefined4 *)(*(int *)(unaff_EBX + 0x78) * 0x1c + 0x1ec + unaff_EBX) = 0xffffffff;
      *(undefined4 *)(*(int *)(unaff_EBX + 0x78) * 0x1c + 500 + unaff_EBX) = 0;
      *(undefined4 *)((*(int *)(unaff_EBX + 0x78) + 0x12) * 0x1c + unaff_EBX) = 0;
      *(undefined4 *)(*(int *)(unaff_EBX + 0x78) * 0x1c + 0x1fc + unaff_EBX) = 0xffffffff;
      *(int *)(unaff_EBX + 0x78) = *(int *)(unaff_EBX + 0x78) + 1;
      FUN_00537a60(0,1,(&PTR_DAT_006f6fdc)[*(int *)(unaff_EBX + 0xf0)],
                   (&PTR_DAT_006f6f9c)[*(int *)(unaff_EBX + 0xf0)]);
      FUN_00537a60(4,0x5f,PTR_DAT_006f6d44,(&PTR_DAT_006f6f9c)[*(int *)(unaff_EBX + 0xf0)]);
      FUN_0051cc10(unaff_EBX);
    }
    iVar3 = *(int *)(unaff_EBX + 0x78) + -1;
    *(int *)(unaff_EBX + 0x78) = iVar3;
    *(undefined4 *)(iVar3 * 0x1c + 500 + unaff_EBX) = param_1;
    *(undefined4 *)((*(int *)(unaff_EBX + 0x78) + 0x12) * 0x1c + unaff_EBX) = param_2;
    *(int *)(unaff_EBX + 0x78) = *(int *)(unaff_EBX + 0x78) + 1;
    FUN_0051cc10(unaff_EBX);
    FUN_0063f0a0(0);
    *(undefined4 *)(DAT_007356a8 + 0xf8) = 1;
  }
  return;
}

