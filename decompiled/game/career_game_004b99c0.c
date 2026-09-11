/* Decompiled from Speed.exe @ 004b99c0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004b99c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar1 = 0;
  while( true ) {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + -4;
    }
    iVar3 = param_1;
    if (param_1 == -4) {
      iVar3 = 0;
    }
    if (iVar4 == iVar3) break;
    iVar1 = iVar1 + 1;
    FUN_004f42f0("MULTITRACK_%d",iVar1);
    uVar2 = FUN_004ad6d0(*(undefined4 *)(iVar4 + 0x18));
    FUN_00495f00(uVar2);
    iVar4 = *(int *)(iVar4 + 4);
  }
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 != 0) {
    if (*(int *)(param_1 + 0x10) <= iVar1) goto LAB_004b9aa9;
    iVar1 = iVar1 + 1;
    FUN_004f42f0("MULTITRACK_%d",iVar1);
    uVar2 = FUN_004ad6d0(*(undefined4 *)(iVar4 + 0x18));
    FUN_00495f00(uVar2);
  }
  if (iVar1 < *(int *)(param_1 + 0x10)) {
    do {
      iVar1 = iVar1 + 1;
      FUN_004f42f0("MULTITRACK_%d",iVar1);
      FUN_004f6850("<empty>");
    } while (iVar1 < *(int *)(param_1 + 0x10));
  }
LAB_004b9aa9:
  if (iVar1 < 8) {
    iVar1 = iVar1 + 1;
    do {
      FUN_004f42f0("MULTITRACK_%d",iVar1);
      FUN_004f6850(&DAT_006b9172);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 9);
  }
  return;
}

