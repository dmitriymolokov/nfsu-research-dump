/* Decompiled from Speed.exe @ 00621b00 */
/* S45 QUARANTINE: Windows/D3D — out of WASM scope (see QUARANTINE.md) */
/* Module: EAGL */
/* Ghidra DecompileModule */


void FUN_00621b00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0xc) != 0) && (iVar1 = FUN_00626990(), *(int *)(param_1 + 0x24) != 0)) {
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        uVar2 = FUN_00626980(iVar3);
        if (*(int *)(param_1 + 0x18) == 0) {
          if (iVar3 == 0) {
            FUN_00621670(*(undefined4 *)(param_1 + 0x24));
          }
          else {
            FUN_00621410(*(undefined4 *)(param_1 + 0x24),uVar2);
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x20) == 0)) {
    FUN_00626b60();
    (*(code *)PTR_FUN_006dfaa0)(iVar1,0x24);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_006dfaa0)(iVar1 + -4,*(undefined4 *)(iVar1 + -4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

