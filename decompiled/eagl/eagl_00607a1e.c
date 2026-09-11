/* Decompiled from Speed.exe @ 00607a1e */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_00607a1e(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + uVar3 * 4);
      if (*(int *)(iVar1 + 0x24) != -1) {
        iVar2 = *(int *)(iVar1 + 0x24) * 4;
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(*(int *)(iVar2 + *(int *)(param_1 + 0x14)) + 8)
        ;
        *(undefined4 *)(iVar1 + 0xc) =
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar2) + 0xc);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  return 0;
}

