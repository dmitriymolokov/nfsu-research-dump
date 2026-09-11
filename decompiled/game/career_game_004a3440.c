/* Decompiled from Speed.exe @ 004a3440 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004a3440(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar1 = FUN_0043f1f0();
  puVar4 = (undefined4 *)(param_1 + 0x148);
  do {
    iVar2 = FUN_0043f1d0();
    if (iVar1 == iVar2) {
      return;
    }
    puVar4[-1] = *(undefined4 *)(iVar1 + 8);
    *puVar4 = *(undefined4 *)(iVar1 + 0x10);
    *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(iVar1 + 0x14);
    FUN_004f68c0(0x20,*(undefined4 *)(iVar1 + 0x18));
    uVar3 = FUN_004c2a50();
    puVar4[10] = uVar3;
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 0xc;
    iVar1 = FUN_0043f1f0();
  } while (iVar5 < 4);
  return;
}

