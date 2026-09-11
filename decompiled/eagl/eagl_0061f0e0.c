/* spd-match: far pct=43.52 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0061f0e0 */
/* S45 QUARANTINE: Windows/D3D — out of WASM scope (see QUARANTINE.md) */
/* Module: EAGL */
/* Ghidra DecompileModule */


void __thiscall FUN_0061f0e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x10);
  if (param_2 == iVar2) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10) = *(undefined4 *)(iVar2 + 0x168);
  }
  else {
    do {
      iVar1 = iVar2;
      if (iVar1 == 0) break;
      iVar2 = *(int *)(iVar1 + 0x168);
    } while (*(int *)(iVar1 + 0x168) != param_2);
    iVar2 = *(int *)(iVar1 + 0x168);
    *(undefined4 *)(iVar1 + 0x168) = *(undefined4 *)(iVar2 + 0x168);
  }
  FUN_0040a880();
  (*(code *)PTR_FUN_006dfaa0)(iVar2,0x170);
  if (param_2 == *(int *)(*(int *)(param_1 + 0xc) + 0xc)) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc) = 0;
  }
  return;
}

