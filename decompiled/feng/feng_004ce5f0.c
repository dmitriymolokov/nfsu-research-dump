/* Decompiled from Speed.exe @ 004ce5f0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004ce5f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
     (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c == 0) goto LAB_004ce683;
    iVar1 = FUN_004ef050(0x798c7eff);
  }
  if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + 0x4c), iVar3 != 0)) {
    while (iVar2 = FUN_004fd230(), *(int *)(iVar3 + 0x30) != iVar2) {
      iVar3 = *(int *)(iVar3 + 4);
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 0x70) = 1;
        return;
      }
    }
    if (iVar3 != 0) {
      if (iVar3 != *(int *)(iVar1 + 0x54)) {
        *(int *)(iVar1 + 0x54) = iVar3;
        FUN_004ff030(iVar1);
        *(undefined4 *)(*(int *)(iVar1 + 0x54) + 0x10) = 0;
      }
      *(undefined4 *)(iVar3 + 0x10) = 0;
    }
  }
LAB_004ce683:
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}

