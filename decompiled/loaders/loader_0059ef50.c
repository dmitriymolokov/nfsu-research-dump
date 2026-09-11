/* Decompiled from Speed.exe @ 0059ef50 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_0059ef50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_EDX;
  undefined4 *puVar3;
  int iVar4;
  int local_8;
  
  iVar1 = FUN_00674898();
  puVar3 = *(undefined4 **)(param_1 + 0x30);
  iVar4 = 0;
  local_8 = iVar1;
  if (0 < iVar1) {
    do {
      if (puVar3 != (undefined4 *)0x0) {
        iVar4 = puVar3[2];
        if ((iVar4 != 0) &&
           (*(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffe | 0x400000,
           *(int *)(iVar4 + 0x18) == 5)) {
          uVar2 = *(undefined4 *)(iVar4 + 0x60);
          iVar4 = *(int *)(iVar4 + 0x5c);
          if (0 < iVar4) {
            do {
              FUN_004f6970(uVar2);
              uVar2 = *(undefined4 *)(extraout_EDX + 4);
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        if (puVar3 != (undefined4 *)(param_1 + 0x30)) {
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      local_8 = local_8 + -1;
      iVar4 = iVar1;
    } while (local_8 != 0);
  }
  if (iVar4 < *(int *)(param_1 + 0x38)) {
    do {
      if ((puVar3 != (undefined4 *)0x0) &&
         (FUN_004f6910(puVar3[2]), puVar3 != (undefined4 *)(param_1 + 0x30))) {
        puVar3 = (undefined4 *)*puVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x38));
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar2 = FUN_00674898();
    FUN_004f68a0(&DAT_006ca778,uVar2);
  }
  return;
}

