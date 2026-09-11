/* Decompiled from Speed.exe @ 0066cf50 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0066cf50(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0066c8d0(200);
  FUN_0066cf00();
  if (*(int *)(param_1 + 0x80) == 4) {
    FUN_0066c120();
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  iVar2 = DAT_00717960;
  if (iVar1 != 0) {
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x68)) {
      if (*(int *)(iVar2 + 0x6c) == iVar1) goto LAB_0066cfac;
    }
    FUN_00662ce0(iVar1);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
LAB_0066cfac:
  FUN_00668cf0(param_1 + 0x1e0);
  FUN_00447030(*(undefined4 *)(param_1 + 0x98));
  FUN_00447030(*(undefined4 *)(param_1 + 0xbc));
  FUN_00447030(param_1);
  return;
}

