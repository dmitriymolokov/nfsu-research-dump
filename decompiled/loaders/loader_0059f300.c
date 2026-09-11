/* Decompiled from Speed.exe @ 0059f300 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __thiscall FUN_0059f300(int param_1,char param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int extraout_EDX;
  int iVar3;
  int *piVar4;
  
  if (param_2 == '\0') {
    FUN_004f6910(*(undefined4 *)(param_1 + 8));
    FUN_004f6910(*(undefined4 *)(param_1 + 0x10));
    for (puVar1 = *(undefined4 **)(param_1 + 0x30); puVar1 != (undefined4 *)(param_1 + 0x30);
        puVar1 = (undefined4 *)*puVar1) {
      FUN_004f6910(puVar1[2]);
    }
  }
  else {
    FUN_004f6970();
    FUN_004f6970(*(undefined4 *)(param_1 + 0x10));
    piVar4 = *(int **)(param_1 + 0x30);
    if (piVar4 != (int *)(param_1 + 0x30)) {
      do {
        iVar3 = piVar4[2];
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
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)(param_1 + 0x30));
      return;
    }
  }
  return;
}

