/* Decompiled from Speed.exe @ 00621ea0 */
/* S45 QUARANTINE: Windows/D3D — out of WASM scope (see QUARANTINE.md) */
/* Module: EAGL */
/* Ghidra DecompileModule */


void FUN_00621ea0(void)

{
  int *piVar1;
  int *piVar2;
  
  for (piVar2 = DAT_00709ea0; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[3]) {
    if (*piVar2 != 0) {
      piVar1 = *(int **)(*(int *)(*piVar2 + 0x24) + 0x18);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(*(int *)(*piVar2 + 0x24) + 0x18) = 0;
      }
      piVar1 = *(int **)(*(int *)(*piVar2 + 0x24) + 0x1c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(*(int *)(*piVar2 + 0x24) + 0x1c) = 0;
      }
    }
  }
  return;
}

