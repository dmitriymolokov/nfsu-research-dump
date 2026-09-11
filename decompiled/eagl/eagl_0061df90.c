/* Decompiled from Speed.exe @ 0061df90 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __fastcall FUN_0061df90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      (**(code **)(*(int *)(param_1 + 8) + iVar1 * 8))
                (*(undefined4 *)(*(int *)(param_1 + 8) + 4 + iVar1 * 8));
    }
    (*(code *)PTR_FUN_006dfaa0)(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 4) << 3);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  puVar3 = *(undefined4 **)(param_1 + 0xc);
  while (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar3[3];
    (*(code *)*puVar3)(puVar3[1],puVar3[2]);
    (*(code *)PTR_FUN_006dfaa0)(puVar3,0x10);
    puVar3 = puVar2;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

