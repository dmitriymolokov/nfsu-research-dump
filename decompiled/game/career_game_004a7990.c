/* Decompiled from Speed.exe @ 004a7990 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004a7990(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0xa0) < param_2) && (iVar1 = *(int *)(param_1 + 0x70), iVar1 != 0)) {
    for (iVar2 = *(int *)(iVar1 + 0x4c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      iVar3 = FUN_004fd230();
      if (*(int *)(iVar2 + 0x30) == iVar3) {
        if (iVar2 != 0) {
          if (iVar2 != *(int *)(iVar1 + 0x54)) {
            *(int *)(iVar1 + 0x54) = iVar2;
            FUN_004ff030(iVar1);
            *(undefined4 *)(*(int *)(iVar1 + 0x54) + 0x10) = 0;
          }
          *(undefined4 *)(iVar2 + 0x10) = 0;
        }
        break;
      }
    }
  }
  FUN_004f68a0(&DAT_006c6d68,param_2);
  *(int *)(param_1 + 0xa0) = param_2;
  return;
}

