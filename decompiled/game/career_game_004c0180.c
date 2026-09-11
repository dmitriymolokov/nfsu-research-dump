/* Decompiled from Speed.exe @ 004c0180 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void __fastcall FUN_004c0180(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (DAT_007361b4 == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *(int *)(DAT_007361b4 + 8);
  }
  if (*(int *)(DAT_007361f0 + 0x1c) == iVar3) {
    uVar2 = 0;
  }
  else {
    if (DAT_007361b8 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = *(int *)(DAT_007361b8 + 8);
    }
    uVar2 = (uint)(*(int *)(DAT_007361f0 + 0x1c) == iVar3);
  }
  uVar1 = *(undefined4 *)(*(int *)(*(int *)((&DAT_007361b4)[uVar2] + 4) + 0x10) + 0x18);
  FUN_004f68c0(0x20,"%s%1d",param_1 + 0x21d,*(undefined4 *)(param_1 + 0x1cc));
  FUN_004f67f0("NOS Level (requires race restart):");
  FUN_004f68c0(0x20,"OptionData_%1d",*(undefined4 *)(param_1 + 0x1cc));
  switch(uVar1) {
  case 0:
    puVar4 = &DAT_006ca910;
    break;
  case 1:
    puVar4 = &DAT_006c59e8;
    break;
  case 2:
    puVar4 = &DAT_006c59e4;
    break;
  case 3:
    puVar4 = &DAT_006c59e0;
    break;
  default:
    goto switchD_004c0221_default;
  }
  FUN_004f67f0(puVar4);
switchD_004c0221_default:
  return;
}

