/* Decompiled from Speed.exe @ 0049f000 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0049f000(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) goto LAB_0049f08b;
    iVar2 = FUN_004ef050(0x7c34f6db);
  }
  if (iVar2 != 0) {
    for (iVar1 = *(int *)(iVar2 + 0x4c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      iVar3 = FUN_004fd230();
      if (*(int *)(iVar1 + 0x30) == iVar3) {
        if (iVar1 != 0) {
          if (iVar1 != *(int *)(iVar2 + 0x54)) {
            *(int *)(iVar2 + 0x54) = iVar1;
            FUN_004ff030(iVar2);
            *(undefined4 *)(*(int *)(iVar2 + 0x54) + 0x10) = 0;
          }
          *(undefined4 *)(iVar1 + 0x10) = 0;
        }
        break;
      }
    }
  }
LAB_0049f08b:
  iVar2 = *(int *)(DAT_00735ed0 + 0x1c);
  FUN_004f6850(iVar2 + 0xc);
  FUN_00495f00(*(undefined4 *)(iVar2 + 8));
  return;
}

