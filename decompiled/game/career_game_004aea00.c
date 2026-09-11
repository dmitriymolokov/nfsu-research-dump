/* Decompiled from Speed.exe @ 004aea00 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004aea00(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = &DAT_006fb05c;
  do {
    if (*(int *)(param_1 + 8) == -2) {
      uVar1 = *puVar2;
      iVar3 = 0;
      do {
        FUN_005740b0(uVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    else {
      FUN_005740b0(*puVar2);
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x6fb088);
  return;
}

