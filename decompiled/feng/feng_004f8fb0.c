/* Decompiled from Speed.exe @ 004f8fb0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f8fb0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)(param_1 + 8)) {
    for (; puVar1 != (undefined4 *)(param_1 + 8); puVar1 = (undefined4 *)*puVar1) {
      iVar3 = puVar1[2];
      if ((iVar3 != 0) &&
         (*(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffe | 0x400000,
         *(int *)(iVar3 + 0x18) == 5)) {
        uVar2 = *(undefined4 *)(iVar3 + 0x60);
        iVar3 = *(int *)(iVar3 + 0x5c);
        if (0 < iVar3) {
          do {
            FUN_004f6970(uVar2);
            uVar2 = *(undefined4 *)(extraout_EDX + 4);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
    iVar3 = *(int *)(param_1 + 0x10);
    if ((iVar3 != 0) &&
       (*(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar3 + 0x18) == 5)) {
      uVar2 = *(undefined4 *)(iVar3 + 0x60);
      iVar3 = *(int *)(iVar3 + 0x5c);
      if (0 < iVar3) {
        do {
          FUN_004f6970(uVar2);
          uVar2 = *(undefined4 *)(extraout_EDX_00 + 4);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return;
}

